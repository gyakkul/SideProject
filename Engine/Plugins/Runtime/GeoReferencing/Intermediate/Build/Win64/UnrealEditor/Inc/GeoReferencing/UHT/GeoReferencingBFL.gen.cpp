// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoReferencingBFL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoReferencingBFL() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOREFERENCING_API UClass* Z_Construct_UClass_UGeoReferencingBFL();
	GEOREFERENCING_API UClass* Z_Construct_UClass_UGeoReferencingBFL_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoReferencing();
// End Cross Module References
	DEFINE_FUNCTION(UGeoReferencingBFL::execToSeparateTexts)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CartesianCoordinates);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutX);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutY);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeoReferencingBFL::ToSeparateTexts(Z_Param_Out_CartesianCoordinates,Z_Param_Out_OutX,Z_Param_Out_OutY,Z_Param_Out_OutZ,Z_Param_IntegralDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoReferencingBFL::execToCompactText)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CartesianCoordinates);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UGeoReferencingBFL::ToCompactText(Z_Param_Out_CartesianCoordinates,Z_Param_IntegralDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoReferencingBFL::execToFullText)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CartesianCoordinates);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UGeoReferencingBFL::ToFullText(Z_Param_Out_CartesianCoordinates,Z_Param_IntegralDigits);
		P_NATIVE_END;
	}
	void UGeoReferencingBFL::StaticRegisterNativesUGeoReferencingBFL()
	{
		UClass* Class = UGeoReferencingBFL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToCompactText", &UGeoReferencingBFL::execToCompactText },
			{ "ToFullText", &UGeoReferencingBFL::execToFullText },
			{ "ToSeparateTexts", &UGeoReferencingBFL::execToSeparateTexts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics
	{
		struct GeoReferencingBFL_eventToCompactText_Parms
		{
			FVector CartesianCoordinates;
			int32 IntegralDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianCoordinates;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::NewProp_CartesianCoordinates = { "CartesianCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToCompactText_Parms, CartesianCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::NewProp_IntegralDigits = { "IntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToCompactText_Parms, IntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToCompactText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::NewProp_CartesianCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::NewProp_IntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09 * Converts a LargeCoordinates value to formatted text, in the form '(X, Y, Z)'\n\x09 **/" },
		{ "CPP_Default_IntegralDigits", "3" },
		{ "DisplayName", "ToCompactText" },
		{ "ModuleRelativePath", "Public/GeoReferencingBFL.h" },
		{ "ToolTip", "Converts a LargeCoordinates value to formatted text, in the form '(X, Y, Z)'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoReferencingBFL, nullptr, "ToCompactText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::GeoReferencingBFL_eventToCompactText_Parms), Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics
	{
		struct GeoReferencingBFL_eventToFullText_Parms
		{
			FVector CartesianCoordinates;
			int32 IntegralDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianCoordinates;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::NewProp_CartesianCoordinates = { "CartesianCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToFullText_Parms, CartesianCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::NewProp_IntegralDigits = { "IntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToFullText_Parms, IntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToFullText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::NewProp_CartesianCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::NewProp_IntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09* Converts a LargeCoordinates value to localized formatted text, in the form 'X= Y= Z='\n\x09**/" },
		{ "CPP_Default_IntegralDigits", "3" },
		{ "DisplayName", "ToFullText" },
		{ "ModuleRelativePath", "Public/GeoReferencingBFL.h" },
		{ "ToolTip", "Converts a LargeCoordinates value to localized formatted text, in the form 'X= Y= Z='" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoReferencingBFL, nullptr, "ToFullText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::GeoReferencingBFL_eventToFullText_Parms), Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoReferencingBFL_ToFullText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoReferencingBFL_ToFullText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics
	{
		struct GeoReferencingBFL_eventToSeparateTexts_Parms
		{
			FVector CartesianCoordinates;
			FText OutX;
			FText OutY;
			FText OutZ;
			int32 IntegralDigits;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianCoordinates;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutX;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutY;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_CartesianCoordinates = { "CartesianCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToSeparateTexts_Parms, CartesianCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_OutX = { "OutX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToSeparateTexts_Parms, OutX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_OutY = { "OutY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToSeparateTexts_Parms, OutY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_OutZ = { "OutZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToSeparateTexts_Parms, OutZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_IntegralDigits = { "IntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingBFL_eventToSeparateTexts_Parms, IntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_CartesianCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_OutX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_OutY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_OutZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::NewProp_IntegralDigits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09 * Converts a LargeCoordinates value to 3 separate text values\n\x09 **/" },
		{ "CPP_Default_IntegralDigits", "3" },
		{ "DisplayName", "ToSeparateTexts" },
		{ "ModuleRelativePath", "Public/GeoReferencingBFL.h" },
		{ "ToolTip", "Converts a LargeCoordinates value to 3 separate text values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoReferencingBFL, nullptr, "ToSeparateTexts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::GeoReferencingBFL_eventToSeparateTexts_Parms), Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeoReferencingBFL);
	UClass* Z_Construct_UClass_UGeoReferencingBFL_NoRegister()
	{
		return UGeoReferencingBFL::StaticClass();
	}
	struct Z_Construct_UClass_UGeoReferencingBFL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeoReferencingBFL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeoReferencingBFL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeoReferencingBFL_ToCompactText, "ToCompactText" }, // 2598782698
		{ &Z_Construct_UFunction_UGeoReferencingBFL_ToFullText, "ToFullText" }, // 1933302614
		{ &Z_Construct_UFunction_UGeoReferencingBFL_ToSeparateTexts, "ToSeparateTexts" }, // 1296338519
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeoReferencingBFL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library to convert geospatial coordinates to text\n */" },
		{ "IncludePath", "GeoReferencingBFL.h" },
		{ "ModuleRelativePath", "Public/GeoReferencingBFL.h" },
		{ "ToolTip", "Blueprint function library to convert geospatial coordinates to text" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeoReferencingBFL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeoReferencingBFL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeoReferencingBFL_Statics::ClassParams = {
		&UGeoReferencingBFL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeoReferencingBFL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeoReferencingBFL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeoReferencingBFL()
	{
		if (!Z_Registration_Info_UClass_UGeoReferencingBFL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeoReferencingBFL.OuterSingleton, Z_Construct_UClass_UGeoReferencingBFL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeoReferencingBFL.OuterSingleton;
	}
	template<> GEOREFERENCING_API UClass* StaticClass<UGeoReferencingBFL>()
	{
		return UGeoReferencingBFL::StaticClass();
	}
	UGeoReferencingBFL::UGeoReferencingBFL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeoReferencingBFL);
	UGeoReferencingBFL::~UGeoReferencingBFL() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeoReferencingBFL, UGeoReferencingBFL::StaticClass, TEXT("UGeoReferencingBFL"), &Z_Registration_Info_UClass_UGeoReferencingBFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeoReferencingBFL), 4012645422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_981690280(TEXT("/Script/GeoReferencing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
