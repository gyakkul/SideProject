// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_WorldSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_WorldSpace() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ToWorldSpace_Transform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ToWorldSpace_Transform cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform;
class UScriptStruct* FRigUnit_ToWorldSpace_Transform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ToWorldSpace_Transform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ToWorldSpace_Transform_Execute;
		Arguments_FRigUnit_ToWorldSpace_Transform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_ToWorldSpace_Transform_Execute.Emplace(TEXT("World"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ToWorldSpace_Transform::Execute"), &FRigUnit_ToWorldSpace_Transform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform.OuterSingleton, Arguments_FRigUnit_ToWorldSpace_Transform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ToWorldSpace_Transform>()
{
	return FRigUnit_ToWorldSpace_Transform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Converts a transform from rig (global) space to world space\n */" },
		{ "DisplayName", "To World" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Global,Local,World,Actor,ComponentSpace,FromRig" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "To World" },
		{ "ToolTip", "Converts a transform from rig (global) space to world space" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ToWorldSpace_Transform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The input transform in global / rig space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "ToolTip", "The input transform in global / rig space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToWorldSpace_Transform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The result transform in world space\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "Output", "" },
		{ "ToolTip", "The result transform in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToWorldSpace_Transform, World), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ToWorldSpace_Transform",
		sizeof(FRigUnit_ToWorldSpace_Transform),
		alignof(FRigUnit_ToWorldSpace_Transform),
		Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform.InnerSingleton;
	}

void FRigUnit_ToWorldSpace_Transform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ToWorldSpace_Transform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		World
	);
}


static_assert(std::is_polymorphic<FRigUnit_ToRigSpace_Transform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ToRigSpace_Transform cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform;
class UScriptStruct* FRigUnit_ToRigSpace_Transform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ToRigSpace_Transform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ToRigSpace_Transform_Execute;
		Arguments_FRigUnit_ToRigSpace_Transform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_ToRigSpace_Transform_Execute.Emplace(TEXT("Global"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ToRigSpace_Transform::Execute"), &FRigUnit_ToRigSpace_Transform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform.OuterSingleton, Arguments_FRigUnit_ToRigSpace_Transform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ToRigSpace_Transform>()
{
	return FRigUnit_ToRigSpace_Transform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Converts a transform from world space to rig (global) space\n */" },
		{ "DisplayName", "From World" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Global,Local,World,Actor,ComponentSpace,ToRig" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "From World" },
		{ "ToolTip", "Converts a transform from world space to rig (global) space" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ToRigSpace_Transform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The input transform in world\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "ToolTip", "The input transform in world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToRigSpace_Transform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The result transform in global / rig space\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "Output", "" },
		{ "ToolTip", "The result transform in global / rig space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToRigSpace_Transform, Global), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Global_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewProp_Global,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ToRigSpace_Transform",
		sizeof(FRigUnit_ToRigSpace_Transform),
		alignof(FRigUnit_ToRigSpace_Transform),
		Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform.InnerSingleton;
	}

void FRigUnit_ToRigSpace_Transform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ToRigSpace_Transform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Global
	);
}


static_assert(std::is_polymorphic<FRigUnit_ToWorldSpace_Location>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ToWorldSpace_Location cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location;
class UScriptStruct* FRigUnit_ToWorldSpace_Location::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ToWorldSpace_Location"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ToWorldSpace_Location_Execute;
		Arguments_FRigUnit_ToWorldSpace_Location_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_ToWorldSpace_Location_Execute.Emplace(TEXT("World"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ToWorldSpace_Location::Execute"), &FRigUnit_ToWorldSpace_Location::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location.OuterSingleton, Arguments_FRigUnit_ToWorldSpace_Location_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ToWorldSpace_Location>()
{
	return FRigUnit_ToWorldSpace_Location::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Converts a position / location from rig (global) space to world space\n */" },
		{ "DisplayName", "To World" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Global,Local,World,Actor,ComponentSpace,FromRig" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "To World" },
		{ "ToolTip", "Converts a position / location from rig (global) space to world space" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ToWorldSpace_Location>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The input position / location in global / rig space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "ToolTip", "The input position / location in global / rig space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToWorldSpace_Location, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The result position / location in world space\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "Output", "" },
		{ "ToolTip", "The result position / location in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToWorldSpace_Location, World), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ToWorldSpace_Location",
		sizeof(FRigUnit_ToWorldSpace_Location),
		alignof(FRigUnit_ToWorldSpace_Location),
		Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location.InnerSingleton;
	}

void FRigUnit_ToWorldSpace_Location::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ToWorldSpace_Location::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		World
	);
}


static_assert(std::is_polymorphic<FRigUnit_ToRigSpace_Location>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ToRigSpace_Location cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location;
class UScriptStruct* FRigUnit_ToRigSpace_Location::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ToRigSpace_Location"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ToRigSpace_Location_Execute;
		Arguments_FRigUnit_ToRigSpace_Location_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_ToRigSpace_Location_Execute.Emplace(TEXT("Global"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ToRigSpace_Location::Execute"), &FRigUnit_ToRigSpace_Location::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location.OuterSingleton, Arguments_FRigUnit_ToRigSpace_Location_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ToRigSpace_Location>()
{
	return FRigUnit_ToRigSpace_Location::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Converts a position / location from world space to rig (global) space\n */" },
		{ "DisplayName", "From World" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Global,Local,World,Actor,ComponentSpace,ToRig" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "From World" },
		{ "ToolTip", "Converts a position / location from world space to rig (global) space" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ToRigSpace_Location>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The input position / location in world\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "ToolTip", "The input position / location in world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToRigSpace_Location, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The result position / location in global / rig space\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "Output", "" },
		{ "ToolTip", "The result position / location in global / rig space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToRigSpace_Location, Global), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Global_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewProp_Global,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ToRigSpace_Location",
		sizeof(FRigUnit_ToRigSpace_Location),
		alignof(FRigUnit_ToRigSpace_Location),
		Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location.InnerSingleton;
	}

void FRigUnit_ToRigSpace_Location::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ToRigSpace_Location::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Global
	);
}


static_assert(std::is_polymorphic<FRigUnit_ToWorldSpace_Rotation>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ToWorldSpace_Rotation cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation;
class UScriptStruct* FRigUnit_ToWorldSpace_Rotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ToWorldSpace_Rotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ToWorldSpace_Rotation_Execute;
		Arguments_FRigUnit_ToWorldSpace_Rotation_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigUnit_ToWorldSpace_Rotation_Execute.Emplace(TEXT("World"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ToWorldSpace_Rotation::Execute"), &FRigUnit_ToWorldSpace_Rotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation.OuterSingleton, Arguments_FRigUnit_ToWorldSpace_Rotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ToWorldSpace_Rotation>()
{
	return FRigUnit_ToWorldSpace_Rotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Converts a rotation from rig (global) space to world space\n */" },
		{ "DisplayName", "To World" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Global,Local,World,Actor,ComponentSpace,FromRig" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "To World" },
		{ "ToolTip", "Converts a rotation from rig (global) space to world space" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ToWorldSpace_Rotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The input rotation in global / rig space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "ToolTip", "The input rotation in global / rig space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToWorldSpace_Rotation, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The result rotation in world space\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "Output", "" },
		{ "ToolTip", "The result rotation in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToWorldSpace_Rotation, World), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ToWorldSpace_Rotation",
		sizeof(FRigUnit_ToWorldSpace_Rotation),
		alignof(FRigUnit_ToWorldSpace_Rotation),
		Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation.InnerSingleton;
	}

void FRigUnit_ToWorldSpace_Rotation::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ToWorldSpace_Rotation::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		World
	);
}


static_assert(std::is_polymorphic<FRigUnit_ToRigSpace_Rotation>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ToRigSpace_Rotation cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation;
class UScriptStruct* FRigUnit_ToRigSpace_Rotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ToRigSpace_Rotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ToRigSpace_Rotation_Execute;
		Arguments_FRigUnit_ToRigSpace_Rotation_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigUnit_ToRigSpace_Rotation_Execute.Emplace(TEXT("Global"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ToRigSpace_Rotation::Execute"), &FRigUnit_ToRigSpace_Rotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation.OuterSingleton, Arguments_FRigUnit_ToRigSpace_Rotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ToRigSpace_Rotation>()
{
	return FRigUnit_ToRigSpace_Rotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Converts a rotation from world space to rig (global) space\n */" },
		{ "DisplayName", "From World" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Global,Local,World,Actor,ComponentSpace,ToRig" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "From World" },
		{ "ToolTip", "Converts a rotation from world space to rig (global) space" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ToRigSpace_Rotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The input rotation in world\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "ToolTip", "The input rotation in world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToRigSpace_Rotation, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The result rotation in global / rig space\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_WorldSpace.h" },
		{ "Output", "" },
		{ "ToolTip", "The result rotation in global / rig space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ToRigSpace_Rotation, Global), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Global_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewProp_Global,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ToRigSpace_Rotation",
		sizeof(FRigUnit_ToRigSpace_Rotation),
		alignof(FRigUnit_ToRigSpace_Rotation),
		Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation.InnerSingleton;
	}

void FRigUnit_ToRigSpace_Rotation::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ToRigSpace_Rotation::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Global
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ToWorldSpace_Transform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics::NewStructOps, TEXT("RigUnit_ToWorldSpace_Transform"), &Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Transform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ToWorldSpace_Transform), 1107530772U) },
		{ FRigUnit_ToRigSpace_Transform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::NewStructOps, TEXT("RigUnit_ToRigSpace_Transform"), &Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Transform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ToRigSpace_Transform), 1237370606U) },
		{ FRigUnit_ToWorldSpace_Location::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::NewStructOps, TEXT("RigUnit_ToWorldSpace_Location"), &Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Location, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ToWorldSpace_Location), 1477540005U) },
		{ FRigUnit_ToRigSpace_Location::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::NewStructOps, TEXT("RigUnit_ToRigSpace_Location"), &Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Location, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ToRigSpace_Location), 3336942114U) },
		{ FRigUnit_ToWorldSpace_Rotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::NewStructOps, TEXT("RigUnit_ToWorldSpace_Rotation"), &Z_Registration_Info_UScriptStruct_RigUnit_ToWorldSpace_Rotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ToWorldSpace_Rotation), 1108994403U) },
		{ FRigUnit_ToRigSpace_Rotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics::NewStructOps, TEXT("RigUnit_ToRigSpace_Rotation"), &Z_Registration_Info_UScriptStruct_RigUnit_ToRigSpace_Rotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ToRigSpace_Rotation), 4082087805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_565406363(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
