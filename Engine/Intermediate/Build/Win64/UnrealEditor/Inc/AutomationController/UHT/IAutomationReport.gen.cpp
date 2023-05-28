// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAutomationReport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAutomationReport() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutomationArtifactType;
	static UEnum* EAutomationArtifactType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationArtifactType, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("EAutomationArtifactType"));
		}
		return Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton;
	}
	template<> AUTOMATIONCONTROLLER_API UEnum* StaticEnum<EAutomationArtifactType>()
	{
		return EAutomationArtifactType_StaticEnum();
	}
	struct Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enumerators[] = {
		{ "EAutomationArtifactType::None", (int64)EAutomationArtifactType::None },
		{ "EAutomationArtifactType::Image", (int64)EAutomationArtifactType::Image },
		{ "EAutomationArtifactType::Comparison", (int64)EAutomationArtifactType::Comparison },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enum_MetaDataParams[] = {
		{ "Comparison.Name", "EAutomationArtifactType::Comparison" },
		{ "Image.Name", "EAutomationArtifactType::Image" },
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
		{ "None.Name", "EAutomationArtifactType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		"EAutomationArtifactType",
		"EAutomationArtifactType",
		Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType()
	{
		if (!Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton, Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationArtifact;
class UScriptStruct* FAutomationArtifact::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationArtifact.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationArtifact.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationArtifact, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomationArtifact"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationArtifact.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomationArtifact>()
{
	return FAutomationArtifact::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationArtifact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Files;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationArtifact>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationArtifact, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationArtifact, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationArtifact, Type), Z_Construct_UEnum_AutomationController_EAutomationArtifactType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_MetaData)) }; // 3296222692
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_ValueProp = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp = { "Files_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationArtifact, Files), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomationArtifact",
		sizeof(FAutomationArtifact),
		alignof(FAutomationArtifact),
		Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationArtifact.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationArtifact.InnerSingleton, Z_Construct_UScriptStruct_FAutomationArtifact_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationArtifact.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::EnumInfo[] = {
		{ EAutomationArtifactType_StaticEnum, TEXT("EAutomationArtifactType"), &Z_Registration_Info_UEnum_EAutomationArtifactType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3296222692U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::ScriptStructInfo[] = {
		{ FAutomationArtifact::StaticStruct, Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewStructOps, TEXT("AutomationArtifact"), &Z_Registration_Info_UScriptStruct_AutomationArtifact, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationArtifact), 3385969037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_2595950681(TEXT("/Script/AutomationController"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
