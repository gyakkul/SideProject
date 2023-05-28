// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Debug/RigVMFunction_DebugLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugLine() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugLine();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_DebugLine>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugLine cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine;
class UScriptStruct* FRigVMFunction_DebugLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugLine"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugLine_Execute;
		Arguments_FRigVMFunction_DebugLine_Execute.Emplace(TEXT("A"), TEXT("FVector"));
		Arguments_FRigVMFunction_DebugLine_Execute.Emplace(TEXT("B"), TEXT("FVector"));
		Arguments_FRigVMFunction_DebugLine_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugLine_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugLine_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugLine_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugLine_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugLine::Execute"), &FRigVMFunction_DebugLine::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine.OuterSingleton, Arguments_FRigVMFunction_DebugLine_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugLine>()
{
	return FRigVMFunction_DebugLine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Line" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugLine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLine, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLine, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLine, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLine, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLine, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLine, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugLine*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugLine), &Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugLine",
		sizeof(FRigVMFunction_DebugLine),
		alignof(FRigVMFunction_DebugLine),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugLine()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine.InnerSingleton;
	}

void FRigVMFunction_DebugLine::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugLine::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Color,
		Thickness,
		Space,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DebugLineNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugLineNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace;
class UScriptStruct* FRigVMFunction_DebugLineNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugLineNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugLineNoSpace_Execute;
		Arguments_FRigVMFunction_DebugLineNoSpace_Execute.Emplace(TEXT("A"), TEXT("FVector"));
		Arguments_FRigVMFunction_DebugLineNoSpace_Execute.Emplace(TEXT("B"), TEXT("FVector"));
		Arguments_FRigVMFunction_DebugLineNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugLineNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugLineNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugLineNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugLineNoSpace::Execute"), &FRigVMFunction_DebugLineNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugLineNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugLineNoSpace>()
{
	return FRigVMFunction_DebugLineNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws a line in the viewport given a start and end vector\n */" },
		{ "DisplayName", "Draw Line" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
		{ "ToolTip", "Draws a line in the viewport given a start and end vector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugLineNoSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLineNoSpace, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLineNoSpace, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLineNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLineNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugLineNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugLine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugLineNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugLineNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugLineNoSpace",
		sizeof(FRigVMFunction_DebugLineNoSpace),
		alignof(FRigVMFunction_DebugLineNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace.InnerSingleton;
	}

void FRigVMFunction_DebugLineNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugLineNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Color,
		Thickness,
		WorldOffset,
		bEnabled
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_DebugLine::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics::NewStructOps, TEXT("RigVMFunction_DebugLine"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugLine), 4058520315U) },
		{ FRigVMFunction_DebugLineNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugLineNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugLineNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugLineNoSpace), 3861236965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_3866621126(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
