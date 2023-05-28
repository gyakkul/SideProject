// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreAugmentedFace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreAugmentedFace() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedFace();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion;
	static UEnum* EGoogleARCoreAugmentedFaceRegion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreAugmentedFaceRegion"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreAugmentedFaceRegion>()
	{
		return EGoogleARCoreAugmentedFaceRegion_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::Enumerators[] = {
		{ "EGoogleARCoreAugmentedFaceRegion::NoseTip", (int64)EGoogleARCoreAugmentedFaceRegion::NoseTip },
		{ "EGoogleARCoreAugmentedFaceRegion::ForeheadLeft", (int64)EGoogleARCoreAugmentedFaceRegion::ForeheadLeft },
		{ "EGoogleARCoreAugmentedFaceRegion::ForeheadRight", (int64)EGoogleARCoreAugmentedFaceRegion::ForeheadRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the face regions for which the pose can be queried. Left and right\n * are defined relative to the actor (the person that the mesh belongs to).\n */" },
		{ "ForeheadLeft.Comment", "/* A region around the left forehead of the AugmentedFace. */" },
		{ "ForeheadLeft.Name", "EGoogleARCoreAugmentedFaceRegion::ForeheadLeft" },
		{ "ForeheadLeft.ToolTip", "A region around the left forehead of the AugmentedFace." },
		{ "ForeheadRight.Comment", "/* A region around the right forehead of the AugmentedFace. */" },
		{ "ForeheadRight.Name", "EGoogleARCoreAugmentedFaceRegion::ForeheadRight" },
		{ "ForeheadRight.ToolTip", "A region around the right forehead of the AugmentedFace." },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedFace.h" },
		{ "NoseTip.Comment", "/* A region around the nose of the AugmentedFace. */" },
		{ "NoseTip.Name", "EGoogleARCoreAugmentedFaceRegion::NoseTip" },
		{ "NoseTip.ToolTip", "A region around the nose of the AugmentedFace." },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the face regions for which the pose can be queried. Left and right\nare defined relative to the actor (the person that the mesh belongs to)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreAugmentedFaceRegion",
		"EGoogleARCoreAugmentedFaceRegion",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion.InnerSingleton;
	}
	DEFINE_FUNCTION(UGoogleARCoreAugmentedFace::execGetLocalToTrackingTransformOfRegion)
	{
		P_GET_ENUM(EGoogleARCoreAugmentedFaceRegion,Z_Param_Region);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransformOfRegion(EGoogleARCoreAugmentedFaceRegion(Z_Param_Region));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreAugmentedFace::execGetLocalToWorldTransformOfRegion)
	{
		P_GET_ENUM(EGoogleARCoreAugmentedFaceRegion,Z_Param_Region);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransformOfRegion(EGoogleARCoreAugmentedFaceRegion(Z_Param_Region));
		P_NATIVE_END;
	}
	void UGoogleARCoreAugmentedFace::StaticRegisterNativesUGoogleARCoreAugmentedFace()
	{
		UClass* Class = UGoogleARCoreAugmentedFace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalToTrackingTransformOfRegion", &UGoogleARCoreAugmentedFace::execGetLocalToTrackingTransformOfRegion },
			{ "GetLocalToWorldTransformOfRegion", &UGoogleARCoreAugmentedFace::execGetLocalToWorldTransformOfRegion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics
	{
		struct GoogleARCoreAugmentedFace_eventGetLocalToTrackingTransformOfRegion_Parms
		{
			EGoogleARCoreAugmentedFaceRegion Region;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedFace_eventGetLocalToTrackingTransformOfRegion_Parms, Region), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion, METADATA_PARAMS(nullptr, 0) }; // 1361557714
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedFace_eventGetLocalToTrackingTransformOfRegion_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::NewProp_Region_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "Comment", "/**\n\x09 * Returns the latest known local-to-tracking transform of the given face region.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedFace.h" },
		{ "ToolTip", "Returns the latest known local-to-tracking transform of the given face region." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreAugmentedFace, nullptr, "GetLocalToTrackingTransformOfRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::GoogleARCoreAugmentedFace_eventGetLocalToTrackingTransformOfRegion_Parms), Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics
	{
		struct GoogleARCoreAugmentedFace_eventGetLocalToWorldTransformOfRegion_Parms
		{
			EGoogleARCoreAugmentedFaceRegion Region;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedFace_eventGetLocalToWorldTransformOfRegion_Parms, Region), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceRegion, METADATA_PARAMS(nullptr, 0) }; // 1361557714
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedFace_eventGetLocalToWorldTransformOfRegion_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::NewProp_Region_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "Comment", "/**\n\x09 * Returns the latest known local-to-world transform of the given face region.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedFace.h" },
		{ "ToolTip", "Returns the latest known local-to-world transform of the given face region." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreAugmentedFace, nullptr, "GetLocalToWorldTransformOfRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::GoogleARCoreAugmentedFace_eventGetLocalToWorldTransformOfRegion_Parms), Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreAugmentedFace);
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister()
	{
		return UGoogleARCoreAugmentedFace::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARFaceGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToTrackingTransformOfRegion, "GetLocalToTrackingTransformOfRegion" }, // 1009222855
		{ &Z_Construct_UFunction_UGoogleARCoreAugmentedFace_GetLocalToWorldTransformOfRegion, "GetLocalToWorldTransformOfRegion" }, // 380177281
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UObject representing a face detected by ARCore.\n */" },
		{ "IncludePath", "GoogleARCoreAugmentedFace.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedFace.h" },
		{ "ToolTip", "An UObject representing a face detected by ARCore." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreAugmentedFace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::ClassParams = {
		&UGoogleARCoreAugmentedFace::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedFace()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreAugmentedFace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreAugmentedFace.OuterSingleton, Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreAugmentedFace.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreAugmentedFace>()
	{
		return UGoogleARCoreAugmentedFace::StaticClass();
	}
	UGoogleARCoreAugmentedFace::UGoogleARCoreAugmentedFace() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreAugmentedFace);
	UGoogleARCoreAugmentedFace::~UGoogleARCoreAugmentedFace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_Statics::EnumInfo[] = {
		{ EGoogleARCoreAugmentedFaceRegion_StaticEnum, TEXT("EGoogleARCoreAugmentedFaceRegion"), &Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceRegion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1361557714U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreAugmentedFace, UGoogleARCoreAugmentedFace::StaticClass, TEXT("UGoogleARCoreAugmentedFace"), &Z_Registration_Info_UClass_UGoogleARCoreAugmentedFace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreAugmentedFace), 454348281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_3762788794(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
