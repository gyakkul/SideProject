// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetImportData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData_NoRegister();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetImportData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetImportData_NoRegister();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdMeshAssetImportData();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdMeshAssetImportData_NoRegister();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdPrimPathList();
// End Cross Module References
	void UUsdAssetImportData::StaticRegisterNativesUUsdAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAssetImportData);
	UClass* Z_Construct_UClass_UUsdAssetImportData_NoRegister()
	{
		return UUsdAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Options" },
		{ "IncludePath", "USDAssetImportData.h" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_PrimPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdAssetImportData, PrimPath), METADATA_PARAMS(Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_PrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Comment", "// Likely a UUSDStageImportOptions, but we don't declare it here\n// to prevent an unnecessary module dependency on USDStageImporter\n" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "Likely a UUSDStageImportOptions, but we don't declare it here\nto prevent an unnecessary module dependency on USDStageImporter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdAssetImportData, ImportOptions), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_ImportOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_ImportOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAssetImportData_Statics::ClassParams = {
		&UUsdAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UUsdAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAssetImportData.OuterSingleton, Z_Construct_UClass_UUsdAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdAssetImportData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdAssetImportData>()
	{
		return UUsdAssetImportData::StaticClass();
	}
	UUsdAssetImportData::UUsdAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAssetImportData);
	UUsdAssetImportData::~UUsdAssetImportData() {}
	void UUsdAnimSequenceAssetImportData::StaticRegisterNativesUUsdAnimSequenceAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAnimSequenceAssetImportData);
	UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData_NoRegister()
	{
		return UUsdAnimSequenceAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerStartOffsetSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerStartOffsetSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUsdAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Options Options" },
		{ "IncludePath", "USDAssetImportData.h" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::NewProp_LayerStartOffsetSeconds_MetaData[] = {
		{ "Comment", "// Offset into the stage in seconds to when this AnimSequence should start playing to match the\n// skeletal animation in that stage. This is required because UAnimSequences just range from the\n// first skeletal timeSample to the last, and the first sample is not necessarily the startTimeCode\n// for the stage. Note that this is wrt. the startTimeCode of the *layer*, and not the composed stage.\n// This is only used for animating USkeletalMeshComponents via the AUsdStageActor, and it is in\n// seconds since it will need to drive the UAnimSequence with a time value in the [0, LenghtSeconds] range.\n// This should be applied *after* any offset/scale conversions on the time coordinate.\n" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "Offset into the stage in seconds to when this AnimSequence should start playing to match the\nskeletal animation in that stage. This is required because UAnimSequences just range from the\nfirst skeletal timeSample to the last, and the first sample is not necessarily the startTimeCode\nfor the stage. Note that this is wrt. the startTimeCode of the *layer*, and not the composed stage.\nThis is only used for animating USkeletalMeshComponents via the AUsdStageActor, and it is in\nseconds since it will need to drive the UAnimSequence with a time value in the [0, LenghtSeconds] range.\nThis should be applied *after* any offset/scale conversions on the time coordinate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::NewProp_LayerStartOffsetSeconds = { "LayerStartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdAnimSequenceAssetImportData, LayerStartOffsetSeconds), METADATA_PARAMS(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::NewProp_LayerStartOffsetSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::NewProp_LayerStartOffsetSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::NewProp_LayerStartOffsetSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAnimSequenceAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::ClassParams = {
		&UUsdAnimSequenceAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData.OuterSingleton, Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdAnimSequenceAssetImportData>()
	{
		return UUsdAnimSequenceAssetImportData::StaticClass();
	}
	UUsdAnimSequenceAssetImportData::UUsdAnimSequenceAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAnimSequenceAssetImportData);
	UUsdAnimSequenceAssetImportData::~UUsdAnimSequenceAssetImportData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdPrimPathList;
class UScriptStruct* FUsdPrimPathList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdPrimPathList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdPrimPathList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdPrimPathList, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdPrimPathList"));
	}
	return Z_Registration_Info_UScriptStruct_UsdPrimPathList.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdPrimPathList>()
{
	return FUsdPrimPathList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUsdPrimPathList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple wrapper because we're not allowed to have TMap properties with TArray<FString> as values */" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "Simple wrapper because we're not allowed to have TMap properties with TArray<FString> as values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdPrimPathList>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_Inner = { "PrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths = { "PrimPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdPrimPathList, PrimPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewProp_PrimPaths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
		nullptr,
		&NewStructOps,
		"UsdPrimPathList",
		sizeof(FUsdPrimPathList),
		alignof(FUsdPrimPathList),
		Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsdPrimPathList()
	{
		if (!Z_Registration_Info_UScriptStruct_UsdPrimPathList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdPrimPathList.InnerSingleton, Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UsdPrimPathList.InnerSingleton;
	}
	void UUsdMeshAssetImportData::StaticRegisterNativesUUsdMeshAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdMeshAssetImportData);
	UClass* Z_Construct_UClass_UUsdMeshAssetImportData_NoRegister()
	{
		return UUsdMeshAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UUsdMeshAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlotToPrimPaths_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotToPrimPaths_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotToPrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialSlotToPrimPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdMeshAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUsdAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMeshAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Options Options" },
		{ "Comment", "/** We assign these to UStaticMeshes or USkeletalMeshes generated from USD */" },
		{ "IncludePath", "USDAssetImportData.h" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "We assign these to UStaticMeshes or USkeletalMeshes generated from USD" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_ValueProp = { "MaterialSlotToPrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FUsdPrimPathList, METADATA_PARAMS(nullptr, 0) }; // 2736182745
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_Key_KeyProp = { "MaterialSlotToPrimPaths_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maps from a material slot index of an UStaticMesh or USkeletalMesh to a list of source prims that contain this\n\x09 * assignment. It can contain multiple prims in case we combine material slots and/or collapse prims\n\x09 * (e.g. {0: ['/Root/mesh', '/Root/othermesh/geomsubset0', '/Root/othermesh/geomsubset1'] }).\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "Maps from a material slot index of an UStaticMesh or USkeletalMesh to a list of source prims that contain this\nassignment. It can contain multiple prims in case we combine material slots and/or collapse prims\n(e.g. {0: ['/Root/mesh', '/Root/othermesh/geomsubset0', '/Root/othermesh/geomsubset1'] })." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths = { "MaterialSlotToPrimPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdMeshAssetImportData, MaterialSlotToPrimPaths), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_MetaData)) }; // 2736182745
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdMeshAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdMeshAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdMeshAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::ClassParams = {
		&UUsdMeshAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdMeshAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdMeshAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UUsdMeshAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdMeshAssetImportData.OuterSingleton, Z_Construct_UClass_UUsdMeshAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdMeshAssetImportData.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdMeshAssetImportData>()
	{
		return UUsdMeshAssetImportData::StaticClass();
	}
	UUsdMeshAssetImportData::UUsdMeshAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdMeshAssetImportData);
	UUsdMeshAssetImportData::~UUsdMeshAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_Statics::ScriptStructInfo[] = {
		{ FUsdPrimPathList::StaticStruct, Z_Construct_UScriptStruct_FUsdPrimPathList_Statics::NewStructOps, TEXT("UsdPrimPathList"), &Z_Registration_Info_UScriptStruct_UsdPrimPathList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdPrimPathList), 2736182745U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdAssetImportData, UUsdAssetImportData::StaticClass, TEXT("UUsdAssetImportData"), &Z_Registration_Info_UClass_UUsdAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAssetImportData), 4152208916U) },
		{ Z_Construct_UClass_UUsdAnimSequenceAssetImportData, UUsdAnimSequenceAssetImportData::StaticClass, TEXT("UUsdAnimSequenceAssetImportData"), &Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAnimSequenceAssetImportData), 1146612522U) },
		{ Z_Construct_UClass_UUsdMeshAssetImportData, UUsdMeshAssetImportData::StaticClass, TEXT("UUsdMeshAssetImportData"), &Z_Registration_Info_UClass_UUsdMeshAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdMeshAssetImportData), 195777712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_792516118(TEXT("/Script/USDClasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetImportData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
