// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMathLibrary() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMirrorSettings();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMAnimEasingType;
	static UEnum* ERigVMAnimEasingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMAnimEasingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMAnimEasingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMAnimEasingType"));
		}
		return Z_Registration_Info_UEnum_ERigVMAnimEasingType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMAnimEasingType>()
	{
		return ERigVMAnimEasingType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enumerators[] = {
		{ "ERigVMAnimEasingType::Linear", (int64)ERigVMAnimEasingType::Linear },
		{ "ERigVMAnimEasingType::QuadraticEaseIn", (int64)ERigVMAnimEasingType::QuadraticEaseIn },
		{ "ERigVMAnimEasingType::QuadraticEaseOut", (int64)ERigVMAnimEasingType::QuadraticEaseOut },
		{ "ERigVMAnimEasingType::QuadraticEaseInOut", (int64)ERigVMAnimEasingType::QuadraticEaseInOut },
		{ "ERigVMAnimEasingType::CubicEaseIn", (int64)ERigVMAnimEasingType::CubicEaseIn },
		{ "ERigVMAnimEasingType::CubicEaseOut", (int64)ERigVMAnimEasingType::CubicEaseOut },
		{ "ERigVMAnimEasingType::CubicEaseInOut", (int64)ERigVMAnimEasingType::CubicEaseInOut },
		{ "ERigVMAnimEasingType::QuarticEaseIn", (int64)ERigVMAnimEasingType::QuarticEaseIn },
		{ "ERigVMAnimEasingType::QuarticEaseOut", (int64)ERigVMAnimEasingType::QuarticEaseOut },
		{ "ERigVMAnimEasingType::QuarticEaseInOut", (int64)ERigVMAnimEasingType::QuarticEaseInOut },
		{ "ERigVMAnimEasingType::QuinticEaseIn", (int64)ERigVMAnimEasingType::QuinticEaseIn },
		{ "ERigVMAnimEasingType::QuinticEaseOut", (int64)ERigVMAnimEasingType::QuinticEaseOut },
		{ "ERigVMAnimEasingType::QuinticEaseInOut", (int64)ERigVMAnimEasingType::QuinticEaseInOut },
		{ "ERigVMAnimEasingType::SineEaseIn", (int64)ERigVMAnimEasingType::SineEaseIn },
		{ "ERigVMAnimEasingType::SineEaseOut", (int64)ERigVMAnimEasingType::SineEaseOut },
		{ "ERigVMAnimEasingType::SineEaseInOut", (int64)ERigVMAnimEasingType::SineEaseInOut },
		{ "ERigVMAnimEasingType::CircularEaseIn", (int64)ERigVMAnimEasingType::CircularEaseIn },
		{ "ERigVMAnimEasingType::CircularEaseOut", (int64)ERigVMAnimEasingType::CircularEaseOut },
		{ "ERigVMAnimEasingType::CircularEaseInOut", (int64)ERigVMAnimEasingType::CircularEaseInOut },
		{ "ERigVMAnimEasingType::ExponentialEaseIn", (int64)ERigVMAnimEasingType::ExponentialEaseIn },
		{ "ERigVMAnimEasingType::ExponentialEaseOut", (int64)ERigVMAnimEasingType::ExponentialEaseOut },
		{ "ERigVMAnimEasingType::ExponentialEaseInOut", (int64)ERigVMAnimEasingType::ExponentialEaseInOut },
		{ "ERigVMAnimEasingType::ElasticEaseIn", (int64)ERigVMAnimEasingType::ElasticEaseIn },
		{ "ERigVMAnimEasingType::ElasticEaseOut", (int64)ERigVMAnimEasingType::ElasticEaseOut },
		{ "ERigVMAnimEasingType::ElasticEaseInOut", (int64)ERigVMAnimEasingType::ElasticEaseInOut },
		{ "ERigVMAnimEasingType::BackEaseIn", (int64)ERigVMAnimEasingType::BackEaseIn },
		{ "ERigVMAnimEasingType::BackEaseOut", (int64)ERigVMAnimEasingType::BackEaseOut },
		{ "ERigVMAnimEasingType::BackEaseInOut", (int64)ERigVMAnimEasingType::BackEaseInOut },
		{ "ERigVMAnimEasingType::BounceEaseIn", (int64)ERigVMAnimEasingType::BounceEaseIn },
		{ "ERigVMAnimEasingType::BounceEaseOut", (int64)ERigVMAnimEasingType::BounceEaseOut },
		{ "ERigVMAnimEasingType::BounceEaseInOut", (int64)ERigVMAnimEasingType::BounceEaseInOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enum_MetaDataParams[] = {
		{ "BackEaseIn.Name", "ERigVMAnimEasingType::BackEaseIn" },
		{ "BackEaseInOut.Name", "ERigVMAnimEasingType::BackEaseInOut" },
		{ "BackEaseOut.Name", "ERigVMAnimEasingType::BackEaseOut" },
		{ "BounceEaseIn.Name", "ERigVMAnimEasingType::BounceEaseIn" },
		{ "BounceEaseInOut.Name", "ERigVMAnimEasingType::BounceEaseInOut" },
		{ "BounceEaseOut.Name", "ERigVMAnimEasingType::BounceEaseOut" },
		{ "CircularEaseIn.Name", "ERigVMAnimEasingType::CircularEaseIn" },
		{ "CircularEaseInOut.Name", "ERigVMAnimEasingType::CircularEaseInOut" },
		{ "CircularEaseOut.Name", "ERigVMAnimEasingType::CircularEaseOut" },
		{ "CubicEaseIn.Name", "ERigVMAnimEasingType::CubicEaseIn" },
		{ "CubicEaseInOut.Name", "ERigVMAnimEasingType::CubicEaseInOut" },
		{ "CubicEaseOut.Name", "ERigVMAnimEasingType::CubicEaseOut" },
		{ "ElasticEaseIn.Name", "ERigVMAnimEasingType::ElasticEaseIn" },
		{ "ElasticEaseInOut.Name", "ERigVMAnimEasingType::ElasticEaseInOut" },
		{ "ElasticEaseOut.Name", "ERigVMAnimEasingType::ElasticEaseOut" },
		{ "ExponentialEaseIn.Name", "ERigVMAnimEasingType::ExponentialEaseIn" },
		{ "ExponentialEaseInOut.Name", "ERigVMAnimEasingType::ExponentialEaseInOut" },
		{ "ExponentialEaseOut.Name", "ERigVMAnimEasingType::ExponentialEaseOut" },
		{ "Linear.Name", "ERigVMAnimEasingType::Linear" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "QuadraticEaseIn.Name", "ERigVMAnimEasingType::QuadraticEaseIn" },
		{ "QuadraticEaseInOut.Name", "ERigVMAnimEasingType::QuadraticEaseInOut" },
		{ "QuadraticEaseOut.Name", "ERigVMAnimEasingType::QuadraticEaseOut" },
		{ "QuarticEaseIn.Name", "ERigVMAnimEasingType::QuarticEaseIn" },
		{ "QuarticEaseInOut.Name", "ERigVMAnimEasingType::QuarticEaseInOut" },
		{ "QuarticEaseOut.Name", "ERigVMAnimEasingType::QuarticEaseOut" },
		{ "QuinticEaseIn.Name", "ERigVMAnimEasingType::QuinticEaseIn" },
		{ "QuinticEaseInOut.Name", "ERigVMAnimEasingType::QuinticEaseInOut" },
		{ "QuinticEaseOut.Name", "ERigVMAnimEasingType::QuinticEaseOut" },
		{ "SineEaseIn.Name", "ERigVMAnimEasingType::SineEaseIn" },
		{ "SineEaseInOut.Name", "ERigVMAnimEasingType::SineEaseInOut" },
		{ "SineEaseOut.Name", "ERigVMAnimEasingType::SineEaseOut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMAnimEasingType",
		"ERigVMAnimEasingType",
		Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMAnimEasingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMAnimEasingType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMAnimEasingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFourPointBezier;
class UScriptStruct* FRigVMFourPointBezier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFourPointBezier, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFourPointBezier"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFourPointBezier>()
{
	return FRigVMFourPointBezier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFourPointBezier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFourPointBezier, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFourPointBezier, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_C_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFourPointBezier, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_D_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFourPointBezier, D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_D,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMFourPointBezier",
		sizeof(FRigVMFourPointBezier),
		alignof(FRigVMFourPointBezier),
		Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMMirrorSettings;
class UScriptStruct* FRigVMMirrorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMirrorSettings, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMMirrorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMMirrorSettings>()
{
	return FRigVMMirrorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToFlip_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToFlip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplaceString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMMirrorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the axis to mirror against\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the axis to mirror against" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMirrorSettings, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_MirrorAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_AxisToFlip_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the axis to flip for rotations\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the axis to flip for rotations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_AxisToFlip = { "AxisToFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMirrorSettings, AxisToFlip), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_AxisToFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_AxisToFlip_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_SearchString_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the string to search for\n" },
		{ "DisplayName", "Search" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the string to search for" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_SearchString = { "SearchString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMirrorSettings, SearchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_SearchString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_SearchString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_ReplaceString_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the string to replace the search occurrences with\n" },
		{ "DisplayName", "Replace" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the string to replace the search occurrences with" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_ReplaceString = { "ReplaceString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMirrorSettings, ReplaceString), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_ReplaceString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_ReplaceString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_MirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_AxisToFlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_SearchString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_ReplaceString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMMirrorSettings",
		sizeof(FRigVMMirrorSettings),
		alignof(FRigVMMirrorSettings),
		Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMMirrorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType;
	static UEnum* ERigVMSimPointIntegrateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMSimPointIntegrateType"));
		}
		return Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMSimPointIntegrateType>()
	{
		return ERigVMSimPointIntegrateType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enumerators[] = {
		{ "ERigVMSimPointIntegrateType::Verlet", (int64)ERigVMSimPointIntegrateType::Verlet },
		{ "ERigVMSimPointIntegrateType::SemiExplicitEuler", (int64)ERigVMSimPointIntegrateType::SemiExplicitEuler },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "SemiExplicitEuler.Name", "ERigVMSimPointIntegrateType::SemiExplicitEuler" },
		{ "Verlet.Name", "ERigVMSimPointIntegrateType::Verlet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMSimPointIntegrateType",
		"ERigVMSimPointIntegrateType",
		Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMSimPoint;
class UScriptStruct* FRigVMSimPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMSimPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMSimPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSimPoint, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMSimPoint"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMSimPoint.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMSimPoint>()
{
	return FRigVMSimPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMSimPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritMotion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMSimPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The mass of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The mass of the point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMSimPoint, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * Size of the point - only used for collision\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "Size of the point - only used for collision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMSimPoint, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The linear damping of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The linear damping of the point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMSimPoint, LinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_InheritMotion_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * Defines how much the point will inherit motion from its input.\n\x09 * This does not have an effect on passive (mass == 0.0) points.\n\x09 * Values can be higher than 1 due to timestep - but they are clamped internally.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "Defines how much the point will inherit motion from its input.\nThis does not have an effect on passive (mass == 0.0) points.\nValues can be higher than 1 due to timestep - but they are clamped internally." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_InheritMotion = { "InheritMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMSimPoint, InheritMotion), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_InheritMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_InheritMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The position of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The position of the point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMSimPoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The velocity of the point per second\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The velocity of the point per second" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMSimPoint, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_InheritMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMSimPoint",
		sizeof(FRigVMSimPoint),
		alignof(FRigVMSimPoint),
		Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMSimPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMSimPoint.InnerSingleton, Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMSimPoint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::EnumInfo[] = {
		{ ERigVMAnimEasingType_StaticEnum, TEXT("ERigVMAnimEasingType"), &Z_Registration_Info_UEnum_ERigVMAnimEasingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3365060979U) },
		{ ERigVMSimPointIntegrateType_StaticEnum, TEXT("ERigVMSimPointIntegrateType"), &Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 853092892U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFourPointBezier::StaticStruct, Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewStructOps, TEXT("RigVMFourPointBezier"), &Z_Registration_Info_UScriptStruct_RigVMFourPointBezier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFourPointBezier), 2203843897U) },
		{ FRigVMMirrorSettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewStructOps, TEXT("RigVMMirrorSettings"), &Z_Registration_Info_UScriptStruct_RigVMMirrorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMMirrorSettings), 2204246285U) },
		{ FRigVMSimPoint::StaticStruct, Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewStructOps, TEXT("RigVMSimPoint"), &Z_Registration_Info_UScriptStruct_RigVMSimPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMSimPoint), 4039935554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_806928650(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
