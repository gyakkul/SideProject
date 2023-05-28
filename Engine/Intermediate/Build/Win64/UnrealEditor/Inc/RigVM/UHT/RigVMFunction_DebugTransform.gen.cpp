// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Debug/RigVMFunction_DebugTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugTransform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigUnitDebugTransformMode;
	static UEnum* ERigUnitDebugTransformMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigUnitDebugTransformMode"));
		}
		return Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigUnitDebugTransformMode>()
	{
		return ERigUnitDebugTransformMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enumerators[] = {
		{ "ERigUnitDebugTransformMode::Point", (int64)ERigUnitDebugTransformMode::Point },
		{ "ERigUnitDebugTransformMode::Axes", (int64)ERigUnitDebugTransformMode::Axes },
		{ "ERigUnitDebugTransformMode::Box", (int64)ERigUnitDebugTransformMode::Box },
		{ "ERigUnitDebugTransformMode::Max", (int64)ERigUnitDebugTransformMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enum_MetaDataParams[] = {
		{ "Axes.Comment", "/** Draw as axes */" },
		{ "Axes.Name", "ERigUnitDebugTransformMode::Axes" },
		{ "Axes.ToolTip", "Draw as axes" },
		{ "Box.Comment", "/** Draw as box */" },
		{ "Box.Name", "ERigUnitDebugTransformMode::Box" },
		{ "Box.ToolTip", "Draw as box" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigUnitDebugTransformMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
		{ "Point.Comment", "/** Draw as point */" },
		{ "Point.Name", "ERigUnitDebugTransformMode::Point" },
		{ "Point.ToolTip", "Draw as point" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigUnitDebugTransformMode",
		"ERigUnitDebugTransformMode",
		Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode()
	{
		if (!Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.InnerSingleton, Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_DebugTransform>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_DebugTransform cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform;
class UScriptStruct* FRigVMFunction_DebugTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugTransform_Execute;
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitDebugTransformMode"));
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransform_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugTransform::Execute"), &FRigVMFunction_DebugTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform.OuterSingleton, Arguments_FRigVMFunction_DebugTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransform>()
{
	return FRigVMFunction_DebugTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "4.25.0" },
		{ "DisplayName", "Draw Transform In Place" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransform, Mode), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Mode_MetaData)) }; // 3514821841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransform, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransform, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransform, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransform, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransform, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugTransform*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugTransform), &Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigVMFunction_DebugTransform",
		sizeof(FRigVMFunction_DebugTransform),
		alignof(FRigVMFunction_DebugTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform.InnerSingleton;
	}

void FRigVMFunction_DebugTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Mode,
		Color,
		Thickness,
		Scale,
		Space,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DebugTransformMutable>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugTransformMutable cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable;
class UScriptStruct* FRigVMFunction_DebugTransformMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformMutable"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugTransformMutable_Execute;
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitDebugTransformMode"));
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformMutable_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugTransformMutable::Execute"), &FRigVMFunction_DebugTransformMutable::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable.OuterSingleton, Arguments_FRigVMFunction_DebugTransformMutable_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformMutable>()
{
	return FRigVMFunction_DebugTransformMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Transform" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformMutable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutable, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutable, Mode), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Mode_MetaData)) }; // 3514821841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutable, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutable, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutable, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutable, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutable, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugTransformMutable*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugTransformMutable), &Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugTransformMutable",
		sizeof(FRigVMFunction_DebugTransformMutable),
		alignof(FRigVMFunction_DebugTransformMutable),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable.InnerSingleton;
	}

void FRigVMFunction_DebugTransformMutable::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugTransformMutable::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Mode,
		Color,
		Thickness,
		Scale,
		Space,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DebugTransformMutableNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugTransformMutableNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace;
class UScriptStruct* FRigVMFunction_DebugTransformMutableNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformMutableNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute;
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitDebugTransformMode"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugTransformMutableNoSpace::Execute"), &FRigVMFunction_DebugTransformMutableNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformMutableNoSpace>()
{
	return FRigVMFunction_DebugTransformMutableNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Given a transform, will draw a point, axis, or a box in the viewport\n */" },
		{ "DisplayName", "Draw Transform" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
		{ "ToolTip", "Given a transform, will draw a point, axis, or a box in the viewport" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformMutableNoSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Mode), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode_MetaData)) }; // 3514821841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugTransformMutableNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugTransformMutableNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugTransformMutableNoSpace",
		sizeof(FRigVMFunction_DebugTransformMutableNoSpace),
		alignof(FRigVMFunction_DebugTransformMutableNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.InnerSingleton;
	}

void FRigVMFunction_DebugTransformMutableNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugTransformMutableNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Mode,
		Color,
		Thickness,
		Scale,
		WorldOffset,
		bEnabled
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData;
class UScriptStruct* FRigVMFunction_DebugTransformArrayMutable_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformArrayMutable_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformArrayMutable_WorkData>()
{
	return FRigVMFunction_DebugTransformArrayMutable_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DrawTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformArrayMutable_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms_Inner = { "DrawTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms = { "DrawTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable_WorkData, DrawTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMFunction_DebugTransformArrayMutable_WorkData",
		sizeof(FRigVMFunction_DebugTransformArrayMutable_WorkData),
		alignof(FRigVMFunction_DebugTransformArrayMutable_WorkData),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_DebugTransformArrayMutable>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugTransformArrayMutable cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable;
class UScriptStruct* FRigVMFunction_DebugTransformArrayMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformArrayMutable"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute;
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitDebugTransformMode"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute.Emplace(TEXT("WorkData"), TEXT("FRigVMFunction_DebugTransformArrayMutable_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugTransformArrayMutable::Execute"), &FRigVMFunction_DebugTransformArrayMutable::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable.OuterSingleton, Arguments_FRigVMFunction_DebugTransformArrayMutable_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformArrayMutable>()
{
	return FRigVMFunction_DebugTransformArrayMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25.0" },
		{ "DisplayName", "Draw Transform Array" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformArrayMutable>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, Mode), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Mode_MetaData)) }; // 3514821841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugTransformArrayMutable*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugTransformArrayMutable), &Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable, WorkData), Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorkData_MetaData)) }; // 463858921
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugTransformArrayMutable",
		sizeof(FRigVMFunction_DebugTransformArrayMutable),
		alignof(FRigVMFunction_DebugTransformArrayMutable),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable.InnerSingleton;
	}

void FRigVMFunction_DebugTransformArrayMutable::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugTransformArrayMutable::Execute(FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FTransform> Transforms_0_Array(Transforms);
	
	StaticExecute(
		InExecuteContext,
		Transforms_0_Array,
		Mode,
		Color,
		Thickness,
		Scale,
		Space,
		WorldOffset,
		bEnabled,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DebugTransformArrayMutableNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugTransformArrayMutableNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace;
class UScriptStruct* FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformArrayMutableNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute;
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("ParentIndices"), TEXT("TArray<int32>"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitDebugTransformMode"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute"), &FRigVMFunction_DebugTransformArrayMutableNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformArrayMutableNoSpace>()
{
	return FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Given a transform array, will draw a point, axis, or a box in the viewport\n*/" },
		{ "DisplayName", "Draw Transform Array" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
		{ "ToolTip", "Given a transform array, will draw a point, axis, or a box in the viewport" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformArrayMutableNoSpace>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Mode), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode_MetaData)) }; // 3514821841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugTransformArrayMutableNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugTransformArrayMutableNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugTransformArrayMutableNoSpace",
		sizeof(FRigVMFunction_DebugTransformArrayMutableNoSpace),
		alignof(FRigVMFunction_DebugTransformArrayMutableNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.InnerSingleton;
	}

void FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FTransform> Transforms_0_Array(Transforms);
	TArrayView<const int32> ParentIndices_1_Array(ParentIndices);
	
	StaticExecute(
		InExecuteContext,
		Transforms_0_Array,
		ParentIndices_1_Array,
		Mode,
		Color,
		Thickness,
		Scale,
		WorldOffset,
		bEnabled
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::EnumInfo[] = {
		{ ERigUnitDebugTransformMode_StaticEnum, TEXT("ERigUnitDebugTransformMode"), &Z_Registration_Info_UEnum_ERigUnitDebugTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3514821841U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_DebugTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransform), 88897041U) },
		{ FRigVMFunction_DebugTransformMutable::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformMutable"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformMutable), 2107821920U) },
		{ FRigVMFunction_DebugTransformMutableNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformMutableNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformMutableNoSpace), 2076478798U) },
		{ FRigVMFunction_DebugTransformArrayMutable_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformArrayMutable_WorkData"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformArrayMutable_WorkData), 463858921U) },
		{ FRigVMFunction_DebugTransformArrayMutable::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformArrayMutable"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformArrayMutable), 3149831644U) },
		{ FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformArrayMutableNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformArrayMutableNoSpace), 2634452525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_83826835(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
