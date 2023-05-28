// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathRBFInterpolate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERBFKernelType();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERBFQuatDistanceType();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERBFVectorDistanceType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFKernelType;
	static UEnum* ERBFKernelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFKernelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFKernelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERBFKernelType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERBFKernelType"));
		}
		return Z_Registration_Info_UEnum_ERBFKernelType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERBFKernelType>()
	{
		return ERBFKernelType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERBFKernelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::Enumerators[] = {
		{ "ERBFKernelType::Gaussian", (int64)ERBFKernelType::Gaussian },
		{ "ERBFKernelType::Exponential", (int64)ERBFKernelType::Exponential },
		{ "ERBFKernelType::Linear", (int64)ERBFKernelType::Linear },
		{ "ERBFKernelType::Cubic", (int64)ERBFKernelType::Cubic },
		{ "ERBFKernelType::Quintic", (int64)ERBFKernelType::Quintic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Function to use for each target falloff */" },
		{ "Cubic.Name", "ERBFKernelType::Cubic" },
		{ "Exponential.Name", "ERBFKernelType::Exponential" },
		{ "Gaussian.Name", "ERBFKernelType::Gaussian" },
		{ "Linear.Name", "ERBFKernelType::Linear" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Quintic.Name", "ERBFKernelType::Quintic" },
		{ "ToolTip", "Function to use for each target falloff" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERBFKernelType",
		"ERBFKernelType",
		Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERBFKernelType()
	{
		if (!Z_Registration_Info_UEnum_ERBFKernelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFKernelType.InnerSingleton, Z_Construct_UEnum_RigVM_ERBFKernelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFKernelType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFQuatDistanceType;
	static UEnum* ERBFQuatDistanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFQuatDistanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFQuatDistanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERBFQuatDistanceType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERBFQuatDistanceType"));
		}
		return Z_Registration_Info_UEnum_ERBFQuatDistanceType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERBFQuatDistanceType>()
	{
		return ERBFQuatDistanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::Enumerators[] = {
		{ "ERBFQuatDistanceType::Euclidean", (int64)ERBFQuatDistanceType::Euclidean },
		{ "ERBFQuatDistanceType::ArcLength", (int64)ERBFQuatDistanceType::ArcLength },
		{ "ERBFQuatDistanceType::SwingAngle", (int64)ERBFQuatDistanceType::SwingAngle },
		{ "ERBFQuatDistanceType::TwistAngle", (int64)ERBFQuatDistanceType::TwistAngle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::Enum_MetaDataParams[] = {
		{ "ArcLength.Name", "ERBFQuatDistanceType::ArcLength" },
		{ "Comment", "/** Function to use for computing distance between the input and target \n\x09quaternions. */" },
		{ "Euclidean.Name", "ERBFQuatDistanceType::Euclidean" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "SwingAngle.Name", "ERBFQuatDistanceType::SwingAngle" },
		{ "ToolTip", "Function to use for computing distance between the input and target\n      quaternions." },
		{ "TwistAngle.Name", "ERBFQuatDistanceType::TwistAngle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERBFQuatDistanceType",
		"ERBFQuatDistanceType",
		Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERBFQuatDistanceType()
	{
		if (!Z_Registration_Info_UEnum_ERBFQuatDistanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFQuatDistanceType.InnerSingleton, Z_Construct_UEnum_RigVM_ERBFQuatDistanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFQuatDistanceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFVectorDistanceType;
	static UEnum* ERBFVectorDistanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFVectorDistanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFVectorDistanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERBFVectorDistanceType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERBFVectorDistanceType"));
		}
		return Z_Registration_Info_UEnum_ERBFVectorDistanceType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERBFVectorDistanceType>()
	{
		return ERBFVectorDistanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::Enumerators[] = {
		{ "ERBFVectorDistanceType::Euclidean", (int64)ERBFVectorDistanceType::Euclidean },
		{ "ERBFVectorDistanceType::Manhattan", (int64)ERBFVectorDistanceType::Manhattan },
		{ "ERBFVectorDistanceType::ArcLength", (int64)ERBFVectorDistanceType::ArcLength },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::Enum_MetaDataParams[] = {
		{ "ArcLength.Name", "ERBFVectorDistanceType::ArcLength" },
		{ "Comment", "/** Function to use for computing distance between the input and target \n\x09quaternions. */" },
		{ "Euclidean.Name", "ERBFVectorDistanceType::Euclidean" },
		{ "Manhattan.Name", "ERBFVectorDistanceType::Manhattan" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "ToolTip", "Function to use for computing distance between the input and target\n      quaternions." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERBFVectorDistanceType",
		"ERBFVectorDistanceType",
		Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERBFVectorDistanceType()
	{
		if (!Z_Registration_Info_UEnum_ERBFVectorDistanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFVectorDistanceType.InnerSingleton, Z_Construct_UEnum_RigVM_ERBFVectorDistanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFVectorDistanceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateQuatWorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateQuatWorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateQuatWorkData>()
{
	return FRigVMFunction_MathRBFInterpolateQuatWorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateQuatWorkData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateQuatWorkData",
		sizeof(FRigVMFunction_MathRBFInterpolateQuatWorkData),
		alignof(FRigVMFunction_MathRBFInterpolateQuatWorkData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateVectorWorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateVectorWorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateVectorWorkData>()
{
	return FRigVMFunction_MathRBFInterpolateVectorWorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateVectorWorkData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateVectorWorkData",
		sizeof(FRigVMFunction_MathRBFInterpolateVectorWorkData),
		alignof(FRigVMFunction_MathRBFInterpolateVectorWorkData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateBase>()
{
	return FRigVMFunction_MathRBFInterpolateBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|RBF Interpolation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateBase",
		sizeof(FRigVMFunction_MathRBFInterpolateBase),
		alignof(FRigVMFunction_MathRBFInterpolateBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatBase>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateQuatBase cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateQuatBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateQuatBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateQuatBase>()
{
	return FRigVMFunction_MathRBFInterpolateQuatBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeOutput_MetaData[];
#endif
		static void NewProp_bNormalizeOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "Keywords", "RBF,Interpolate,Quaternion" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "TemplateName", "RBF Quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateQuatBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatBase, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction = { "DistanceFunction", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatBase, DistanceFunction), Z_Construct_UEnum_RigVM_ERBFQuatDistanceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_MetaData)) }; // 1768359478
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction = { "SmoothingFunction", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatBase, SmoothingFunction), Z_Construct_UEnum_RigVM_ERBFKernelType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_MetaData)) }; // 740064281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle = { "SmoothingAngle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatBase, SmoothingAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_SetBit(void* Obj)
	{
		((FRigVMFunction_MathRBFInterpolateQuatBase*)Obj)->bNormalizeOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput = { "bNormalizeOutput", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathRBFInterpolateQuatBase), &Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "DistanceFunction == ERBFQuatDistanceType::SwingAngle || DistanceFunction == ERBFQuatDistanceType::TwistAngle" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatBase, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatBase, WorkData), Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData_MetaData)) }; // 1629137948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateQuatBase",
		sizeof(FRigVMFunction_MathRBFInterpolateQuatBase),
		alignof(FRigVMFunction_MathRBFInterpolateQuatBase),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorBase>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateVectorBase cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateVectorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateVectorBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateVectorBase>()
{
	return FRigVMFunction_MathRBFInterpolateVectorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeOutput_MetaData[];
#endif
		static void NewProp_bNormalizeOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "TemplateName", "RBF Vector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateVectorBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorBase, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction = { "DistanceFunction", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorBase, DistanceFunction), Z_Construct_UEnum_RigVM_ERBFVectorDistanceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_MetaData)) }; // 604666061
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction = { "SmoothingFunction", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorBase, SmoothingFunction), Z_Construct_UEnum_RigVM_ERBFKernelType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_MetaData)) }; // 740064281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius = { "SmoothingRadius", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorBase, SmoothingRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_SetBit(void* Obj)
	{
		((FRigVMFunction_MathRBFInterpolateVectorBase*)Obj)->bNormalizeOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput = { "bNormalizeOutput", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathRBFInterpolateVectorBase), &Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorBase, WorkData), Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData_MetaData)) }; // 2711971353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateVectorBase",
		sizeof(FRigVMFunction_MathRBFInterpolateVectorBase),
		alignof(FRigVMFunction_MathRBFInterpolateVectorBase),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target;
class UScriptStruct* FMathRBFInterpolateQuatFloat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateQuatFloat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatFloat_Target>()
{
	return FMathRBFInterpolateQuatFloat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Quat -> T\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "ToolTip", "Quat -> T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatFloat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatFloat_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatFloat_Target, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatFloat_Target",
		sizeof(FMathRBFInterpolateQuatFloat_Target),
		alignof(FMathRBFInterpolateQuatFloat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatFloat>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateQuatFloat cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateQuatFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateQuatFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateQuatFloat_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("Output"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFQuatDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("SmoothingAngle"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateQuatWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateQuatFloat::Execute"), &FRigVMFunction_MathRBFInterpolateQuatFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateQuatFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateQuatFloat>()
{
	return FRigVMFunction_MathRBFInterpolateQuatFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Float" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateQuatFloat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target, METADATA_PARAMS(nullptr, 0) }; // 696355538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatFloat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_MetaData)) }; // 696355538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatFloat, Output), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateQuatFloat",
		sizeof(FRigVMFunction_MathRBFInterpolateQuatFloat),
		alignof(FRigVMFunction_MathRBFInterpolateQuatFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateQuatFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateQuatFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateQuatFloat_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target;
class UScriptStruct* FMathRBFInterpolateQuatVector_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateQuatVector_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatVector_Target>()
{
	return FMathRBFInterpolateQuatVector_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatVector_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatVector_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatVector_Target, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatVector_Target",
		sizeof(FMathRBFInterpolateQuatVector_Target),
		alignof(FMathRBFInterpolateQuatVector_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatVector>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateQuatVector cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateQuatVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateQuatVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateQuatVector_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("Output"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFQuatDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("SmoothingAngle"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateQuatWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateQuatVector::Execute"), &FRigVMFunction_MathRBFInterpolateQuatVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateQuatVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateQuatVector>()
{
	return FRigVMFunction_MathRBFInterpolateQuatVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Vector" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateQuatVector>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target, METADATA_PARAMS(nullptr, 0) }; // 2616585662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatVector, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_MetaData)) }; // 2616585662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatVector, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateQuatVector",
		sizeof(FRigVMFunction_MathRBFInterpolateQuatVector),
		alignof(FRigVMFunction_MathRBFInterpolateQuatVector),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateQuatVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateQuatVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateQuatVector_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target;
class UScriptStruct* FMathRBFInterpolateQuatColor_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateQuatColor_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatColor_Target>()
{
	return FMathRBFInterpolateQuatColor_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatColor_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatColor_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatColor_Target, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatColor_Target",
		sizeof(FMathRBFInterpolateQuatColor_Target),
		alignof(FMathRBFInterpolateQuatColor_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatColor>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateQuatColor cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateQuatColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateQuatColor"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateQuatColor_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("Output"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFQuatDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("SmoothingAngle"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateQuatWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateQuatColor::Execute"), &FRigVMFunction_MathRBFInterpolateQuatColor::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateQuatColor_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateQuatColor>()
{
	return FRigVMFunction_MathRBFInterpolateQuatColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Color" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateQuatColor>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target, METADATA_PARAMS(nullptr, 0) }; // 2648215477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatColor, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_MetaData)) }; // 2648215477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatColor, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateQuatColor",
		sizeof(FRigVMFunction_MathRBFInterpolateQuatColor),
		alignof(FRigVMFunction_MathRBFInterpolateQuatColor),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateQuatColor::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateQuatColor::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateQuatColor_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target;
class UScriptStruct* FMathRBFInterpolateQuatQuat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateQuatQuat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatQuat_Target>()
{
	return FMathRBFInterpolateQuatQuat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatQuat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatQuat_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatQuat_Target, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatQuat_Target",
		sizeof(FMathRBFInterpolateQuatQuat_Target),
		alignof(FMathRBFInterpolateQuatQuat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatQuat>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateQuatQuat cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateQuatQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateQuatQuat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateQuatQuat_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("Output"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFQuatDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("SmoothingAngle"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateQuatWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateQuatQuat::Execute"), &FRigVMFunction_MathRBFInterpolateQuatQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateQuatQuat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateQuatQuat>()
{
	return FRigVMFunction_MathRBFInterpolateQuatQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Quaternion" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateQuatQuat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target, METADATA_PARAMS(nullptr, 0) }; // 1029198361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatQuat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_MetaData)) }; // 1029198361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatQuat, Output), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateQuatQuat",
		sizeof(FRigVMFunction_MathRBFInterpolateQuatQuat),
		alignof(FRigVMFunction_MathRBFInterpolateQuatQuat),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateQuatQuat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateQuatQuat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateQuatQuat_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target;
class UScriptStruct* FMathRBFInterpolateQuatXform_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateQuatXform_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatXform_Target>()
{
	return FMathRBFInterpolateQuatXform_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatXform_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatXform_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateQuatXform_Target, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatXform_Target",
		sizeof(FMathRBFInterpolateQuatXform_Target),
		alignof(FMathRBFInterpolateQuatXform_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatXform>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateQuatBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateQuatXform cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateQuatXform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateQuatXform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateQuatXform_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("Output"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFQuatDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("SmoothingAngle"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateQuatWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateQuatXform::Execute"), &FRigVMFunction_MathRBFInterpolateQuatXform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateQuatXform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateQuatXform>()
{
	return FRigVMFunction_MathRBFInterpolateQuatXform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Transform" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateQuatXform>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target, METADATA_PARAMS(nullptr, 0) }; // 2736222348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatXform, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_MetaData)) }; // 2736222348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateQuatXform, Output), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateQuatXform",
		sizeof(FRigVMFunction_MathRBFInterpolateQuatXform),
		alignof(FRigVMFunction_MathRBFInterpolateQuatXform),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateQuatXform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateQuatXform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateQuatXform_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target;
class UScriptStruct* FMathRBFInterpolateVectorFloat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateVectorFloat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorFloat_Target>()
{
	return FMathRBFInterpolateVectorFloat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Vector->T\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "ToolTip", "Vector->T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorFloat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorFloat_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorFloat_Target, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorFloat_Target",
		sizeof(FMathRBFInterpolateVectorFloat_Target),
		alignof(FMathRBFInterpolateVectorFloat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorFloat>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateVectorFloat cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateVectorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateVectorFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateVectorFloat_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("Output"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("Input"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFVectorDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("SmoothingRadius"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateVectorWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateVectorFloat::Execute"), &FRigVMFunction_MathRBFInterpolateVectorFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateVectorFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateVectorFloat>()
{
	return FRigVMFunction_MathRBFInterpolateVectorFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Float" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateVectorFloat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target, METADATA_PARAMS(nullptr, 0) }; // 4003009124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorFloat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_MetaData)) }; // 4003009124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorFloat, Output), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateVectorFloat",
		sizeof(FRigVMFunction_MathRBFInterpolateVectorFloat),
		alignof(FRigVMFunction_MathRBFInterpolateVectorFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateVectorFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateVectorFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateVectorFloat_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target;
class UScriptStruct* FMathRBFInterpolateVectorVector_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateVectorVector_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorVector_Target>()
{
	return FMathRBFInterpolateVectorVector_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorVector_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorVector_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorVector_Target, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorVector_Target",
		sizeof(FMathRBFInterpolateVectorVector_Target),
		alignof(FMathRBFInterpolateVectorVector_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorVector>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateVectorVector cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateVectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateVectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateVectorVector_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("Output"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("Input"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFVectorDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("SmoothingRadius"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateVectorWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateVectorVector::Execute"), &FRigVMFunction_MathRBFInterpolateVectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateVectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateVectorVector>()
{
	return FRigVMFunction_MathRBFInterpolateVectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Vector" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateVectorVector>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target, METADATA_PARAMS(nullptr, 0) }; // 1056203770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorVector, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_MetaData)) }; // 1056203770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorVector, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateVectorVector",
		sizeof(FRigVMFunction_MathRBFInterpolateVectorVector),
		alignof(FRigVMFunction_MathRBFInterpolateVectorVector),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateVectorVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateVectorVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateVectorVector_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target;
class UScriptStruct* FMathRBFInterpolateVectorColor_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateVectorColor_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorColor_Target>()
{
	return FMathRBFInterpolateVectorColor_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorColor_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorColor_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorColor_Target, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorColor_Target",
		sizeof(FMathRBFInterpolateVectorColor_Target),
		alignof(FMathRBFInterpolateVectorColor_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorColor>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateVectorColor cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateVectorColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateVectorColor"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateVectorColor_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("Output"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("Input"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFVectorDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("SmoothingRadius"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateVectorWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateVectorColor::Execute"), &FRigVMFunction_MathRBFInterpolateVectorColor::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateVectorColor_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateVectorColor>()
{
	return FRigVMFunction_MathRBFInterpolateVectorColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Color" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateVectorColor>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target, METADATA_PARAMS(nullptr, 0) }; // 4207516815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorColor, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_MetaData)) }; // 4207516815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorColor, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateVectorColor",
		sizeof(FRigVMFunction_MathRBFInterpolateVectorColor),
		alignof(FRigVMFunction_MathRBFInterpolateVectorColor),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateVectorColor::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateVectorColor::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateVectorColor_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target;
class UScriptStruct* FMathRBFInterpolateVectorQuat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateVectorQuat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorQuat_Target>()
{
	return FMathRBFInterpolateVectorQuat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorQuat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorQuat_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorQuat_Target, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorQuat_Target",
		sizeof(FMathRBFInterpolateVectorQuat_Target),
		alignof(FMathRBFInterpolateVectorQuat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorQuat>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateVectorQuat cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateVectorQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateVectorQuat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateVectorQuat_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("Output"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("Input"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFVectorDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("SmoothingRadius"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateVectorWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateVectorQuat::Execute"), &FRigVMFunction_MathRBFInterpolateVectorQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateVectorQuat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateVectorQuat>()
{
	return FRigVMFunction_MathRBFInterpolateVectorQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Quat" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateVectorQuat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target, METADATA_PARAMS(nullptr, 0) }; // 3122907791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorQuat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_MetaData)) }; // 3122907791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorQuat, Output), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateVectorQuat",
		sizeof(FRigVMFunction_MathRBFInterpolateVectorQuat),
		alignof(FRigVMFunction_MathRBFInterpolateVectorQuat),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateVectorQuat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateVectorQuat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateVectorQuat_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target;
class UScriptStruct* FMathRBFInterpolateVectorXform_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("MathRBFInterpolateVectorXform_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorXform_Target>()
{
	return FMathRBFInterpolateVectorXform_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorXform_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorXform_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMathRBFInterpolateVectorXform_Target, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorXform_Target",
		sizeof(FMathRBFInterpolateVectorXform_Target),
		alignof(FMathRBFInterpolateVectorXform_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorXform>() == std::is_polymorphic<FRigVMFunction_MathRBFInterpolateVectorBase>(), "USTRUCT FRigVMFunction_MathRBFInterpolateVectorXform cannot be polymorphic unless super FRigVMFunction_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform;
class UScriptStruct* FRigVMFunction_MathRBFInterpolateVectorXform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRBFInterpolateVectorXform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute;
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FMathRBFInterpolateVectorXform_Target>"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("Output"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("Input"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("DistanceFunction"), TEXT("ERBFVectorDistanceType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("SmoothingFunction"), TEXT("ERBFKernelType"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("SmoothingRadius"), TEXT("float"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("bNormalizeOutput"), TEXT("bool"));
		Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_MathRBFInterpolateVectorWorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRBFInterpolateVectorXform::Execute"), &FRigVMFunction_MathRBFInterpolateVectorXform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform.OuterSingleton, Arguments_FRigVMFunction_MathRBFInterpolateVectorXform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRBFInterpolateVectorXform>()
{
	return FRigVMFunction_MathRBFInterpolateVectorXform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Transform" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRBFInterpolateVectorXform>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target, METADATA_PARAMS(nullptr, 0) }; // 3218590489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorXform, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_MetaData)) }; // 3218590489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathRBFInterpolateVectorXform, Output), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigVMFunction_MathRBFInterpolateVectorXform",
		sizeof(FRigVMFunction_MathRBFInterpolateVectorXform),
		alignof(FRigVMFunction_MathRBFInterpolateVectorXform),
		Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform.InnerSingleton;
	}

void FRigVMFunction_MathRBFInterpolateVectorXform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathRBFInterpolateVectorXform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FMathRBFInterpolateVectorXform_Target> Targets_0_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_Statics::EnumInfo[] = {
		{ ERBFKernelType_StaticEnum, TEXT("ERBFKernelType"), &Z_Registration_Info_UEnum_ERBFKernelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 740064281U) },
		{ ERBFQuatDistanceType_StaticEnum, TEXT("ERBFQuatDistanceType"), &Z_Registration_Info_UEnum_ERBFQuatDistanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1768359478U) },
		{ ERBFVectorDistanceType_StaticEnum, TEXT("ERBFVectorDistanceType"), &Z_Registration_Info_UEnum_ERBFVectorDistanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 604666061U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_MathRBFInterpolateQuatWorkData::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateQuatWorkData"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatWorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateQuatWorkData), 1629137948U) },
		{ FRigVMFunction_MathRBFInterpolateVectorWorkData::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateVectorWorkData"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorWorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateVectorWorkData), 2711971353U) },
		{ FRigVMFunction_MathRBFInterpolateBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateBase), 2245727570U) },
		{ FRigVMFunction_MathRBFInterpolateQuatBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateQuatBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateQuatBase), 3859328852U) },
		{ FRigVMFunction_MathRBFInterpolateVectorBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateVectorBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateVectorBase), 3505754028U) },
		{ FMathRBFInterpolateQuatFloat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatFloat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatFloat_Target), 696355538U) },
		{ FRigVMFunction_MathRBFInterpolateQuatFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateQuatFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateQuatFloat), 1635878611U) },
		{ FMathRBFInterpolateQuatVector_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatVector_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatVector_Target), 2616585662U) },
		{ FRigVMFunction_MathRBFInterpolateQuatVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateQuatVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateQuatVector), 2599769980U) },
		{ FMathRBFInterpolateQuatColor_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatColor_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatColor_Target), 2648215477U) },
		{ FRigVMFunction_MathRBFInterpolateQuatColor::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateQuatColor"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateQuatColor), 2138876132U) },
		{ FMathRBFInterpolateQuatQuat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatQuat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatQuat_Target), 1029198361U) },
		{ FRigVMFunction_MathRBFInterpolateQuatQuat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateQuatQuat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateQuatQuat), 3486106080U) },
		{ FMathRBFInterpolateQuatXform_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatXform_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatXform_Target), 2736222348U) },
		{ FRigVMFunction_MathRBFInterpolateQuatXform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateQuatXform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateQuatXform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateQuatXform), 2759099479U) },
		{ FMathRBFInterpolateVectorFloat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorFloat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorFloat_Target), 4003009124U) },
		{ FRigVMFunction_MathRBFInterpolateVectorFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateVectorFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateVectorFloat), 778755595U) },
		{ FMathRBFInterpolateVectorVector_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorVector_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorVector_Target), 1056203770U) },
		{ FRigVMFunction_MathRBFInterpolateVectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateVectorVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateVectorVector), 3207343761U) },
		{ FMathRBFInterpolateVectorColor_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorColor_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorColor_Target), 4207516815U) },
		{ FRigVMFunction_MathRBFInterpolateVectorColor::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateVectorColor"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateVectorColor), 3180949764U) },
		{ FMathRBFInterpolateVectorQuat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorQuat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorQuat_Target), 3122907791U) },
		{ FRigVMFunction_MathRBFInterpolateVectorQuat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateVectorQuat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateVectorQuat), 2955895890U) },
		{ FMathRBFInterpolateVectorXform_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorXform_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorXform_Target), 3218590489U) },
		{ FRigVMFunction_MathRBFInterpolateVectorXform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::NewStructOps, TEXT("RigVMFunction_MathRBFInterpolateVectorXform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRBFInterpolateVectorXform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRBFInterpolateVectorXform), 1709425834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_1860649558(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
