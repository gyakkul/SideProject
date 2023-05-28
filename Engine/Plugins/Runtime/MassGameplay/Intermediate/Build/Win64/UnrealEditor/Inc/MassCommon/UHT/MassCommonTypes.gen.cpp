// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassCommon/Public/MassCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCommonTypes() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSequentialIDBase();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Real();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Real10();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Vector();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Vector2D();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassNetworkID();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassSnorm8Vector();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassSnorm8Vector2D();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassUnorm8Real();
	UPackage* Z_Construct_UPackage__Script_MassCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMassNetworkID>() == std::is_polymorphic<FSequentialIDBase>(), "USTRUCT FMassNetworkID cannot be polymorphic unless super FSequentialIDBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassNetworkID;
class UScriptStruct* FMassNetworkID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassNetworkID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassNetworkID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassNetworkID, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassNetworkID"));
	}
	return Z_Registration_Info_UScriptStruct_MassNetworkID.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassNetworkID>()
{
	return FMassNetworkID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassNetworkID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassNetworkID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassNetworkID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassNetworkID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassNetworkID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		Z_Construct_UScriptStruct_FSequentialIDBase,
		&NewStructOps,
		"MassNetworkID",
		sizeof(FMassNetworkID),
		alignof(FMassNetworkID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassNetworkID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassNetworkID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassNetworkID()
	{
		if (!Z_Registration_Info_UScriptStruct_MassNetworkID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassNetworkID.InnerSingleton, Z_Construct_UScriptStruct_FMassNetworkID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassNetworkID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassInt16Real;
class UScriptStruct* FMassInt16Real::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassInt16Real.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassInt16Real.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassInt16Real, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassInt16Real"));
	}
	return Z_Registration_Info_UScriptStruct_MassInt16Real.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassInt16Real>()
{
	return FMassInt16Real::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassInt16Real_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Real_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Float encoded in int16, 1cm accuracy. */" },
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
		{ "ToolTip", "Float encoded in int16, 1cm accuracy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassInt16Real_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassInt16Real>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Real_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassInt16Real_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInt16Real, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Real_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Real_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassInt16Real_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInt16Real_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassInt16Real_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		nullptr,
		&NewStructOps,
		"MassInt16Real",
		sizeof(FMassInt16Real),
		alignof(FMassInt16Real),
		Z_Construct_UScriptStruct_FMassInt16Real_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Real_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Real_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Real_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Real()
	{
		if (!Z_Registration_Info_UScriptStruct_MassInt16Real.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassInt16Real.InnerSingleton, Z_Construct_UScriptStruct_FMassInt16Real_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassInt16Real.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassInt16Real10;
class UScriptStruct* FMassInt16Real10::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassInt16Real10.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassInt16Real10.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassInt16Real10, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassInt16Real10"));
	}
	return Z_Registration_Info_UScriptStruct_MassInt16Real10.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassInt16Real10>()
{
	return FMassInt16Real10::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassInt16Real10_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Real10_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Float encoded in int16, 10cm accuracy. */" },
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
		{ "ToolTip", "Float encoded in int16, 10cm accuracy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassInt16Real10_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassInt16Real10>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Real10_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassInt16Real10_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInt16Real10, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Real10_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Real10_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassInt16Real10_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInt16Real10_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassInt16Real10_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		nullptr,
		&NewStructOps,
		"MassInt16Real10",
		sizeof(FMassInt16Real10),
		alignof(FMassInt16Real10),
		Z_Construct_UScriptStruct_FMassInt16Real10_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Real10_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Real10_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Real10_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Real10()
	{
		if (!Z_Registration_Info_UScriptStruct_MassInt16Real10.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassInt16Real10.InnerSingleton, Z_Construct_UScriptStruct_FMassInt16Real10_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassInt16Real10.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSnorm8Vector;
class UScriptStruct* FMassSnorm8Vector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSnorm8Vector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSnorm8Vector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSnorm8Vector, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassSnorm8Vector"));
	}
	return Z_Registration_Info_UScriptStruct_MassSnorm8Vector.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassSnorm8Vector>()
{
	return FMassSnorm8Vector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector which components are in range [-1..1], encoded in signed bytes. */" },
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
		{ "ToolTip", "Vector which components are in range [-1..1], encoded in signed bytes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSnorm8Vector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSnorm8Vector, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSnorm8Vector, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSnorm8Vector, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		nullptr,
		&NewStructOps,
		"MassSnorm8Vector",
		sizeof(FMassSnorm8Vector),
		alignof(FMassSnorm8Vector),
		Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSnorm8Vector()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSnorm8Vector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSnorm8Vector.InnerSingleton, Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSnorm8Vector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D;
class UScriptStruct* FMassSnorm8Vector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSnorm8Vector2D, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassSnorm8Vector2D"));
	}
	return Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassSnorm8Vector2D>()
{
	return FMassSnorm8Vector2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector2D which components are in range [-1..1], encoded in signed bytes. */" },
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
		{ "ToolTip", "Vector2D which components are in range [-1..1], encoded in signed bytes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSnorm8Vector2D>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSnorm8Vector2D, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSnorm8Vector2D, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_Y_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewProp_Y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		nullptr,
		&NewStructOps,
		"MassSnorm8Vector2D",
		sizeof(FMassSnorm8Vector2D),
		alignof(FMassSnorm8Vector2D),
		Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSnorm8Vector2D()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D.InnerSingleton, Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassUnorm8Real;
class UScriptStruct* FMassUnorm8Real::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassUnorm8Real.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassUnorm8Real.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassUnorm8Real, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassUnorm8Real"));
	}
	return Z_Registration_Info_UScriptStruct_MassUnorm8Real.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassUnorm8Real>()
{
	return FMassUnorm8Real::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassUnorm8Real_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Real in range [0..1], encoded in signed bytes. */" },
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
		{ "ToolTip", "Real in range [0..1], encoded in signed bytes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassUnorm8Real>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassUnorm8Real, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		nullptr,
		&NewStructOps,
		"MassUnorm8Real",
		sizeof(FMassUnorm8Real),
		alignof(FMassUnorm8Real),
		Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassUnorm8Real()
	{
		if (!Z_Registration_Info_UScriptStruct_MassUnorm8Real.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassUnorm8Real.InnerSingleton, Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassUnorm8Real.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassInt16Vector;
class UScriptStruct* FMassInt16Vector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassInt16Vector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassInt16Vector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassInt16Vector, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassInt16Vector"));
	}
	return Z_Registration_Info_UScriptStruct_MassInt16Vector.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassInt16Vector>()
{
	return FMassInt16Vector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassInt16Vector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Vector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector encoded in int16, 1cm accuracy. */" },
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
		{ "ToolTip", "Vector encoded in int16, 1cm accuracy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassInt16Vector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInt16Vector, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInt16Vector, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInt16Vector, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassInt16Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassInt16Vector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		nullptr,
		&NewStructOps,
		"MassInt16Vector",
		sizeof(FMassInt16Vector),
		alignof(FMassInt16Vector),
		Z_Construct_UScriptStruct_FMassInt16Vector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Vector()
	{
		if (!Z_Registration_Info_UScriptStruct_MassInt16Vector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassInt16Vector.InnerSingleton, Z_Construct_UScriptStruct_FMassInt16Vector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassInt16Vector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassInt16Vector2D;
class UScriptStruct* FMassInt16Vector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassInt16Vector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassInt16Vector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassInt16Vector2D, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("MassInt16Vector2D"));
	}
	return Z_Registration_Info_UScriptStruct_MassInt16Vector2D.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FMassInt16Vector2D>()
{
	return FMassInt16Vector2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector2D encoded in int16, 1cm accuracy. */" },
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
		{ "ToolTip", "Vector2D encoded in int16, 1cm accuracy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassInt16Vector2D>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInt16Vector2D, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInt16Vector2D, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_Y_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewProp_Y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		nullptr,
		&NewStructOps,
		"MassInt16Vector2D",
		sizeof(FMassInt16Vector2D),
		alignof(FMassInt16Vector2D),
		Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Vector2D()
	{
		if (!Z_Registration_Info_UScriptStruct_MassInt16Vector2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassInt16Vector2D.InnerSingleton, Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassInt16Vector2D.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassNetworkID::StaticStruct, Z_Construct_UScriptStruct_FMassNetworkID_Statics::NewStructOps, TEXT("MassNetworkID"), &Z_Registration_Info_UScriptStruct_MassNetworkID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassNetworkID), 4144379630U) },
		{ FMassInt16Real::StaticStruct, Z_Construct_UScriptStruct_FMassInt16Real_Statics::NewStructOps, TEXT("MassInt16Real"), &Z_Registration_Info_UScriptStruct_MassInt16Real, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassInt16Real), 272813750U) },
		{ FMassInt16Real10::StaticStruct, Z_Construct_UScriptStruct_FMassInt16Real10_Statics::NewStructOps, TEXT("MassInt16Real10"), &Z_Registration_Info_UScriptStruct_MassInt16Real10, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassInt16Real10), 868040594U) },
		{ FMassSnorm8Vector::StaticStruct, Z_Construct_UScriptStruct_FMassSnorm8Vector_Statics::NewStructOps, TEXT("MassSnorm8Vector"), &Z_Registration_Info_UScriptStruct_MassSnorm8Vector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSnorm8Vector), 3541780626U) },
		{ FMassSnorm8Vector2D::StaticStruct, Z_Construct_UScriptStruct_FMassSnorm8Vector2D_Statics::NewStructOps, TEXT("MassSnorm8Vector2D"), &Z_Registration_Info_UScriptStruct_MassSnorm8Vector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSnorm8Vector2D), 1740145556U) },
		{ FMassUnorm8Real::StaticStruct, Z_Construct_UScriptStruct_FMassUnorm8Real_Statics::NewStructOps, TEXT("MassUnorm8Real"), &Z_Registration_Info_UScriptStruct_MassUnorm8Real, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassUnorm8Real), 1788774672U) },
		{ FMassInt16Vector::StaticStruct, Z_Construct_UScriptStruct_FMassInt16Vector_Statics::NewStructOps, TEXT("MassInt16Vector"), &Z_Registration_Info_UScriptStruct_MassInt16Vector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassInt16Vector), 439688621U) },
		{ FMassInt16Vector2D::StaticStruct, Z_Construct_UScriptStruct_FMassInt16Vector2D_Statics::NewStructOps, TEXT("MassInt16Vector2D"), &Z_Registration_Info_UScriptStruct_MassInt16Vector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassInt16Vector2D), 71367176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonTypes_h_2239131859(TEXT("/Script/MassCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
