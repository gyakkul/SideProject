// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FbxImportUIDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxImportUIDetails() {}
// Cross Module References
	DETAILCUSTOMIZATIONS_API UEnum* Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod();
	UPackage* Z_Construct_UPackage__Script_DetailCustomizations();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialImportMethod;
	static UEnum* EMaterialImportMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialImportMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialImportMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod, (UObject*)Z_Construct_UPackage__Script_DetailCustomizations(), TEXT("EMaterialImportMethod"));
		}
		return Z_Registration_Info_UEnum_EMaterialImportMethod.OuterSingleton;
	}
	template<> DETAILCUSTOMIZATIONS_API UEnum* StaticEnum<EMaterialImportMethod>()
	{
		return EMaterialImportMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::Enumerators[] = {
		{ "EMaterialImportMethod::CreateNewMaterials", (int64)EMaterialImportMethod::CreateNewMaterials },
		{ "EMaterialImportMethod::CreateNewInstancedMaterials", (int64)EMaterialImportMethod::CreateNewInstancedMaterials },
		{ "EMaterialImportMethod::DoNotCreateMaterialString", (int64)EMaterialImportMethod::DoNotCreateMaterialString },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::Enum_MetaDataParams[] = {
		{ "CreateNewInstancedMaterials.DisplayName", "Create New Instanced Materials" },
		{ "CreateNewInstancedMaterials.Name", "EMaterialImportMethod::CreateNewInstancedMaterials" },
		{ "CreateNewInstancedMaterials.Tooltip", "A new material instance of the specified base material will be created and set with the imported material data." },
		{ "CreateNewMaterials.DisplayName", "Create New Materials" },
		{ "CreateNewMaterials.Name", "EMaterialImportMethod::CreateNewMaterials" },
		{ "CreateNewMaterials.ToolTip", "A new material will be created from the imported data." },
		{ "DoNotCreateMaterialString.DisplayName", "Do Not Create Material" },
		{ "DoNotCreateMaterialString.Name", "EMaterialImportMethod::DoNotCreateMaterialString" },
		{ "DoNotCreateMaterialString.Tooltip", "No materials will be created from the import data." },
		{ "ModuleRelativePath", "Private/FbxImportUIDetails.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DetailCustomizations,
		nullptr,
		"EMaterialImportMethod",
		"EMaterialImportMethod",
		Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod()
	{
		if (!Z_Registration_Info_UEnum_EMaterialImportMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialImportMethod.InnerSingleton, Z_Construct_UEnum_DetailCustomizations_EMaterialImportMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialImportMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Private_FbxImportUIDetails_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Private_FbxImportUIDetails_h_Statics::EnumInfo[] = {
		{ EMaterialImportMethod_StaticEnum, TEXT("EMaterialImportMethod"), &Z_Registration_Info_UEnum_EMaterialImportMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3285634912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Private_FbxImportUIDetails_h_1153059140(TEXT("/Script/DetailCustomizations"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Private_FbxImportUIDetails_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Private_FbxImportUIDetails_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
