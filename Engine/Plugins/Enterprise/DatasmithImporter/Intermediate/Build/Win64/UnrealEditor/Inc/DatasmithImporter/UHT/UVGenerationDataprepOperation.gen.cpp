// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UVTools/UVGenerationDataprepOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVGenerationDataprepOperation() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepOperation();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UUVGenerationFlattenMappingOperation();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UUVGenerationFlattenMappingOperation_NoRegister();
	DATASMITHIMPORTER_API UEnum* Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection;
	static UEnum* EUnwrappedUVDatasmithOperationChannelSelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection, (UObject*)Z_Construct_UPackage__Script_DatasmithImporter(), TEXT("EUnwrappedUVDatasmithOperationChannelSelection"));
		}
		return Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UEnum* StaticEnum<EUnwrappedUVDatasmithOperationChannelSelection>()
	{
		return EUnwrappedUVDatasmithOperationChannelSelection_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::Enumerators[] = {
		{ "EUnwrappedUVDatasmithOperationChannelSelection::FirstEmptyChannel", (int64)EUnwrappedUVDatasmithOperationChannelSelection::FirstEmptyChannel },
		{ "EUnwrappedUVDatasmithOperationChannelSelection::SpecifyChannel", (int64)EUnwrappedUVDatasmithOperationChannelSelection::SpecifyChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::Enum_MetaDataParams[] = {
		{ "FirstEmptyChannel.Name", "EUnwrappedUVDatasmithOperationChannelSelection::FirstEmptyChannel" },
		{ "FirstEmptyChannel.Tooltip", "Generate the unwrapped UV in the first UV channel that is empty." },
		{ "ModuleRelativePath", "Private/UVTools/UVGenerationDataprepOperation.h" },
		{ "SpecifyChannel.Name", "EUnwrappedUVDatasmithOperationChannelSelection::SpecifyChannel" },
		{ "SpecifyChannel.Tooltip", "Manually select the target UV channel for the unwrapped UV generation." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithImporter,
		nullptr,
		"EUnwrappedUVDatasmithOperationChannelSelection",
		"EUnwrappedUVDatasmithOperationChannelSelection",
		Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection()
	{
		if (!Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection.InnerSingleton, Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection.InnerSingleton;
	}
	void UUVGenerationFlattenMappingOperation::StaticRegisterNativesUUVGenerationFlattenMappingOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVGenerationFlattenMappingOperation);
	UClass* Z_Construct_UClass_UUVGenerationFlattenMappingOperation_NoRegister()
	{
		return UUVGenerationFlattenMappingOperation::StaticClass();
	}
	struct Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelSelection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelSelection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "MeshOperation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Generate Unwrapped UVs" },
		{ "IncludePath", "UVTools/UVGenerationDataprepOperation.h" },
		{ "ModuleRelativePath", "Private/UVTools/UVGenerationDataprepOperation.h" },
		{ "ToolTip", "For each static mesh to process, generate an unwrapped UV map in the specified channel" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_ChannelSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_ChannelSelection_MetaData[] = {
		{ "Category", "UV Generation Settings" },
		{ "ModuleRelativePath", "Private/UVTools/UVGenerationDataprepOperation.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_ChannelSelection = { "ChannelSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVGenerationFlattenMappingOperation, ChannelSelection), Z_Construct_UEnum_DatasmithImporter_EUnwrappedUVDatasmithOperationChannelSelection, METADATA_PARAMS(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_ChannelSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_ChannelSelection_MetaData)) }; // 4195245665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "UV Generation Settings" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "DisplayName", "UV Channel" },
		{ "EditCondition", "ChannelSelection == EUnwrappedUVDatasmithOperationChannelSelection::SpecifyChannel" },
		{ "ModuleRelativePath", "Private/UVTools/UVGenerationDataprepOperation.h" },
		{ "ToolTip", "The UV channel where to generate the flatten mapping" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVGenerationFlattenMappingOperation, UVChannel), METADATA_PARAMS(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_UVChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "UV Generation Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Private/UVTools/UVGenerationDataprepOperation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVGenerationFlattenMappingOperation, AngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_AngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_AngleThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_ChannelSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_ChannelSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::NewProp_AngleThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVGenerationFlattenMappingOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::ClassParams = {
		&UUVGenerationFlattenMappingOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVGenerationFlattenMappingOperation()
	{
		if (!Z_Registration_Info_UClass_UUVGenerationFlattenMappingOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVGenerationFlattenMappingOperation.OuterSingleton, Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVGenerationFlattenMappingOperation.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UUVGenerationFlattenMappingOperation>()
	{
		return UUVGenerationFlattenMappingOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVGenerationFlattenMappingOperation);
	UUVGenerationFlattenMappingOperation::~UUVGenerationFlattenMappingOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_Statics::EnumInfo[] = {
		{ EUnwrappedUVDatasmithOperationChannelSelection_StaticEnum, TEXT("EUnwrappedUVDatasmithOperationChannelSelection"), &Z_Registration_Info_UEnum_EUnwrappedUVDatasmithOperationChannelSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4195245665U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVGenerationFlattenMappingOperation, UUVGenerationFlattenMappingOperation::StaticClass, TEXT("UUVGenerationFlattenMappingOperation"), &Z_Registration_Info_UClass_UUVGenerationFlattenMappingOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVGenerationFlattenMappingOperation), 380470884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_4121937615(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
