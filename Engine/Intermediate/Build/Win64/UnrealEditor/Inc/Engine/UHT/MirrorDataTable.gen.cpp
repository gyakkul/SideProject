// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/MirrorDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorDataTable() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMirrorRowType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorTableRow();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorRowType;
	static UEnum* EMirrorRowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorRowType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMirrorRowType"));
		}
		return Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMirrorRowType::Type>()
	{
		return EMirrorRowType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMirrorRowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enumerators[] = {
		{ "EMirrorRowType::Bone", (int64)EMirrorRowType::Bone },
		{ "EMirrorRowType::AnimationNotify", (int64)EMirrorRowType::AnimationNotify },
		{ "EMirrorRowType::Curve", (int64)EMirrorRowType::Curve },
		{ "EMirrorRowType::SyncMarker", (int64)EMirrorRowType::SyncMarker },
		{ "EMirrorRowType::Custom", (int64)EMirrorRowType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enum_MetaDataParams[] = {
		{ "AnimationNotify.Name", "EMirrorRowType::AnimationNotify" },
		{ "Bone.Name", "EMirrorRowType::Bone" },
		{ "Comment", "/** Type referenced by a row in the mirror data table */" },
		{ "Curve.Name", "EMirrorRowType::Curve" },
		{ "Custom.Name", "EMirrorRowType::Custom" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "SyncMarker.Name", "EMirrorRowType::SyncMarker" },
		{ "ToolTip", "Type referenced by a row in the mirror data table" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMirrorRowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMirrorRowType",
		"EMirrorRowType::Type",
		Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMirrorRowType()
	{
		if (!Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton, Z_Construct_UEnum_Engine_EMirrorRowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorFindReplaceMethod;
	static UEnum* EMirrorFindReplaceMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMirrorFindReplaceMethod"));
		}
		return Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMirrorFindReplaceMethod::Type>()
	{
		return EMirrorFindReplaceMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enumerators[] = {
		{ "EMirrorFindReplaceMethod::Prefix", (int64)EMirrorFindReplaceMethod::Prefix },
		{ "EMirrorFindReplaceMethod::Suffix", (int64)EMirrorFindReplaceMethod::Suffix },
		{ "EMirrorFindReplaceMethod::RegularExpression", (int64)EMirrorFindReplaceMethod::RegularExpression },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Find and Replace Method for FMirrorFindReplaceExpression. */" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "Prefix.Comment", "/** Only find and replace matching strings at the start of the name  */" },
		{ "Prefix.Name", "EMirrorFindReplaceMethod::Prefix" },
		{ "Prefix.ToolTip", "Only find and replace matching strings at the start of the name" },
		{ "RegularExpression.Comment", "/** Use regular expressions for find and replace, including support for captures $1 - $10 */" },
		{ "RegularExpression.Name", "EMirrorFindReplaceMethod::RegularExpression" },
		{ "RegularExpression.ToolTip", "Use regular expressions for find and replace, including support for captures $1 - $10" },
		{ "Suffix.Comment", "/** Only find and replace matching strings at the end of the name  */" },
		{ "Suffix.Name", "EMirrorFindReplaceMethod::Suffix" },
		{ "Suffix.ToolTip", "Only find and replace matching strings at the end of the name" },
		{ "ToolTip", "Find and Replace Method for FMirrorFindReplaceExpression." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMirrorFindReplaceMethod",
		"EMirrorFindReplaceMethod::Type",
		Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod()
	{
		if (!Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton, Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMirrorTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMirrorTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MirrorTableRow;
class UScriptStruct* FMirrorTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MirrorTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMirrorTableRow, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MirrorTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_MirrorTableRow.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMirrorTableRow>()
{
	return FMirrorTableRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMirrorTableRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirroredName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MirroredName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorEntryType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorEntryType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**  Base Mirror Table containing all data required by the animation mirroring system. */" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "ToolTip", "Base Mirror Table containing all data required by the animation mirroring system." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMirrorTableRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMirrorTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirroredName_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirroredName = { "MirroredName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMirrorTableRow, MirroredName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirroredName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirroredName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirrorEntryType_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirrorEntryType = { "MirrorEntryType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMirrorTableRow, MirrorEntryType), Z_Construct_UEnum_Engine_EMirrorRowType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirrorEntryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirrorEntryType_MetaData)) }; // 2854553705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMirrorTableRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirroredName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirrorEntryType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MirrorTableRow",
		sizeof(FMirrorTableRow),
		alignof(FMirrorTableRow),
		Z_Construct_UScriptStruct_FMirrorTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMirrorTableRow()
	{
		if (!Z_Registration_Info_UScriptStruct_MirrorTableRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MirrorTableRow.InnerSingleton, Z_Construct_UScriptStruct_FMirrorTableRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MirrorTableRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression;
class UScriptStruct* FMirrorFindReplaceExpression::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MirrorFindReplaceExpression"));
	}
	return Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMirrorFindReplaceExpression>()
{
	return FMirrorFindReplaceExpression::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindExpression_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FindExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceExpression_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReplaceExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindReplaceMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FindReplaceMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Find and Replace expressions used to generate mirror tables*/" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "ToolTip", "Find and Replace expressions used to generate mirror tables" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMirrorFindReplaceExpression>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindExpression_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindExpression = { "FindExpression", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMirrorFindReplaceExpression, FindExpression), METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_ReplaceExpression_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_ReplaceExpression = { "ReplaceExpression", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMirrorFindReplaceExpression, ReplaceExpression), METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_ReplaceExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_ReplaceExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindReplaceMethod_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindReplaceMethod = { "FindReplaceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMirrorFindReplaceExpression, FindReplaceMethod), Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindReplaceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindReplaceMethod_MetaData)) }; // 1424302819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_ReplaceExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindReplaceMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MirrorFindReplaceExpression",
		sizeof(FMirrorFindReplaceExpression),
		alignof(FMirrorFindReplaceExpression),
		Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression()
	{
		if (!Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.InnerSingleton, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.InnerSingleton;
	}
	void UMirrorDataTable::StaticRegisterNativesUMirrorDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorDataTable);
	UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister()
	{
		return UMirrorDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorFindReplaceExpressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorFindReplaceExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MirrorFindReplaceExpressions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* AutoExpandCategories = \"MirrorDataTable,ImportOptions\"*/" },
		{ "HideCategories", "ImportOptions ImportSource" },
		{ "IncludePath", "Animation/MirrorDataTable.h" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AutoExpandCategories = \"MirrorDataTable,ImportOptions\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions_Inner = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression, METADATA_PARAMS(nullptr, 0) }; // 633994333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions_MetaData[] = {
		{ "Category", "CreateTable" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorDataTable, MirrorFindReplaceExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions_MetaData)) }; // 633994333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorDataTable, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014010000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorDataTable, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_Skeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_Skeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorDataTable_Statics::ClassParams = {
		&UMirrorDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorDataTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorDataTable()
	{
		if (!Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton, Z_Construct_UClass_UMirrorDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMirrorDataTable>()
	{
		return UMirrorDataTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorDataTable);
	UMirrorDataTable::~UMirrorDataTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::EnumInfo[] = {
		{ EMirrorRowType_StaticEnum, TEXT("EMirrorRowType"), &Z_Registration_Info_UEnum_EMirrorRowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2854553705U) },
		{ EMirrorFindReplaceMethod_StaticEnum, TEXT("EMirrorFindReplaceMethod"), &Z_Registration_Info_UEnum_EMirrorFindReplaceMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1424302819U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ScriptStructInfo[] = {
		{ FMirrorTableRow::StaticStruct, Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewStructOps, TEXT("MirrorTableRow"), &Z_Registration_Info_UScriptStruct_MirrorTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMirrorTableRow), 3154082048U) },
		{ FMirrorFindReplaceExpression::StaticStruct, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewStructOps, TEXT("MirrorFindReplaceExpression"), &Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMirrorFindReplaceExpression), 633994333U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirrorDataTable, UMirrorDataTable::StaticClass, TEXT("UMirrorDataTable"), &Z_Registration_Info_UClass_UMirrorDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorDataTable), 4064532322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_2534428017(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
