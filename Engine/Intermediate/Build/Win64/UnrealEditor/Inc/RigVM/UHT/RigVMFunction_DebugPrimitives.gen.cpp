// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugPrimitives() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArc();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_DebugRectangle>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugRectangle cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle;
class UScriptStruct* FRigVMFunction_DebugRectangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugRectangle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugRectangle_Execute;
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugRectangle::Execute"), &FRigVMFunction_DebugRectangle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton, Arguments_FRigVMFunction_DebugRectangle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugRectangle>()
{
	return FRigVMFunction_DebugRectangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Rectangle" },
		{ "Keywords", "Draw Square" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugRectangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugRectangle*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugRectangle), &Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugRectangle",
		sizeof(FRigVMFunction_DebugRectangle),
		alignof(FRigVMFunction_DebugRectangle),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.InnerSingleton;
	}

void FRigVMFunction_DebugRectangle::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugRectangle::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Scale,
		Thickness,
		Space,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DebugRectangleNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugRectangleNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace;
class UScriptStruct* FRigVMFunction_DebugRectangleNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugRectangleNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute;
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugRectangleNoSpace::Execute"), &FRigVMFunction_DebugRectangleNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugRectangleNoSpace>()
{
	return FRigVMFunction_DebugRectangleNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws a rectangle in the viewport given a transform\n */" },
		{ "DisplayName", "Draw Rectangle" },
		{ "Keywords", "Draw Square" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
		{ "ToolTip", "Draws a rectangle in the viewport given a transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugRectangleNoSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugRectangleNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugRectangleNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugRectangleNoSpace",
		sizeof(FRigVMFunction_DebugRectangleNoSpace),
		alignof(FRigVMFunction_DebugRectangleNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.InnerSingleton;
	}

void FRigVMFunction_DebugRectangleNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugRectangleNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Scale,
		Thickness,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DebugArc>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugArc cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc;
class UScriptStruct* FRigVMFunction_DebugArc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugArc"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugArc_Execute;
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Radius"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("MinimumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("MaximumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugArc::Execute"), &FRigVMFunction_DebugArc::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton, Arguments_FRigVMFunction_DebugArc_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugArc>()
{
	return FRigVMFunction_DebugArc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Arc" },
		{ "Keywords", "Draw Ellipse, Draw Circle" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugArc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MinimumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MinimumDegrees = { "MinimumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, MinimumDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MinimumDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MinimumDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MaximumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MaximumDegrees = { "MaximumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, MaximumDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MaximumDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MaximumDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, Detail), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Detail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArc, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugArc*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugArc), &Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MinimumDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MaximumDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Detail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugArc",
		sizeof(FRigVMFunction_DebugArc),
		alignof(FRigVMFunction_DebugArc),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArc()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.InnerSingleton;
	}

void FRigVMFunction_DebugArc::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugArc::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Radius,
		MinimumDegrees,
		MaximumDegrees,
		Thickness,
		Detail,
		Space,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DebugArcNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugArcNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace;
class UScriptStruct* FRigVMFunction_DebugArcNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugArcNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugArcNoSpace_Execute;
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Radius"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("MinimumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("MaximumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugArcNoSpace::Execute"), &FRigVMFunction_DebugArcNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugArcNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugArcNoSpace>()
{
	return FRigVMFunction_DebugArcNoSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws an arc in the viewport, can take in different min and max degrees\n */" },
		{ "DisplayName", "Draw Arc" },
		{ "Keywords", "Draw Ellipse, Draw Circle" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
		{ "ToolTip", "Draws an arc in the viewport, can take in different min and max degrees" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugArcNoSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MinimumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MinimumDegrees = { "MinimumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, MinimumDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MinimumDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MinimumDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MaximumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MaximumDegrees = { "MaximumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, MaximumDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MaximumDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MaximumDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Detail), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Detail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigVMFunction_DebugArcNoSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DebugArcNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MinimumDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MaximumDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Detail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
		&NewStructOps,
		"RigVMFunction_DebugArcNoSpace",
		sizeof(FRigVMFunction_DebugArcNoSpace),
		alignof(FRigVMFunction_DebugArcNoSpace),
		Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.InnerSingleton;
	}

void FRigVMFunction_DebugArcNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DebugArcNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Radius,
		MinimumDegrees,
		MaximumDegrees,
		Thickness,
		Detail,
		WorldOffset,
		bEnabled
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_DebugRectangle::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewStructOps, TEXT("RigVMFunction_DebugRectangle"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugRectangle), 1374544427U) },
		{ FRigVMFunction_DebugRectangleNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugRectangleNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugRectangleNoSpace), 2573345055U) },
		{ FRigVMFunction_DebugArc::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewStructOps, TEXT("RigVMFunction_DebugArc"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugArc), 3201390226U) },
		{ FRigVMFunction_DebugArcNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugArcNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugArcNoSpace), 3322941195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_678667722(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
