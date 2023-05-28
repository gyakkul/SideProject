// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/ImportanceSamplingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportanceSamplingLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceWeight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImportanceWeight;
	static UEnum* EImportanceWeight_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceWeight, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceWeight"));
		}
		return Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EImportanceWeight::Type>()
	{
		return EImportanceWeight_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EImportanceWeight_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enumerators[] = {
		{ "EImportanceWeight::Luminance", (int64)EImportanceWeight::Luminance },
		{ "EImportanceWeight::Red", (int64)EImportanceWeight::Red },
		{ "EImportanceWeight::Green", (int64)EImportanceWeight::Green },
		{ "EImportanceWeight::Blue", (int64)EImportanceWeight::Blue },
		{ "EImportanceWeight::Alpha", (int64)EImportanceWeight::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Comment", "/** Importance from alpha channel of texture. */" },
		{ "Alpha.Name", "EImportanceWeight::Alpha" },
		{ "Alpha.ToolTip", "Importance from alpha channel of texture." },
		{ "Blue.Comment", "/** Importance from blue channel of texture. */" },
		{ "Blue.Name", "EImportanceWeight::Blue" },
		{ "Blue.ToolTip", "Importance from blue channel of texture." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Provides different weighting functions for texture importance sampling */" },
		{ "Green.Comment", "/** Importance from green channel of texture. */" },
		{ "Green.Name", "EImportanceWeight::Green" },
		{ "Green.ToolTip", "Importance from green channel of texture." },
		{ "Luminance.Comment", "/** Importance from color luminance. */" },
		{ "Luminance.Name", "EImportanceWeight::Luminance" },
		{ "Luminance.ToolTip", "Importance from color luminance." },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "Red.Comment", "/** Importance from red channel of texture. */" },
		{ "Red.Name", "EImportanceWeight::Red" },
		{ "Red.ToolTip", "Importance from red channel of texture." },
		{ "ToolTip", "Provides different weighting functions for texture importance sampling" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EImportanceWeight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EImportanceWeight",
		"EImportanceWeight::Type",
		Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EImportanceWeight_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EImportanceWeight()
	{
		if (!Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton, Z_Construct_UEnum_Engine_EImportanceWeight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportanceTexture;
class UScriptStruct* FImportanceTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportanceTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportanceTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportanceTexture, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ImportanceTexture"));
	}
	return Z_Registration_Info_UScriptStruct_ImportanceTexture.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FImportanceTexture>()
{
	return FImportanceTexture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportanceTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumMips;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarginalCDF_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarginalCDF_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarginalCDF;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConditionalCDF_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalCDF_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalCDF;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weighting_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weighting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Texture processed for importance sampling\n* Holds marginal PDF of the rows, as well as the PDF of each row\n*/" },
		{ "HasNativeBreak", "/Script/Engine.ImportanceSamplingLibrary.BreakImportanceTexture" },
		{ "HasNativeMake", "/Script/Engine.ImportanceSamplingLibrary.MakeImportanceTexture" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Texture processed for importance sampling\nHolds marginal PDF of the rows, as well as the PDF of each row" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportanceTexture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size_MetaData[] = {
		{ "Comment", "// active texture dimensions, capped to 1024 x 1024\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "active texture dimensions, capped to 1024 x 1024" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportanceTexture, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips_MetaData[] = {
		{ "Comment", "// active number of MIP levels\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "active number of MIP levels" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportanceTexture, NumMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_Inner = { "MarginalCDF", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_MetaData[] = {
		{ "Comment", "// Unnormalized cumulative density of the image by rows (Size.Y+1)\n// First entry is zero, final entry is the CDF normalization factor\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Unnormalized cumulative density of the image by rows (Size.Y+1)\nFirst entry is zero, final entry is the CDF normalization factor" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF = { "MarginalCDF", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportanceTexture, MarginalCDF), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_Inner = { "ConditionalCDF", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_MetaData[] = {
		{ "Comment", "// Unnormalized cumulative probability of each pixel in a row (Size.Y row CDFs of Size.X+1) \n// First entry of each row is zero, final entry in each row is the CDF normalization factor for that row\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Unnormalized cumulative probability of each pixel in a row (Size.Y row CDFs of Size.X+1)\nFirst entry of each row is zero, final entry in each row is the CDF normalization factor for that row" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF = { "ConditionalCDF", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportanceTexture, ConditionalCDF), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_Inner = { "TextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_MetaData[] = {
		{ "Comment", "// packed copy of MIP level data for filtered sampling (capped to 1024x1024)\n// local copy seems better than allocating and copying the same data temporarily for each sample\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "packed copy of MIP level data for filtered sampling (capped to 1024x1024)\nlocal copy seems better than allocating and copying the same data temporarily for each sample" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportanceTexture, TextureData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Comment", "// Original texture object for Break function\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Original texture object for Break function" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportanceTexture, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting_MetaData[] = {
		{ "Comment", "// Original importance weight for Break function\n" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Original importance weight for Break function" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting = { "Weighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportanceTexture, Weighting), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting_MetaData)) }; // 702221579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ImportanceTexture",
		sizeof(FImportanceTexture),
		alignof(FImportanceTexture),
		Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportanceTexture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportanceTexture.InnerSingleton, Z_Construct_UScriptStruct_FImportanceTexture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportanceTexture.InnerSingleton;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execImportanceSample)
	{
		P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_Texture);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Rand);
		P_GET_PROPERTY(FIntProperty,Z_Param_Samples);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SamplePosition);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SampleColor);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SampleIntensity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SampleSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UImportanceSamplingLibrary::ImportanceSample(Z_Param_Out_Texture,Z_Param_Out_Rand,Z_Param_Samples,Z_Param_Intensity,Z_Param_Out_SamplePosition,Z_Param_Out_SampleColor,Z_Param_Out_SampleIntensity,Z_Param_Out_SampleSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execBreakImportanceTexture)
	{
		P_GET_STRUCT_REF(FImportanceTexture,Z_Param_Out_ImportanceTexture);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_WeightingFunc);
		P_FINISH;
		P_NATIVE_BEGIN;
		UImportanceSamplingLibrary::BreakImportanceTexture(Z_Param_Out_ImportanceTexture,Z_Param_Out_Texture,(TEnumAsByte<EImportanceWeight::Type>&)(Z_Param_Out_WeightingFunc));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execMakeImportanceTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_PROPERTY(FByteProperty,Z_Param_WeightingFunc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FImportanceTexture*)Z_Param__Result=UImportanceSamplingLibrary::MakeImportanceTexture(Z_Param_Texture,EImportanceWeight::Type(Z_Param_WeightingFunc));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execNextSobolCell3D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
		P_GET_STRUCT(FVector,Z_Param_PreviousValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execRandomSobolCell3D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
		P_GET_STRUCT(FVector,Z_Param_Cell);
		P_GET_STRUCT(FVector,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell3D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execNextSobolCell2D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
		P_GET_STRUCT(FVector2D,Z_Param_PreviousValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_PreviousValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execRandomSobolCell2D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumCells);
		P_GET_STRUCT(FVector2D,Z_Param_Cell);
		P_GET_STRUCT(FVector2D,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolCell2D(Z_Param_Index,Z_Param_NumCells,Z_Param_Cell,Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execNextSobolFloat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Dimension);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UImportanceSamplingLibrary::NextSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_PreviousValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportanceSamplingLibrary::execRandomSobolFloat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Dimension);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UImportanceSamplingLibrary::RandomSobolFloat(Z_Param_Index,Z_Param_Dimension,Z_Param_Seed);
		P_NATIVE_END;
	}
	void UImportanceSamplingLibrary::StaticRegisterNativesUImportanceSamplingLibrary()
	{
		UClass* Class = UImportanceSamplingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakImportanceTexture", &UImportanceSamplingLibrary::execBreakImportanceTexture },
			{ "ImportanceSample", &UImportanceSamplingLibrary::execImportanceSample },
			{ "MakeImportanceTexture", &UImportanceSamplingLibrary::execMakeImportanceTexture },
			{ "NextSobolCell2D", &UImportanceSamplingLibrary::execNextSobolCell2D },
			{ "NextSobolCell3D", &UImportanceSamplingLibrary::execNextSobolCell3D },
			{ "NextSobolFloat", &UImportanceSamplingLibrary::execNextSobolFloat },
			{ "RandomSobolCell2D", &UImportanceSamplingLibrary::execRandomSobolCell2D },
			{ "RandomSobolCell3D", &UImportanceSamplingLibrary::execRandomSobolCell3D },
			{ "RandomSobolFloat", &UImportanceSamplingLibrary::execRandomSobolFloat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics
	{
		struct ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms
		{
			FImportanceTexture ImportanceTexture;
			UTexture2D* Texture;
			TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportanceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportanceTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeightingFunc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture = { "ImportanceTexture", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, ImportanceTexture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture_MetaData)) }; // 207851739
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_WeightingFunc = { "WeightingFunc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(nullptr, 0) }; // 702221579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_WeightingFunc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* Get texture used to create an ImportanceTexture object\n\x09* @param ImportanceTexture - The source ImportanceTexture object\n\x09* @outparam Texture - Texture object for this ImportanceTexture.\n\x09* @param WeightingFunc - How to turn the texture data into probability weights\n\x09* @return new ImportanceTexture object for use with ImportanceSample\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Get texture used to create an ImportanceTexture object\n@param ImportanceTexture - The source ImportanceTexture object\n@outparam Texture - Texture object for this ImportanceTexture.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "BreakImportanceTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics
	{
		struct ImportanceSamplingLibrary_eventImportanceSample_Parms
		{
			FImportanceTexture Texture;
			FVector2D Rand;
			int32 Samples;
			float Intensity;
			FVector2D SamplePosition;
			FLinearColor SampleColor;
			float SampleIntensity;
			float SampleSize;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rand;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleIntensity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Texture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture_MetaData)) }; // 207851739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand = { "Rand", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Rand), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Samples), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SamplePosition = { "SamplePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SamplePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleColor = { "SampleColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleIntensity = { "SampleIntensity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleIntensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleSize = { "SampleSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SamplePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* Distribute sample points proportional to Texture2D luminance.\n\x09* @param Rand - Random 2D point with components evenly distributed between 0 and 1\n\x09* @param Samples - Total number of samples that will be used\n\x09* @param Intensity - Total intensity for light\n\x09* @outparam SamplePosition - Importance sampled 2D output texture coordinate (0-1)\n\x09* @outparam SampleColor - Representative color near Position from MIP level for SampleSize\n\x09* @outparam SampleIntensity - Intensity of individual points, scaled by probability and number of samples\n\x09* @outparam SampleSize - Local density of points near Position (scaled for 1x1 texture space)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Distribute sample points proportional to Texture2D luminance.\n@param Rand - Random 2D point with components evenly distributed between 0 and 1\n@param Samples - Total number of samples that will be used\n@param Intensity - Total intensity for light\n@outparam SamplePosition - Importance sampled 2D output texture coordinate (0-1)\n@outparam SampleColor - Representative color near Position from MIP level for SampleSize\n@outparam SampleIntensity - Intensity of individual points, scaled by probability and number of samples\n@outparam SampleSize - Local density of points near Position (scaled for 1x1 texture space)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "ImportanceSample", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::ImportanceSamplingLibrary_eventImportanceSample_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics
	{
		struct ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms
		{
			UTexture2D* Texture;
			TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
			FImportanceTexture ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeightingFunc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_WeightingFunc = { "WeightingFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(nullptr, 0) }; // 702221579
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(nullptr, 0) }; // 207851739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_WeightingFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* Create an FImportanceTexture object for texture-driven importance sampling from a 2D RGBA8 texture\n\x09* @param Texture - Texture object to use. Must be RGBA8 format.\n\x09* @param WeightingFunc - How to turn the texture data into probability weights\n\x09* @return new ImportanceTexture object for use with ImportanceSample\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create an FImportanceTexture object for texture-driven importance sampling from a 2D RGBA8 texture\n@param Texture - Texture object to use. Must be RGBA8 format.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "MakeImportanceTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics
	{
		struct ImportanceSamplingLibrary_eventNextSobolCell2D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector2D PreviousValue;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n\x09* @param PreviousValue - The Sobol value for Index-1\n\x09* @return Sobol-distributed random 2D position in the same grid cell\n\x09*/" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_PreviousValue", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 2D position in the same grid cell" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolCell2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::ImportanceSamplingLibrary_eventNextSobolCell2D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics
	{
		struct ImportanceSamplingLibrary_eventNextSobolCell3D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector PreviousValue;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n\x09* @param PreviousValue - The Sobol value for Index-1\n\x09* @return Sobol-distributed random 3D position in the same grid cell\n\x09*/" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_PreviousValue", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 3D position in the same grid cell" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolCell3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::ImportanceSamplingLibrary_eventNextSobolCell3D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics
	{
		struct ImportanceSamplingLibrary_eventNextSobolFloat_Parms
		{
			int32 Index;
			int32 Dimension;
			float PreviousValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Dimension;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Dimension), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, PreviousValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Dimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param Dimension - Which Sobol dimension (0 to 15)\n\x09* @param PreviousValue - The Sobol value for Index-1\n\x09* @return Sobol-distributed random number between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random number between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::ImportanceSamplingLibrary_eventNextSobolFloat_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics
	{
		struct ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector2D Cell;
			FVector2D Seed;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Cell), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Seed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point in the cell (starting at 0)\n\x09* @param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n\x09* @param Cell - Give a point from this integer grid cell\n\x09* @param Seed - Random 2D seed (components in the range 0-1) to randomize across multiple sequences\n\x09* @return Sobol-distributed random 2D position in the given grid cell\n\x09*/" },
		{ "CPP_Default_Cell", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_Seed", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 2D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 2D position in the given grid cell" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolCell2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics
	{
		struct ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector Cell;
			FVector Seed;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Cell), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Seed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point in the cell (starting at 0)\n\x09* @param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n\x09* @param Cell - Give a point from this integer grid cell\n\x09* @param Seed - Random 3D seed (components in the range 0-1) to randomize across multiple sequences\n\x09* @return Sobol-distributed random 3D vector in the given grid cell\n\x09*/" },
		{ "CPP_Default_Cell", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_Seed", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 3D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 3D vector in the given grid cell" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolCell3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics
	{
		struct ImportanceSamplingLibrary_eventRandomSobolFloat_Parms
		{
			int32 Index;
			int32 Dimension;
			float Seed;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Dimension;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Dimension), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Dimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n\x09* @param Index - Which sequential point\n\x09* @param Dimension - Which Sobol dimension (0 to 15)\n\x09* @param Seed - Random seed (in the range 0-1) to randomize across multiple sequences\n\x09* @return Sobol-distributed random number between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param Seed - Random seed (in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random number between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::ImportanceSamplingLibrary_eventRandomSobolFloat_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportanceSamplingLibrary);
	UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister()
	{
		return UImportanceSamplingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportanceSamplingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImportanceSamplingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture, "BreakImportanceTexture" }, // 3013591695
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample, "ImportanceSample" }, // 1976568636
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture, "MakeImportanceTexture" }, // 254807939
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D, "NextSobolCell2D" }, // 2839012157
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D, "NextSobolCell3D" }, // 3653260496
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat, "NextSobolFloat" }, // 2543832651
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D, "RandomSobolCell2D" }, // 178937559
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D, "RandomSobolCell3D" }, // 111655718
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat, "RandomSobolFloat" }, // 1479094106
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/ImportanceSamplingLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportanceSamplingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportanceSamplingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportanceSamplingLibrary_Statics::ClassParams = {
		&UImportanceSamplingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportanceSamplingLibrary()
	{
		if (!Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton, Z_Construct_UClass_UImportanceSamplingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UImportanceSamplingLibrary>()
	{
		return UImportanceSamplingLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportanceSamplingLibrary);
	UImportanceSamplingLibrary::~UImportanceSamplingLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::EnumInfo[] = {
		{ EImportanceWeight_StaticEnum, TEXT("EImportanceWeight"), &Z_Registration_Info_UEnum_EImportanceWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 702221579U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ScriptStructInfo[] = {
		{ FImportanceTexture::StaticStruct, Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewStructOps, TEXT("ImportanceTexture"), &Z_Registration_Info_UScriptStruct_ImportanceTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportanceTexture), 207851739U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImportanceSamplingLibrary, UImportanceSamplingLibrary::StaticClass, TEXT("UImportanceSamplingLibrary"), &Z_Registration_Info_UClass_UImportanceSamplingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportanceSamplingLibrary), 1338053862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_2893747905(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
