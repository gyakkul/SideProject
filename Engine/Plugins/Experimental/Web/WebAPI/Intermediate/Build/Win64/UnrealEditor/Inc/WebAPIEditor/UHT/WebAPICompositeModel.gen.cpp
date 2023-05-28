// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPICompositeModel.h"
#include "Dom/WebAPISchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPICompositeModel() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICompositeModel();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICompositeModel_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase();
	WEBAPIEDITOR_API UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebAPIModelCompositionType;
	static UEnum* EWebAPIModelCompositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIModelCompositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWebAPIModelCompositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("EWebAPIModelCompositionType"));
		}
		return Z_Registration_Info_UEnum_EWebAPIModelCompositionType.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UEnum* StaticEnum<EWebAPIModelCompositionType>()
	{
		return EWebAPIModelCompositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::Enumerators[] = {
		{ "EWebAPIModelCompositionType::Single", (int64)EWebAPIModelCompositionType::Single },
		{ "EWebAPIModelCompositionType::Multiple", (int64)EWebAPIModelCompositionType::Multiple },
		{ "EWebAPIModelCompositionType::All", (int64)EWebAPIModelCompositionType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Should contain *all* of the valid types. */" },
		{ "All.DisplayName", "All" },
		{ "All.Name", "EWebAPIModelCompositionType::All" },
		{ "All.ToolTip", "Should contain *all* of the valid types." },
		{ "ModuleRelativePath", "Public/Dom/WebAPICompositeModel.h" },
		{ "Multiple.Comment", "/** Should contain *one or more* of the valid types. */" },
		{ "Multiple.DisplayName", "Multiple" },
		{ "Multiple.Name", "EWebAPIModelCompositionType::Multiple" },
		{ "Multiple.ToolTip", "Should contain *one or more* of the valid types." },
		{ "Single.Comment", "/** Should contain *one* of the valid types. Maps to a Variant. */" },
		{ "Single.DisplayName", "Single" },
		{ "Single.Name", "EWebAPIModelCompositionType::Single" },
		{ "Single.ToolTip", "Should contain *one* of the valid types. Maps to a Variant." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		"EWebAPIModelCompositionType",
		"EWebAPIModelCompositionType",
		Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIModelCompositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebAPIModelCompositionType.InnerSingleton, Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWebAPIModelCompositionType.InnerSingleton;
	}
	void UWebAPICompositeModel::StaticRegisterNativesUWebAPICompositeModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPICompositeModel);
	UClass* Z_Construct_UClass_UWebAPICompositeModel_NoRegister()
	{
		return UWebAPICompositeModel::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPICompositeModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CompositionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompositionType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Types_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Types;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCodeText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedCodeText;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPICompositeModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPICompositeModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dom/WebAPICompositeModel.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPICompositeModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Name of the composition. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPICompositeModel.h" },
		{ "ToolTip", "Name of the composition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPICompositeModel, Name), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Name_MetaData)) }; // 4040585277
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_CompositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_CompositionType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Type of composition. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPICompositeModel.h" },
		{ "ToolTip", "Type of composition." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_CompositionType = { "CompositionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPICompositeModel, CompositionType), Z_Construct_UEnum_WebAPIEditor_EWebAPIModelCompositionType, METADATA_PARAMS(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_CompositionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_CompositionType_MetaData)) }; // 618255105
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(nullptr, 0) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Types_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Array of one or more types contained in the composition. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPICompositeModel.h" },
		{ "ToolTip", "Array of one or more types contained in the composition." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPICompositeModel, Types), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Types_MetaData)) }; // 4040585277
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_GeneratedCodeText_MetaData[] = {
		{ "Comment", "/** The last generated code as text for debugging. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPICompositeModel.h" },
		{ "ToolTip", "The last generated code as text for debugging." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_GeneratedCodeText = { "GeneratedCodeText", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPICompositeModel, GeneratedCodeText), METADATA_PARAMS(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_GeneratedCodeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_GeneratedCodeText_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPICompositeModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_CompositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_CompositionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Types_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_Types,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPICompositeModel_Statics::NewProp_GeneratedCodeText,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPICompositeModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPICompositeModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPICompositeModel_Statics::ClassParams = {
		&UWebAPICompositeModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPICompositeModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICompositeModel_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPICompositeModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICompositeModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPICompositeModel()
	{
		if (!Z_Registration_Info_UClass_UWebAPICompositeModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPICompositeModel.OuterSingleton, Z_Construct_UClass_UWebAPICompositeModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPICompositeModel.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPICompositeModel>()
	{
		return UWebAPICompositeModel::StaticClass();
	}
	UWebAPICompositeModel::UWebAPICompositeModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPICompositeModel);
	UWebAPICompositeModel::~UWebAPICompositeModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_Statics::EnumInfo[] = {
		{ EWebAPIModelCompositionType_StaticEnum, TEXT("EWebAPIModelCompositionType"), &Z_Registration_Info_UEnum_EWebAPIModelCompositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 618255105U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPICompositeModel, UWebAPICompositeModel::StaticClass, TEXT("UWebAPICompositeModel"), &Z_Registration_Info_UClass_UWebAPICompositeModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPICompositeModel), 2776445857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_4044617415(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
