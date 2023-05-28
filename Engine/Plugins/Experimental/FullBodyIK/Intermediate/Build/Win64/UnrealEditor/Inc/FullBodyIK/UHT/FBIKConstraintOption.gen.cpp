// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIKConstraintOption.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBIKConstraintOption() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FULLBODYIK_API UEnum* Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType();
	FULLBODYIK_API UEnum* Z_Construct_UEnum_FullBodyIK_EPoleVectorOption();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKBoneLimit();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKConstraintOption();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMotionProcessInput();
	UPackage* Z_Construct_UPackage__Script_FullBodyIK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBIKBoneLimitType;
	static UEnum* EFBIKBoneLimitType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBIKBoneLimitType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBIKBoneLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("EFBIKBoneLimitType"));
		}
		return Z_Registration_Info_UEnum_EFBIKBoneLimitType.OuterSingleton;
	}
	template<> FULLBODYIK_API UEnum* StaticEnum<EFBIKBoneLimitType>()
	{
		return EFBIKBoneLimitType_StaticEnum();
	}
	struct Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enumerators[] = {
		{ "EFBIKBoneLimitType::Free", (int64)EFBIKBoneLimitType::Free },
		{ "EFBIKBoneLimitType::Limit", (int64)EFBIKBoneLimitType::Limit },
		{ "EFBIKBoneLimitType::Locked", (int64)EFBIKBoneLimitType::Locked },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enum_MetaDataParams[] = {
		{ "Free.Name", "EFBIKBoneLimitType::Free" },
		{ "Limit.Name", "EFBIKBoneLimitType::Limit" },
		{ "Locked.Comment", "// currently hard limit\n" },
		{ "Locked.Name", "EFBIKBoneLimitType::Locked" },
		{ "Locked.ToolTip", "currently hard limit" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		"EFBIKBoneLimitType",
		"EFBIKBoneLimitType",
		Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType()
	{
		if (!Z_Registration_Info_UEnum_EFBIKBoneLimitType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBIKBoneLimitType.InnerSingleton, Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBIKBoneLimitType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBIKBoneLimit;
class UScriptStruct* FFBIKBoneLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKBoneLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBIKBoneLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBIKBoneLimit, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("FBIKBoneLimit"));
	}
	return Z_Registration_Info_UScriptStruct_FBIKBoneLimit.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FFBIKBoneLimit>()
{
	return FFBIKBoneLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_X_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_X_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType_X;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Y_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_Y_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType_Y;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Z_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_Z_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBIKBoneLimit>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X = { "LimitType_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKBoneLimit, LimitType_X), Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X_MetaData)) }; // 3139609487
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y = { "LimitType_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKBoneLimit, LimitType_Y), Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y_MetaData)) }; // 3139609487
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z = { "LimitType_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKBoneLimit, LimitType_Z), Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z_MetaData)) }; // 3139609487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_Limit_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "// currently no negative limit, for position we may need min/max\n" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "currently no negative limit, for position we may need min/max" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKBoneLimit, Limit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_Limit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		&NewStructOps,
		"FBIKBoneLimit",
		sizeof(FFBIKBoneLimit),
		alignof(FFBIKBoneLimit),
		Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBIKBoneLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_FBIKBoneLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBIKBoneLimit.InnerSingleton, Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FBIKBoneLimit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoleVectorOption;
	static UEnum* EPoleVectorOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoleVectorOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoleVectorOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FullBodyIK_EPoleVectorOption, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("EPoleVectorOption"));
		}
		return Z_Registration_Info_UEnum_EPoleVectorOption.OuterSingleton;
	}
	template<> FULLBODYIK_API UEnum* StaticEnum<EPoleVectorOption>()
	{
		return EPoleVectorOption_StaticEnum();
	}
	struct Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enumerators[] = {
		{ "EPoleVectorOption::Direction", (int64)EPoleVectorOption::Direction },
		{ "EPoleVectorOption::Location", (int64)EPoleVectorOption::Location },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enum_MetaDataParams[] = {
		{ "Direction.Name", "EPoleVectorOption::Direction" },
		{ "Location.Comment", "/* The polevector will indicate a direction vector in their local bone space */" },
		{ "Location.Name", "EPoleVectorOption::Location" },
		{ "Location.ToolTip", "The polevector will indicate a direction vector in their local bone space" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		"EPoleVectorOption",
		"EPoleVectorOption",
		Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FullBodyIK_EPoleVectorOption()
	{
		if (!Z_Registration_Info_UEnum_EPoleVectorOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoleVectorOption.InnerSingleton, Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoleVectorOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBIKConstraintOption;
class UScriptStruct* FFBIKConstraintOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKConstraintOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBIKConstraintOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBIKConstraintOption, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("FBIKConstraintOption"));
	}
	return Z_Registration_Info_UScriptStruct_FBIKConstraintOption.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FFBIKConstraintOption>()
{
	return FFBIKConstraintOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStiffness_MetaData[];
#endif
		static void NewProp_bUseStiffness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAngularLimit_MetaData[];
#endif
		static void NewProp_bUseAngularLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAngularLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePoleVector_MetaData[];
#endif
		static void NewProp_bUsePoleVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePoleVector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PoleVectorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoleVectorOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBIKConstraintOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Bone Name */" },
		{ "Constant", "" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Bone Name" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKConstraintOption, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FFBIKConstraintOption*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness_SetBit(void* Obj)
	{
		((FFBIKConstraintOption*)Obj)->bUseStiffness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness = { "bUseStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_LinearStiffness_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Scale of [0, 1] and applied to linear motion strength - linear stiffness works on their local frame*/" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Scale of [0, 1] and applied to linear motion strength - linear stiffness works on their local frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_LinearStiffness = { "LinearStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKConstraintOption, LinearStiffness), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_LinearStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_LinearStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularStiffness_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Scale of [0, 1] and applied to angular motion strength, xyz is applied to twist, swing1, swing2 */" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Scale of [0, 1] and applied to angular motion strength, xyz is applied to twist, swing1, swing2" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularStiffness = { "AngularStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKConstraintOption, AngularStiffness), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit_SetBit(void* Obj)
	{
		((FFBIKConstraintOption*)Obj)->bUseAngularLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit = { "bUseAngularLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularLimit_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Angular delta limit of this joints local transform. [-Limit, Limit] */" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Angular delta limit of this joints local transform. [-Limit, Limit]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularLimit = { "AngularLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKConstraintOption, AngularLimit), Z_Construct_UScriptStruct_FFBIKBoneLimit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularLimit_MetaData)) }; // 2927206520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector_SetBit(void* Obj)
	{
		((FFBIKConstraintOption*)Obj)->bUsePoleVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector = { "bUsePoleVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption = { "PoleVectorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKConstraintOption, PoleVectorOption), Z_Construct_UEnum_FullBodyIK_EPoleVectorOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption_MetaData)) }; // 3646828921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Pole Vector in their local space*/" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Pole Vector in their local space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKConstraintOption, PoleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "// this is offset rotation applied when constructing the local frame\n" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "this is offset rotation applied when constructing the local frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKConstraintOption, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_OffsetRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_LinearStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_OffsetRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		&NewStructOps,
		"FBIKConstraintOption",
		sizeof(FFBIKConstraintOption),
		alignof(FFBIKConstraintOption),
		Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBIKConstraintOption()
	{
		if (!Z_Registration_Info_UScriptStruct_FBIKConstraintOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBIKConstraintOption.InnerSingleton, Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FBIKConstraintOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionProcessInput;
class UScriptStruct* FMotionProcessInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionProcessInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionProcessInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionProcessInput, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("MotionProcessInput"));
	}
	return Z_Registration_Info_UScriptStruct_MotionProcessInput.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FMotionProcessInput>()
{
	return FMotionProcessInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionProcessInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceEffectorRotationTarget_MetaData[];
#endif
		static void NewProp_bForceEffectorRotationTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEffectorRotationTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyWhenReachedToTarget_MetaData[];
#endif
		static void NewProp_bOnlyApplyWhenReachedToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyWhenReachedToTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionProcessInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionProcessInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget_MetaData[] = {
		{ "Category", "FMotionProcessInput" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget_SetBit(void* Obj)
	{
		((FMotionProcessInput*)Obj)->bForceEffectorRotationTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget = { "bForceEffectorRotationTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotionProcessInput), &Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget_MetaData[] = {
		{ "Category", "FMotionProcessInput" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget_SetBit(void* Obj)
	{
		((FMotionProcessInput*)Obj)->bOnlyApplyWhenReachedToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget = { "bOnlyApplyWhenReachedToTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotionProcessInput), &Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionProcessInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionProcessInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		&NewStructOps,
		"MotionProcessInput",
		sizeof(FMotionProcessInput),
		alignof(FMotionProcessInput),
		Z_Construct_UScriptStruct_FMotionProcessInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionProcessInput()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionProcessInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionProcessInput.InnerSingleton, Z_Construct_UScriptStruct_FMotionProcessInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionProcessInput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::EnumInfo[] = {
		{ EFBIKBoneLimitType_StaticEnum, TEXT("EFBIKBoneLimitType"), &Z_Registration_Info_UEnum_EFBIKBoneLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3139609487U) },
		{ EPoleVectorOption_StaticEnum, TEXT("EPoleVectorOption"), &Z_Registration_Info_UEnum_EPoleVectorOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3646828921U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::ScriptStructInfo[] = {
		{ FFBIKBoneLimit::StaticStruct, Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewStructOps, TEXT("FBIKBoneLimit"), &Z_Registration_Info_UScriptStruct_FBIKBoneLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBIKBoneLimit), 2927206520U) },
		{ FFBIKConstraintOption::StaticStruct, Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewStructOps, TEXT("FBIKConstraintOption"), &Z_Registration_Info_UScriptStruct_FBIKConstraintOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBIKConstraintOption), 2380895814U) },
		{ FMotionProcessInput::StaticStruct, Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewStructOps, TEXT("MotionProcessInput"), &Z_Registration_Info_UScriptStruct_MotionProcessInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionProcessInput), 2662287061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_2844046997(TEXT("/Script/FullBodyIK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
