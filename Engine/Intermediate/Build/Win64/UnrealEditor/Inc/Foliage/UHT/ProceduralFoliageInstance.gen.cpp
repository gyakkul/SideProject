// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFoliageInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_ESimulationOverlap();
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_ESimulationQuery();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationOverlap;
	static UEnum* ESimulationOverlap_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationOverlap, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("ESimulationOverlap"));
		}
		return Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton;
	}
	template<> FOLIAGE_API UEnum* StaticEnum<ESimulationOverlap::Type>()
	{
		return ESimulationOverlap_StaticEnum();
	}
	struct Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enumerators[] = {
		{ "ESimulationOverlap::CollisionOverlap", (int64)ESimulationOverlap::CollisionOverlap },
		{ "ESimulationOverlap::ShadeOverlap", (int64)ESimulationOverlap::ShadeOverlap },
		{ "ESimulationOverlap::None", (int64)ESimulationOverlap::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CollisionOverlap.Comment", "/*Instances overlap with collision*/" },
		{ "CollisionOverlap.Name", "ESimulationOverlap::CollisionOverlap" },
		{ "CollisionOverlap.ToolTip", "Instances overlap with collision" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
		{ "None.Comment", "/*No overlap*/" },
		{ "None.Name", "ESimulationOverlap::None" },
		{ "None.ToolTip", "No overlap" },
		{ "ShadeOverlap.Comment", "/*Instances overlap with shade*/" },
		{ "ShadeOverlap.Name", "ESimulationOverlap::ShadeOverlap" },
		{ "ShadeOverlap.ToolTip", "Instances overlap with shade" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
		nullptr,
		"ESimulationOverlap",
		"ESimulationOverlap::Type",
		Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Foliage_ESimulationOverlap()
	{
		if (!Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton, Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationQuery;
	static UEnum* ESimulationQuery_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationQuery, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("ESimulationQuery"));
		}
		return Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton;
	}
	template<> FOLIAGE_API UEnum* StaticEnum<ESimulationQuery::Type>()
	{
		return ESimulationQuery_StaticEnum();
	}
	struct Z_Construct_UEnum_Foliage_ESimulationQuery_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enumerators[] = {
		{ "ESimulationQuery::None", (int64)ESimulationQuery::None },
		{ "ESimulationQuery::CollisionOverlap", (int64)ESimulationQuery::CollisionOverlap },
		{ "ESimulationQuery::ShadeOverlap", (int64)ESimulationQuery::ShadeOverlap },
		{ "ESimulationQuery::AnyOverlap", (int64)ESimulationQuery::AnyOverlap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enum_MetaDataParams[] = {
		{ "AnyOverlap.Comment", "/*any overlap*/" },
		{ "AnyOverlap.Name", "ESimulationQuery::AnyOverlap" },
		{ "AnyOverlap.ToolTip", "any overlap" },
		{ "BlueprintType", "true" },
		{ "CollisionOverlap.Comment", "/*Instances overlap with collision*/" },
		{ "CollisionOverlap.Name", "ESimulationQuery::CollisionOverlap" },
		{ "CollisionOverlap.ToolTip", "Instances overlap with collision" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ESimulationQuery::None" },
		{ "ShadeOverlap.Comment", "/*Instances overlap with shade*/" },
		{ "ShadeOverlap.Name", "ESimulationQuery::ShadeOverlap" },
		{ "ShadeOverlap.ToolTip", "Instances overlap with shade" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
		nullptr,
		"ESimulationQuery",
		"ESimulationQuery::Type",
		Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Foliage_ESimulationQuery()
	{
		if (!Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton, Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance;
class UScriptStruct* FProceduralFoliageInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralFoliageInstance, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("ProceduralFoliageInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.OuterSingleton;
}
template<> FOLIAGE_API UScriptStruct* StaticStruct<FProceduralFoliageInstance>()
{
	return FProceduralFoliageInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Age;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralFoliageInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Age), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Type), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
		nullptr,
		&NewStructOps,
		"ProceduralFoliageInstance",
		sizeof(FProceduralFoliageInstance),
		alignof(FProceduralFoliageInstance),
		Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.InnerSingleton, Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::EnumInfo[] = {
		{ ESimulationOverlap_StaticEnum, TEXT("ESimulationOverlap"), &Z_Registration_Info_UEnum_ESimulationOverlap, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2308821970U) },
		{ ESimulationQuery_StaticEnum, TEXT("ESimulationQuery"), &Z_Registration_Info_UEnum_ESimulationQuery, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3833548357U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::ScriptStructInfo[] = {
		{ FProceduralFoliageInstance::StaticStruct, Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewStructOps, TEXT("ProceduralFoliageInstance"), &Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralFoliageInstance), 923038879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_119619979(TEXT("/Script/Foliage"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
