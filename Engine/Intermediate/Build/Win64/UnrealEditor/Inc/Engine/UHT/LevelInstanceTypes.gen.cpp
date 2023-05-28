// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LevelInstance/LevelInstanceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceCreationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstancePivotType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNewLevelInstanceParams();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior;
	static UEnum* ELevelInstanceRuntimeBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstanceRuntimeBehavior"));
		}
		return Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceRuntimeBehavior>()
	{
		return ELevelInstanceRuntimeBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators[] = {
		{ "ELevelInstanceRuntimeBehavior::None", (int64)ELevelInstanceRuntimeBehavior::None },
		{ "ELevelInstanceRuntimeBehavior::Embedded_Deprecated", (int64)ELevelInstanceRuntimeBehavior::Embedded_Deprecated },
		{ "ELevelInstanceRuntimeBehavior::Partitioned", (int64)ELevelInstanceRuntimeBehavior::Partitioned },
		{ "ELevelInstanceRuntimeBehavior::LevelStreaming", (int64)ELevelInstanceRuntimeBehavior::LevelStreaming },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Embedded_Deprecated.Comment", "// Deprecated exists only to avoid breaking Actor Desc serialization\n" },
		{ "Embedded_Deprecated.Hidden", "" },
		{ "Embedded_Deprecated.Name", "ELevelInstanceRuntimeBehavior::Embedded_Deprecated" },
		{ "Embedded_Deprecated.ToolTip", "Deprecated exists only to avoid breaking Actor Desc serialization" },
		{ "LevelStreaming.Comment", "// Behavior only supported through Conversion Commandlet or on non OFPA Level Instances\n" },
		{ "LevelStreaming.Hidden", "" },
		{ "LevelStreaming.Name", "ELevelInstanceRuntimeBehavior::LevelStreaming" },
		{ "LevelStreaming.ToolTip", "Behavior only supported through Conversion Commandlet or on non OFPA Level Instances" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ELevelInstanceRuntimeBehavior::None" },
		{ "Partitioned.Comment", "// Default behavior is to move Level Instance level actors to the main world partition using World Partition clustering rules\n" },
		{ "Partitioned.Name", "ELevelInstanceRuntimeBehavior::Partitioned" },
		{ "Partitioned.ToolTip", "Default behavior is to move Level Instance level actors to the main world partition using World Partition clustering rules" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELevelInstanceRuntimeBehavior",
		"ELevelInstanceRuntimeBehavior",
		Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstanceCreationType;
	static UEnum* ELevelInstanceCreationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstanceCreationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelInstanceCreationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceCreationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstanceCreationType"));
		}
		return Z_Registration_Info_UEnum_ELevelInstanceCreationType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceCreationType>()
	{
		return ELevelInstanceCreationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enumerators[] = {
		{ "ELevelInstanceCreationType::LevelInstance", (int64)ELevelInstanceCreationType::LevelInstance },
		{ "ELevelInstanceCreationType::PackedLevelActor", (int64)ELevelInstanceCreationType::PackedLevelActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enum_MetaDataParams[] = {
		{ "LevelInstance.Name", "ELevelInstanceCreationType::LevelInstance" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
		{ "PackedLevelActor.Name", "ELevelInstanceCreationType::PackedLevelActor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELevelInstanceCreationType",
		"ELevelInstanceCreationType",
		Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELevelInstanceCreationType()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstanceCreationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstanceCreationType.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelInstanceCreationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstancePivotType;
	static UEnum* ELevelInstancePivotType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstancePivotType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelInstancePivotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstancePivotType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstancePivotType"));
		}
		return Z_Registration_Info_UEnum_ELevelInstancePivotType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELevelInstancePivotType>()
	{
		return ELevelInstancePivotType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enumerators[] = {
		{ "ELevelInstancePivotType::CenterMinZ", (int64)ELevelInstancePivotType::CenterMinZ },
		{ "ELevelInstancePivotType::Center", (int64)ELevelInstancePivotType::Center },
		{ "ELevelInstancePivotType::Actor", (int64)ELevelInstancePivotType::Actor },
		{ "ELevelInstancePivotType::WorldOrigin", (int64)ELevelInstancePivotType::WorldOrigin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "ELevelInstancePivotType::Actor" },
		{ "Center.Name", "ELevelInstancePivotType::Center" },
		{ "CenterMinZ.Name", "ELevelInstancePivotType::CenterMinZ" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
		{ "WorldOrigin.Name", "ELevelInstancePivotType::WorldOrigin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELevelInstancePivotType",
		"ELevelInstancePivotType",
		Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELevelInstancePivotType()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstancePivotType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstancePivotType.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelInstancePivotType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewLevelInstanceParams;
class UScriptStruct* FNewLevelInstanceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewLevelInstanceParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NewLevelInstanceParams"));
	}
	return Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNewLevelInstanceParams>()
{
	return FNewLevelInstanceParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PivotActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowDialog_MetaData[];
#endif
		static void NewProp_bAlwaysShowDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowDialog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptForSave_MetaData[];
#endif
		static void NewProp_bPromptForSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptForSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LevelInstanceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExternalActors_MetaData[];
#endif
		static void NewProp_bExternalActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternalActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceExternalActors_MetaData[];
#endif
		static void NewProp_bForceExternalActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceExternalActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideCreationType_MetaData[];
#endif
		static void NewProp_bHideCreationType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCreationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewLevelInstanceParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "!bHideCreationType" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNewLevelInstanceParams, Type), Z_Construct_UEnum_Engine_ELevelInstanceCreationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type_MetaData)) }; // 4133885045
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNewLevelInstanceParams, PivotType), Z_Construct_UEnum_Engine_ELevelInstancePivotType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType_MetaData)) }; // 3835466578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotActor_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotActor = { "PivotActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNewLevelInstanceParams, PivotActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog_SetBit(void* Obj)
	{
		((FNewLevelInstanceParams*)Obj)->bAlwaysShowDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog = { "bAlwaysShowDialog", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_TemplateWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_TemplateWorld = { "TemplateWorld", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNewLevelInstanceParams, TemplateWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_TemplateWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_TemplateWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelPackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelPackageName = { "LevelPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNewLevelInstanceParams, LevelPackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelPackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave_SetBit(void* Obj)
	{
		((FNewLevelInstanceParams*)Obj)->bPromptForSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave = { "bPromptForSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelInstanceClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelInstanceClass = { "LevelInstanceClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNewLevelInstanceParams, LevelInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelInstanceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "!bForceExternalActors" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors_SetBit(void* Obj)
	{
		((FNewLevelInstanceParams*)Obj)->bExternalActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors = { "bExternalActors", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors_SetBit(void* Obj)
	{
		((FNewLevelInstanceParams*)Obj)->bForceExternalActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors = { "bForceExternalActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType_SetBit(void* Obj)
	{
		((FNewLevelInstanceParams*)Obj)->bHideCreationType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType = { "bHideCreationType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_TemplateWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelInstanceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NewLevelInstanceParams",
		sizeof(FNewLevelInstanceParams),
		alignof(FNewLevelInstanceParams),
		Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNewLevelInstanceParams()
	{
		if (!Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.InnerSingleton, Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::EnumInfo[] = {
		{ ELevelInstanceRuntimeBehavior_StaticEnum, TEXT("ELevelInstanceRuntimeBehavior"), &Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3078225530U) },
		{ ELevelInstanceCreationType_StaticEnum, TEXT("ELevelInstanceCreationType"), &Z_Registration_Info_UEnum_ELevelInstanceCreationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4133885045U) },
		{ ELevelInstancePivotType_StaticEnum, TEXT("ELevelInstancePivotType"), &Z_Registration_Info_UEnum_ELevelInstancePivotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3835466578U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::ScriptStructInfo[] = {
		{ FNewLevelInstanceParams::StaticStruct, Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewStructOps, TEXT("NewLevelInstanceParams"), &Z_Registration_Info_UScriptStruct_NewLevelInstanceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewLevelInstanceParams), 3150859379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_508791531(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
