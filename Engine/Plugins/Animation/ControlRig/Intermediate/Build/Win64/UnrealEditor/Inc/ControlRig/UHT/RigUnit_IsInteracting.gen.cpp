// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_IsInteracting.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_IsInteracting() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsInteracting();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_IsInteracting>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_IsInteracting cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting;
class UScriptStruct* FRigUnit_IsInteracting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsInteracting, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_IsInteracting"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_IsInteracting_Execute;
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsInteracting"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsTranslating"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsRotating"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsScaling"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_IsInteracting::Execute"), &FRigUnit_IsInteracting::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton, Arguments_FRigUnit_IsInteracting_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_IsInteracting>()
{
	return FRigUnit_IsInteracting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteracting_MetaData[];
#endif
		static void NewProp_bIsInteracting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteracting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTranslating_MetaData[];
#endif
		static void NewProp_bIsTranslating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTranslating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRotating_MetaData[];
#endif
		static void NewProp_bIsRotating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsScaling_MetaData[];
#endif
		static void NewProp_bIsScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScaling;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Returns true if the Control Rig is being interacted\n */" },
		{ "DisplayName", "Get Interaction" },
		{ "Keywords", "IsInteracting,Gizmo,Manipulation,Interaction,Tracking" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Returns true if the Control Rig is being interacted" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_IsInteracting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if there is currently an interaction happening\n" },
		{ "DisplayName", "Interacting" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if there is currently an interaction happening" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_SetBit(void* Obj)
	{
		((FRigUnit_IsInteracting*)Obj)->bIsInteracting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting = { "bIsInteracting", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if the current interaction is a translation\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the current interaction is a translation" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating_SetBit(void* Obj)
	{
		((FRigUnit_IsInteracting*)Obj)->bIsTranslating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating = { "bIsTranslating", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if the current interaction is a rotation\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the current interaction is a rotation" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating_SetBit(void* Obj)
	{
		((FRigUnit_IsInteracting*)Obj)->bIsRotating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating = { "bIsRotating", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if the current interaction is scaling\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the current interaction is scaling" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling_SetBit(void* Obj)
	{
		((FRigUnit_IsInteracting*)Obj)->bIsScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling = { "bIsScaling", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// The items being interacted on\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "The items being interacted on" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_IsInteracting, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_IsInteracting",
		sizeof(FRigUnit_IsInteracting),
		alignof(FRigUnit_IsInteracting),
		Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsInteracting()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton;
	}

void FRigUnit_IsInteracting::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_IsInteracting::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		bIsInteracting,
		bIsTranslating,
		bIsRotating,
		bIsScaling,
		Items
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_IsInteracting::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewStructOps, TEXT("RigUnit_IsInteracting"), &Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_IsInteracting), 635984153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_3301120444(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
