// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorModeChannelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorModeChannelProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUVChannelProperties();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUVChannelProperties_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUVEditorUVChannelProperties::execGetUVChannelNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVChannelNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUVEditorUVChannelProperties::execGetAssetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAssetNames();
		P_NATIVE_END;
	}
	void UUVEditorUVChannelProperties::StaticRegisterNativesUUVEditorUVChannelProperties()
	{
		UClass* Class = UUVEditorUVChannelProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetNames", &UUVEditorUVChannelProperties::execGetAssetNames },
			{ "GetUVChannelNames", &UUVEditorUVChannelProperties::execGetUVChannelNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics
	{
		struct UVEditorUVChannelProperties_eventGetAssetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVEditorUVChannelProperties_eventGetAssetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorModeChannelProperties.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorUVChannelProperties, nullptr, "GetAssetNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::UVEditorUVChannelProperties_eventGetAssetNames_Parms), Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics
	{
		struct UVEditorUVChannelProperties_eventGetUVChannelNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVEditorUVChannelProperties_eventGetUVChannelNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorModeChannelProperties.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorUVChannelProperties, nullptr, "GetUVChannelNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::UVEditorUVChannelProperties_eventGetUVChannelNames_Parms), Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUVChannelProperties);
	UClass* Z_Construct_UClass_UUVEditorUVChannelProperties_NoRegister()
	{
		return UUVEditorUVChannelProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUVChannelProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUVEditorUVChannelProperties_GetAssetNames, "GetAssetNames" }, // 2895993246
		{ &Z_Construct_UFunction_UUVEditorUVChannelProperties_GetUVChannelNames, "GetUVChannelNames" }, // 4273105897
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Layer Settings for the UVEditorMode\n */" },
		{ "IncludePath", "UVEditorModeChannelProperties.h" },
		{ "ModuleRelativePath", "Public/UVEditorModeChannelProperties.h" },
		{ "ToolTip", "UV Layer Settings for the UVEditorMode" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "UVChannel" },
		{ "DisplayName", "Asset" },
		{ "GetOptions", "GetAssetNames" },
		{ "ModuleRelativePath", "Public/UVEditorModeChannelProperties.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVChannelProperties, Asset), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "UVChannel" },
		{ "DisplayName", "UV Channel" },
		{ "GetOptions", "GetUVChannelNames" },
		{ "ModuleRelativePath", "Public/UVEditorModeChannelProperties.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVChannelProperties, UVChannel), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_UVChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::NewProp_UVChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUVChannelProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::ClassParams = {
		&UUVEditorUVChannelProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUVChannelProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUVChannelProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUVChannelProperties.OuterSingleton, Z_Construct_UClass_UUVEditorUVChannelProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUVChannelProperties.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorUVChannelProperties>()
	{
		return UUVEditorUVChannelProperties::StaticClass();
	}
	UUVEditorUVChannelProperties::UUVEditorUVChannelProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUVChannelProperties);
	UUVEditorUVChannelProperties::~UUVEditorUVChannelProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorUVChannelProperties, UUVEditorUVChannelProperties::StaticClass, TEXT("UUVEditorUVChannelProperties"), &Z_Registration_Info_UClass_UUVEditorUVChannelProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUVChannelProperties), 3896572895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_1384805003(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
