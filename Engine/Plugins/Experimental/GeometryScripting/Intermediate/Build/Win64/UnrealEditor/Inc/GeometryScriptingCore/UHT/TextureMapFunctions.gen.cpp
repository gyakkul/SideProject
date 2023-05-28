// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/TextureMapFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureMapFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod;
	static UEnum* EGeometryScriptPixelSamplingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptPixelSamplingMethod"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPixelSamplingMethod>()
	{
		return EGeometryScriptPixelSamplingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::Enumerators[] = {
		{ "EGeometryScriptPixelSamplingMethod::Bilinear", (int64)EGeometryScriptPixelSamplingMethod::Bilinear },
		{ "EGeometryScriptPixelSamplingMethod::Nearest", (int64)EGeometryScriptPixelSamplingMethod::Nearest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::Enum_MetaDataParams[] = {
		{ "Bilinear.Name", "EGeometryScriptPixelSamplingMethod::Bilinear" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
		{ "Nearest.Name", "EGeometryScriptPixelSamplingMethod::Nearest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptPixelSamplingMethod",
		"EGeometryScriptPixelSamplingMethod",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions;
class UScriptStruct* FGeometryScriptSampleTextureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSampleTextureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSampleTextureOptions>()
{
	return FGeometryScriptSampleTextureOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrap_MetaData[];
#endif
		static void NewProp_bWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSampleTextureOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_SamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_SamplingMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_SamplingMethod = { "SamplingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSampleTextureOptions, SamplingMethod), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPixelSamplingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_SamplingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_SamplingMethod_MetaData)) }; // 835790674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_bWrap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_bWrap_SetBit(void* Obj)
	{
		((FGeometryScriptSampleTextureOptions*)Obj)->bWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_bWrap = { "bWrap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSampleTextureOptions), &Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_bWrap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_bWrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_bWrap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSampleTextureOptions, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSampleTextureOptions, UVOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_SamplingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_SamplingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_bWrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewProp_UVOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSampleTextureOptions",
		sizeof(FGeometryScriptSampleTextureOptions),
		alignof(FGeometryScriptSampleTextureOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_TextureMapFunctions::execSampleTextureRenderTarget2DAtUVPositions)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
		P_GET_STRUCT(FGeometryScriptSampleTextureOptions,Z_Param_SampleOptions);
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_TextureMapFunctions::SampleTextureRenderTarget2DAtUVPositions(Z_Param_UVList,Z_Param_Texture,Z_Param_SampleOptions,Z_Param_Out_ColorList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_TextureMapFunctions::execSampleTexture2DAtUVPositions)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_STRUCT(FGeometryScriptSampleTextureOptions,Z_Param_SampleOptions);
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_TextureMapFunctions::SampleTexture2DAtUVPositions(Z_Param_UVList,Z_Param_Texture,Z_Param_SampleOptions,Z_Param_Out_ColorList,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_TextureMapFunctions::StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_TextureMapFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SampleTexture2DAtUVPositions", &UGeometryScriptLibrary_TextureMapFunctions::execSampleTexture2DAtUVPositions },
			{ "SampleTextureRenderTarget2DAtUVPositions", &UGeometryScriptLibrary_TextureMapFunctions::execSampleTextureRenderTarget2DAtUVPositions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics
	{
		struct GeometryScriptLibrary_TextureMapFunctions_eventSampleTexture2DAtUVPositions_Parms
		{
			FGeometryScriptUVList UVList;
			UTexture2D* Texture;
			FGeometryScriptSampleTextureOptions SampleOptions;
			FGeometryScriptColorList ColorList;
			UGeometryScriptDebug* Debug;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTexture2DAtUVPositions_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTexture2DAtUVPositions_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_SampleOptions = { "SampleOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTexture2DAtUVPositions_Parms, SampleOptions), Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions, METADATA_PARAMS(nullptr, 0) }; // 4257853303
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTexture2DAtUVPositions_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTexture2DAtUVPositions_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_SampleOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::NewProp_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|TextureUtils" },
		{ "Comment", "/**\n\x09 * Sample the the given TextureMap at the list of UV positions and return the color at each position in ColorList output\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
		{ "ToolTip", "Sample the the given TextureMap at the list of UV positions and return the color at each position in ColorList output" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions, nullptr, "SampleTexture2DAtUVPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::GeometryScriptLibrary_TextureMapFunctions_eventSampleTexture2DAtUVPositions_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics
	{
		struct GeometryScriptLibrary_TextureMapFunctions_eventSampleTextureRenderTarget2DAtUVPositions_Parms
		{
			FGeometryScriptUVList UVList;
			UTextureRenderTarget2D* Texture;
			FGeometryScriptSampleTextureOptions SampleOptions;
			FGeometryScriptColorList ColorList;
			UGeometryScriptDebug* Debug;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTextureRenderTarget2DAtUVPositions_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTextureRenderTarget2DAtUVPositions_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_SampleOptions = { "SampleOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTextureRenderTarget2DAtUVPositions_Parms, SampleOptions), Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions, METADATA_PARAMS(nullptr, 0) }; // 4257853303
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTextureRenderTarget2DAtUVPositions_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TextureMapFunctions_eventSampleTextureRenderTarget2DAtUVPositions_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_SampleOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::NewProp_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|TextureUtils" },
		{ "Comment", "/**\n\x09 * Sample the the given TextureMap at the list of UV positions and return the color at each position in ColorList output.\n\x09 * This function fetches GPU data before sampling so, depending on your application, it can be inefficient and slow!\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
		{ "ToolTip", "Sample the the given TextureMap at the list of UV positions and return the color at each position in ColorList output.\nThis function fetches GPU data before sampling so, depending on your application, it can be inefficient and slow!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions, nullptr, "SampleTextureRenderTarget2DAtUVPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::GeometryScriptLibrary_TextureMapFunctions_eventSampleTextureRenderTarget2DAtUVPositions_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_TextureMapFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_TextureMapFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions, "SampleTexture2DAtUVPositions" }, // 2136519008
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions, "SampleTextureRenderTarget2DAtUVPositions" }, // 3463071368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/TextureMapFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/TextureMapFunctions.h" },
		{ "ScriptName", "GeometryScript_TextureUtils" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_TextureMapFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_TextureMapFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_TextureMapFunctions>()
	{
		return UGeometryScriptLibrary_TextureMapFunctions::StaticClass();
	}
	UGeometryScriptLibrary_TextureMapFunctions::UGeometryScriptLibrary_TextureMapFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_TextureMapFunctions);
	UGeometryScriptLibrary_TextureMapFunctions::~UGeometryScriptLibrary_TextureMapFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptPixelSamplingMethod_StaticEnum, TEXT("EGeometryScriptPixelSamplingMethod"), &Z_Registration_Info_UEnum_EGeometryScriptPixelSamplingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 835790674U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptSampleTextureOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics::NewStructOps, TEXT("GeometryScriptSampleTextureOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSampleTextureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSampleTextureOptions), 4257853303U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions, UGeometryScriptLibrary_TextureMapFunctions::StaticClass, TEXT("UGeometryScriptLibrary_TextureMapFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_TextureMapFunctions), 3462034176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_1288452336(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
