// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCVBlueprintFunctionLibrary.h"
#include "OpenCVHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVBlueprintFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OPENCVHELPER_API UClass* Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary();
	OPENCVHELPER_API UClass* Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_NoRegister();
	OPENCVHELPER_API UEnum* Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary();
	OPENCVHELPER_API UEnum* Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize();
	OPENCVHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker();
	OPENCVHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase();
	UPackage* Z_Construct_UPackage__Script_OpenCVHelper();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenCVArucoDictionary;
	static UEnum* EOpenCVArucoDictionary_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary, (UObject*)Z_Construct_UPackage__Script_OpenCVHelper(), TEXT("EOpenCVArucoDictionary"));
		}
		return Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton;
	}
	template<> OPENCVHELPER_API UEnum* StaticEnum<EOpenCVArucoDictionary>()
	{
		return EOpenCVArucoDictionary_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::Enumerators[] = {
		{ "EOpenCVArucoDictionary::Dict4x4", (int64)EOpenCVArucoDictionary::Dict4x4 },
		{ "EOpenCVArucoDictionary::Dict5x5", (int64)EOpenCVArucoDictionary::Dict5x5 },
		{ "EOpenCVArucoDictionary::Dict6x6", (int64)EOpenCVArucoDictionary::Dict6x6 },
		{ "EOpenCVArucoDictionary::Dict7x7", (int64)EOpenCVArucoDictionary::Dict7x7 },
		{ "EOpenCVArucoDictionary::DictOriginal", (int64)EOpenCVArucoDictionary::DictOriginal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dict4x4.DisplayName", "4x4" },
		{ "Dict4x4.Name", "EOpenCVArucoDictionary::Dict4x4" },
		{ "Dict5x5.DisplayName", "5x5" },
		{ "Dict5x5.Name", "EOpenCVArucoDictionary::Dict5x5" },
		{ "Dict6x6.DisplayName", "6x6" },
		{ "Dict6x6.Name", "EOpenCVArucoDictionary::Dict6x6" },
		{ "Dict7x7.DisplayName", "7x7" },
		{ "Dict7x7.Name", "EOpenCVArucoDictionary::Dict7x7" },
		{ "DictOriginal.DisplayName", "Original" },
		{ "DictOriginal.Name", "EOpenCVArucoDictionary::DictOriginal" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenCVHelper,
		nullptr,
		"EOpenCVArucoDictionary",
		"EOpenCVArucoDictionary",
		Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary()
	{
		if (!Z_Registration_Info_UEnum_EOpenCVArucoDictionary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenCVArucoDictionary.InnerSingleton, Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOpenCVArucoDictionary.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize;
	static UEnum* EOpenCVArucoDictionarySize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize, (UObject*)Z_Construct_UPackage__Script_OpenCVHelper(), TEXT("EOpenCVArucoDictionarySize"));
		}
		return Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton;
	}
	template<> OPENCVHELPER_API UEnum* StaticEnum<EOpenCVArucoDictionarySize>()
	{
		return EOpenCVArucoDictionarySize_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::Enumerators[] = {
		{ "EOpenCVArucoDictionarySize::DictSize50", (int64)EOpenCVArucoDictionarySize::DictSize50 },
		{ "EOpenCVArucoDictionarySize::DictSize100", (int64)EOpenCVArucoDictionarySize::DictSize100 },
		{ "EOpenCVArucoDictionarySize::DictSize250", (int64)EOpenCVArucoDictionarySize::DictSize250 },
		{ "EOpenCVArucoDictionarySize::DictSize1000", (int64)EOpenCVArucoDictionarySize::DictSize1000 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DictSize100.DisplayName", "100" },
		{ "DictSize100.Name", "EOpenCVArucoDictionarySize::DictSize100" },
		{ "DictSize1000.DisplayName", "1000" },
		{ "DictSize1000.Name", "EOpenCVArucoDictionarySize::DictSize1000" },
		{ "DictSize250.DisplayName", "250" },
		{ "DictSize250.Name", "EOpenCVArucoDictionarySize::DictSize250" },
		{ "DictSize50.DisplayName", "50" },
		{ "DictSize50.Name", "EOpenCVArucoDictionarySize::DictSize50" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenCVHelper,
		nullptr,
		"EOpenCVArucoDictionarySize",
		"EOpenCVArucoDictionarySize",
		Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize()
	{
		if (!Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.InnerSingleton, Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker;
class UScriptStruct* FOpenCVArucoDetectedMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker, (UObject*)Z_Construct_UPackage__Script_OpenCVHelper(), TEXT("OpenCVArucoDetectedMarker"));
	}
	return Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker.OuterSingleton;
}
template<> OPENCVHELPER_API UScriptStruct* StaticStruct<FOpenCVArucoDetectedMarker>()
{
	return FOpenCVArucoDetectedMarker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Corners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Corners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Corners;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenCVArucoDetectedMarker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "OpenCV | ArUco" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVArucoDetectedMarker, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Corners_Inner = { "Corners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Corners_MetaData[] = {
		{ "Category", "OpenCV | ArUco" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Corners = { "Corners", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVArucoDetectedMarker, Corners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Corners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Corners_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "OpenCV | ArUco" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVArucoDetectedMarker, Pose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Pose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Corners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Corners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewProp_Pose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVHelper,
		nullptr,
		&NewStructOps,
		"OpenCVArucoDetectedMarker",
		sizeof(FOpenCVArucoDetectedMarker),
		alignof(FOpenCVArucoDetectedMarker),
		Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker.InnerSingleton, Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker.InnerSingleton;
	}
	DEFINE_FUNCTION(UOpenCVBlueprintFunctionLibrary::execOpenCVArucoDetectMarkers)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
		P_GET_ENUM(EOpenCVArucoDictionary,Z_Param_InDictionary);
		P_GET_ENUM(EOpenCVArucoDictionarySize,Z_Param_InDictionarySize);
		P_GET_UBOOL(Z_Param_bDebugDrawMarkers);
		P_GET_UBOOL(Z_Param_bEstimatePose);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMarkerLengthInMeters);
		P_GET_STRUCT_REF(FOpenCVLensDistortionParametersBase,Z_Param_Out_InLensDistortionParameters);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutDebugTexture);
		P_GET_TARRAY_REF(FOpenCVArucoDetectedMarker,Z_Param_Out_OutDetectedMarkers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOpenCVBlueprintFunctionLibrary::OpenCVArucoDetectMarkers(Z_Param_InRenderTarget,EOpenCVArucoDictionary(Z_Param_InDictionary),EOpenCVArucoDictionarySize(Z_Param_InDictionarySize),Z_Param_bDebugDrawMarkers,Z_Param_bEstimatePose,Z_Param_InMarkerLengthInMeters,Z_Param_Out_InLensDistortionParameters,Z_Param_Out_OutDebugTexture,Z_Param_Out_OutDetectedMarkers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVBlueprintFunctionLibrary::execOpenCVChessboardDetectCorners)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
		P_GET_STRUCT(FIntPoint,Z_Param_InPatternSize);
		P_GET_UBOOL(Z_Param_bDebugDrawCorners);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutDebugTexture);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutDetectedCorners);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOpenCVBlueprintFunctionLibrary::OpenCVChessboardDetectCorners(Z_Param_InRenderTarget,Z_Param_InPatternSize,Z_Param_bDebugDrawCorners,Z_Param_Out_OutDebugTexture,Z_Param_Out_OutDetectedCorners);
		P_NATIVE_END;
	}
	void UOpenCVBlueprintFunctionLibrary::StaticRegisterNativesUOpenCVBlueprintFunctionLibrary()
	{
		UClass* Class = UOpenCVBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenCVArucoDetectMarkers", &UOpenCVBlueprintFunctionLibrary::execOpenCVArucoDetectMarkers },
			{ "OpenCVChessboardDetectCorners", &UOpenCVBlueprintFunctionLibrary::execOpenCVChessboardDetectCorners },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics
	{
		struct OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms
		{
			const UTextureRenderTarget2D* InRenderTarget;
			EOpenCVArucoDictionary InDictionary;
			EOpenCVArucoDictionarySize InDictionarySize;
			bool bDebugDrawMarkers;
			bool bEstimatePose;
			float InMarkerLengthInMeters;
			FOpenCVLensDistortionParametersBase InLensDistortionParameters;
			UTexture2D* OutDebugTexture;
			TArray<FOpenCVArucoDetectedMarker> OutDetectedMarkers;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDictionary_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDictionary_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDictionary;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDictionarySize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDictionarySize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDictionarySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawMarkers_MetaData[];
#endif
		static void NewProp_bDebugDrawMarkers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawMarkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEstimatePose_MetaData[];
#endif
		static void NewProp_bEstimatePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEstimatePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMarkerLengthInMeters_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMarkerLengthInMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLensDistortionParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLensDistortionParameters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDebugTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDetectedMarkers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDetectedMarkers;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InRenderTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InRenderTarget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionary_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionary = { "InDictionary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, InDictionary), Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionary_MetaData)) }; // 4148424244
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionarySize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionarySize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionarySize = { "InDictionarySize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, InDictionarySize), Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionarySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionarySize_MetaData)) }; // 742849740
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bDebugDrawMarkers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bDebugDrawMarkers_SetBit(void* Obj)
	{
		((OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms*)Obj)->bDebugDrawMarkers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bDebugDrawMarkers = { "bDebugDrawMarkers", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms), &Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bDebugDrawMarkers_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bDebugDrawMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bDebugDrawMarkers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bEstimatePose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bEstimatePose_SetBit(void* Obj)
	{
		((OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms*)Obj)->bEstimatePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bEstimatePose = { "bEstimatePose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms), &Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bEstimatePose_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bEstimatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bEstimatePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InMarkerLengthInMeters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InMarkerLengthInMeters = { "InMarkerLengthInMeters", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, InMarkerLengthInMeters), METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InMarkerLengthInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InMarkerLengthInMeters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InLensDistortionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InLensDistortionParameters = { "InLensDistortionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, InLensDistortionParameters), Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InLensDistortionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InLensDistortionParameters_MetaData)) }; // 3281058648
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_OutDebugTexture = { "OutDebugTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, OutDebugTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_OutDetectedMarkers_Inner = { "OutDetectedMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker, METADATA_PARAMS(nullptr, 0) }; // 5152590
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_OutDetectedMarkers = { "OutDetectedMarkers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, OutDetectedMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 5152590
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionary_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionarySize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InDictionarySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bDebugDrawMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_bEstimatePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InMarkerLengthInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_InLensDistortionParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_OutDebugTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_OutDetectedMarkers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_OutDetectedMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCV | ArUco" },
		{ "Comment", "/**\n\x09 * Detects all ArUco markers in the supplied image\n\x09 *\n\x09 * @param InRenderTarget Input image in which to search for markers\n\x09 * @param InDictionary Which ArUco marker dictionary to use for detection\n\x09 * @param InDictionarySize The size of the ArUco marker dictionary\n\x09 * @param bDebugDrawMarkers If true, output a Texture2D showing the detected marker debug info overlaid on the input image\n\x09 * @param bEstimatePose If true, return the 3D pose for each marker relative to the camera position\n\x09 * @param InMarkerLengthInMeters Length in meters of one side of the physical marker (required if bEstimatePose is True)\n\x09 * @param InCameraCalibrationParameters Lens distortion parameters for the incoming image (required if bEstimatePose is True)\n\x09 * @param OutDebugTexture Output debug image (required if bDebugDrawMarkers is True)\n\x09 * @param OutDetectedMarkers Output array of markers detected in the input image\n\x09 * @return Total number of markers detected in the input image\n\x09 */" },
		{ "DisplayName", "OpenCV ArUco Detect Markers" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Detects all ArUco markers in the supplied image\n\n@param InRenderTarget Input image in which to search for markers\n@param InDictionary Which ArUco marker dictionary to use for detection\n@param InDictionarySize The size of the ArUco marker dictionary\n@param bDebugDrawMarkers If true, output a Texture2D showing the detected marker debug info overlaid on the input image\n@param bEstimatePose If true, return the 3D pose for each marker relative to the camera position\n@param InMarkerLengthInMeters Length in meters of one side of the physical marker (required if bEstimatePose is True)\n@param InCameraCalibrationParameters Lens distortion parameters for the incoming image (required if bEstimatePose is True)\n@param OutDebugTexture Output debug image (required if bDebugDrawMarkers is True)\n@param OutDetectedMarkers Output array of markers detected in the input image\n@return Total number of markers detected in the input image" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary, nullptr, "OpenCVArucoDetectMarkers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::OpenCVBlueprintFunctionLibrary_eventOpenCVArucoDetectMarkers_Parms), Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics
	{
		struct OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms
		{
			const UTextureRenderTarget2D* InRenderTarget;
			FIntPoint InPatternSize;
			bool bDebugDrawCorners;
			UTexture2D* OutDebugTexture;
			TArray<FVector2D> OutDetectedCorners;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPatternSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPatternSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawCorners_MetaData[];
#endif
		static void NewProp_bDebugDrawCorners_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawCorners;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDebugTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDetectedCorners_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDetectedCorners;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InRenderTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InPatternSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InPatternSize = { "InPatternSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms, InPatternSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InPatternSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InPatternSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_bDebugDrawCorners_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_bDebugDrawCorners_SetBit(void* Obj)
	{
		((OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms*)Obj)->bDebugDrawCorners = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_bDebugDrawCorners = { "bDebugDrawCorners", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms), &Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_bDebugDrawCorners_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_bDebugDrawCorners_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_bDebugDrawCorners_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_OutDebugTexture = { "OutDebugTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms, OutDebugTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_OutDetectedCorners_Inner = { "OutDetectedCorners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_OutDetectedCorners = { "OutDetectedCorners", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms, OutDetectedCorners), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_InPatternSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_bDebugDrawCorners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_OutDebugTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_OutDetectedCorners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_OutDetectedCorners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCV" },
		{ "Comment", "/**\n\x09 * Detects a camera calibration chessboard in the supplied image\n\x09 *\n\x09 * @param InRenderTarget Input image in which to search for a chessboard\n\x09 * @param InPatternSize Number of interior corners on the physical chessboard (rows, columns)\n\x09 * @param bDebugDrawCorners If true, output a Texture2D showing the detected corner debug info overlaid on the input image\n\x09 * @param OutDebugTexture Output debug image (required if bDebugDrawCorners is True)\n\x09 * @param OutDetectedCorners Output array of corners detected in the input image\n\x09 * @return Total number of corners detected in the input image\n\x09 */" },
		{ "DisplayName", "OpenCV Chessboard Detect Corners" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Detects a camera calibration chessboard in the supplied image\n\n@param InRenderTarget Input image in which to search for a chessboard\n@param InPatternSize Number of interior corners on the physical chessboard (rows, columns)\n@param bDebugDrawCorners If true, output a Texture2D showing the detected corner debug info overlaid on the input image\n@param OutDebugTexture Output debug image (required if bDebugDrawCorners is True)\n@param OutDetectedCorners Output array of corners detected in the input image\n@return Total number of corners detected in the input image" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary, nullptr, "OpenCVChessboardDetectCorners", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::OpenCVBlueprintFunctionLibrary_eventOpenCVChessboardDetectCorners_Parms), Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenCVBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_NoRegister()
	{
		return UOpenCVBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers, "OpenCVArucoDetectMarkers" }, // 1696450149
		{ &Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners, "OpenCVChessboardDetectCorners" }, // 2628868592
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenCVBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenCVBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenCVBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::ClassParams = {
		&UOpenCVBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> OPENCVHELPER_API UClass* StaticClass<UOpenCVBlueprintFunctionLibrary>()
	{
		return UOpenCVBlueprintFunctionLibrary::StaticClass();
	}
	UOpenCVBlueprintFunctionLibrary::UOpenCVBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenCVBlueprintFunctionLibrary);
	UOpenCVBlueprintFunctionLibrary::~UOpenCVBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EOpenCVArucoDictionary_StaticEnum, TEXT("EOpenCVArucoDictionary"), &Z_Registration_Info_UEnum_EOpenCVArucoDictionary, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4148424244U) },
		{ EOpenCVArucoDictionarySize_StaticEnum, TEXT("EOpenCVArucoDictionarySize"), &Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 742849740U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FOpenCVArucoDetectedMarker::StaticStruct, Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewStructOps, TEXT("OpenCVArucoDetectedMarker"), &Z_Registration_Info_UScriptStruct_OpenCVArucoDetectedMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenCVArucoDetectedMarker), 5152590U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary, UOpenCVBlueprintFunctionLibrary::StaticClass, TEXT("UOpenCVBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenCVBlueprintFunctionLibrary), 81800967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_2178924408(TEXT("/Script/OpenCVHelper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
