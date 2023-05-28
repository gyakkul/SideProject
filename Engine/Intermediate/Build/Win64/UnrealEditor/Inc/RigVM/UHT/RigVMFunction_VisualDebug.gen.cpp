// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Debug/RigVMFunction_VisualDebug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_VisualDebug() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode;
	static UEnum* ERigUnitVisualDebugPointMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigUnitVisualDebugPointMode"));
		}
		return Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigUnitVisualDebugPointMode>()
	{
		return ERigUnitVisualDebugPointMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enumerators[] = {
		{ "ERigUnitVisualDebugPointMode::Point", (int64)ERigUnitVisualDebugPointMode::Point },
		{ "ERigUnitVisualDebugPointMode::Vector", (int64)ERigUnitVisualDebugPointMode::Vector },
		{ "ERigUnitVisualDebugPointMode::Max", (int64)ERigUnitVisualDebugPointMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams[] = {
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigUnitVisualDebugPointMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Point.Comment", "/** Draw as point */" },
		{ "Point.Name", "ERigUnitVisualDebugPointMode::Point" },
		{ "Point.ToolTip", "Draw as point" },
		{ "Vector.Comment", "/** Draw as vector */" },
		{ "Vector.Name", "ERigUnitVisualDebugPointMode::Vector" },
		{ "Vector.ToolTip", "Draw as vector" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigUnitVisualDebugPointMode",
		"ERigUnitVisualDebugPointMode",
		Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode()
	{
		if (!Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton, Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugVector>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugVector cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector;
class UScriptStruct* FRigVMFunction_VisualDebugVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugVector_Execute;
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitVisualDebugPointMode"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugVector::Execute"), &FRigVMFunction_VisualDebugVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton, Arguments_FRigVMFunction_VisualDebugVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugVector>()
{
	return FRigVMFunction_VisualDebugVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_VisualDebugVector*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_VisualDebugVector), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Mode), Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode_MetaData)) }; // 3118637677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, BoneSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_BoneSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_BoneSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_BoneSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigVMFunction_VisualDebugVector",
		sizeof(FRigVMFunction_VisualDebugVector),
		alignof(FRigVMFunction_VisualDebugVector),
		Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.InnerSingleton;
	}

void FRigVMFunction_VisualDebugVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_VisualDebugVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Mode,
		Color,
		Thickness,
		Scale,
		BoneSpace
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugVectorNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugVectorNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace;
class UScriptStruct* FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugVectorNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute;
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitVisualDebugPointMode"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugVectorNoSpace::Execute"), &FRigVMFunction_VisualDebugVectorNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton, Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugVectorNoSpace>()
{
	return FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Debug draw parameters for a Point or Vector given a vector\n */" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for a Point or Vector given a vector" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugVectorNoSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_VisualDebugVectorNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_VisualDebugVectorNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Mode), Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode_MetaData)) }; // 3118637677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigVMFunction_VisualDebugVectorNoSpace",
		sizeof(FRigVMFunction_VisualDebugVectorNoSpace),
		alignof(FRigVMFunction_VisualDebugVectorNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.InnerSingleton;
	}

void FRigVMFunction_VisualDebugVectorNoSpace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_VisualDebugVectorNoSpace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Mode,
		Color,
		Thickness,
		Scale
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugQuat>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugQuat cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat;
class UScriptStruct* FRigVMFunction_VisualDebugQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugQuat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugQuat_Execute;
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugQuat::Execute"), &FRigVMFunction_VisualDebugQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton, Arguments_FRigVMFunction_VisualDebugQuat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugQuat>()
{
	return FRigVMFunction_VisualDebugQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugQuat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_VisualDebugQuat*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_VisualDebugQuat), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, BoneSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_BoneSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_BoneSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_BoneSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigVMFunction_VisualDebugQuat",
		sizeof(FRigVMFunction_VisualDebugQuat),
		alignof(FRigVMFunction_VisualDebugQuat),
		Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.InnerSingleton;
	}

void FRigVMFunction_VisualDebugQuat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_VisualDebugQuat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		BoneSpace
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugQuatNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugQuatNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace;
class UScriptStruct* FRigVMFunction_VisualDebugQuatNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugQuatNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute;
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugQuatNoSpace::Execute"), &FRigVMFunction_VisualDebugQuatNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton, Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugQuatNoSpace>()
{
	return FRigVMFunction_VisualDebugQuatNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a quaternion\n */" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for an Axis given a quaternion" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugQuatNoSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuatNoSpace, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_VisualDebugQuatNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_VisualDebugQuatNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuatNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuatNoSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigVMFunction_VisualDebugQuatNoSpace",
		sizeof(FRigVMFunction_VisualDebugQuatNoSpace),
		alignof(FRigVMFunction_VisualDebugQuatNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.InnerSingleton;
	}

void FRigVMFunction_VisualDebugQuatNoSpace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_VisualDebugQuatNoSpace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugTransform>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugTransform cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform;
class UScriptStruct* FRigVMFunction_VisualDebugTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugTransform_Execute;
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugTransform::Execute"), &FRigVMFunction_VisualDebugTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton, Arguments_FRigVMFunction_VisualDebugTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugTransform>()
{
	return FRigVMFunction_VisualDebugTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_VisualDebugTransform*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_VisualDebugTransform), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, BoneSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_BoneSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_BoneSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_BoneSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigVMFunction_VisualDebugTransform",
		sizeof(FRigVMFunction_VisualDebugTransform),
		alignof(FRigVMFunction_VisualDebugTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.InnerSingleton;
	}

void FRigVMFunction_VisualDebugTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_VisualDebugTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		BoneSpace
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugTransformNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugTransformNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace;
class UScriptStruct* FRigVMFunction_VisualDebugTransformNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugTransformNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute;
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugTransformNoSpace::Execute"), &FRigVMFunction_VisualDebugTransformNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton, Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugTransformNoSpace>()
{
	return FRigVMFunction_VisualDebugTransformNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a transform\n */" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for an Axis given a transform" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugTransformNoSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransformNoSpace, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_VisualDebugTransformNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_VisualDebugTransformNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransformNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransformNoSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigVMFunction_VisualDebugTransformNoSpace",
		sizeof(FRigVMFunction_VisualDebugTransformNoSpace),
		alignof(FRigVMFunction_VisualDebugTransformNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.InnerSingleton;
	}

void FRigVMFunction_VisualDebugTransformNoSpace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_VisualDebugTransformNoSpace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::EnumInfo[] = {
		{ ERigUnitVisualDebugPointMode_StaticEnum, TEXT("ERigUnitVisualDebugPointMode"), &Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3118637677U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_VisualDebugVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugVector), 275720427U) },
		{ FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugVectorNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugVectorNoSpace), 2012851215U) },
		{ FRigVMFunction_VisualDebugQuat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugQuat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugQuat), 1078018029U) },
		{ FRigVMFunction_VisualDebugQuatNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugQuatNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugQuatNoSpace), 1997733320U) },
		{ FRigVMFunction_VisualDebugTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugTransform), 3672661160U) },
		{ FRigVMFunction_VisualDebugTransformNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugTransformNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugTransformNoSpace), 3269090020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_4037804468(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
