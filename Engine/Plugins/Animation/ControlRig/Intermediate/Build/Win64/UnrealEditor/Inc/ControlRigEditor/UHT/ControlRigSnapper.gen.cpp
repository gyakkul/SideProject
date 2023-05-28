// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/ControlRigSnapper.h"
#include "ActorForWorldTransforms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSnapper() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigForWorldTransforms();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSnapperSelection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FActorForWorldTransforms();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms;
class UScriptStruct* FControlRigForWorldTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigForWorldTransforms, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigForWorldTransforms"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigForWorldTransforms>()
{
	return FControlRigForWorldTransforms::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Specification containing a Control Rig and a list of selected Controls we use to get World Transforms for Snapping.\n" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapper.h" },
		{ "ToolTip", "Specification containing a Control Rig and a list of selected Controls we use to get World Transforms for Snapping." },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigForWorldTransforms>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlRig_MetaData[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapper.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigForWorldTransforms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlRig_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlNames_Inner = { "ControlNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlNames_MetaData[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlNames = { "ControlNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigForWorldTransforms, ControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewProp_ControlNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigForWorldTransforms",
		sizeof(FControlRigForWorldTransforms),
		alignof(FControlRigForWorldTransforms),
		Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigForWorldTransforms()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms.InnerSingleton, Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection;
class UScriptStruct* FControlRigSnapperSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSnapperSelection, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigSnapperSelection"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigSnapperSelection>()
{
	return FControlRigSnapperSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlRigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Selection from the UI to Snap To. Contains a set of Actors and/or Control Rigs to snap onto or from.\n" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapper.h" },
		{ "ToolTip", "Selection from the UI to Snap To. Contains a set of Actors and/or Control Rigs to snap onto or from." },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSnapperSelection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorForWorldTransforms, METADATA_PARAMS(nullptr, 0) }; // 827878113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigSnapperSelection, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_Actors_MetaData)) }; // 827878113
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_ControlRigs_Inner = { "ControlRigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigForWorldTransforms, METADATA_PARAMS(nullptr, 0) }; // 2011666347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_ControlRigs_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_ControlRigs = { "ControlRigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigSnapperSelection, ControlRigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_ControlRigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_ControlRigs_MetaData)) }; // 2011666347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_ControlRigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewProp_ControlRigs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigSnapperSelection",
		sizeof(FControlRigSnapperSelection),
		alignof(FControlRigSnapperSelection),
		Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSnapperSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapper_h_Statics::ScriptStructInfo[] = {
		{ FControlRigForWorldTransforms::StaticStruct, Z_Construct_UScriptStruct_FControlRigForWorldTransforms_Statics::NewStructOps, TEXT("ControlRigForWorldTransforms"), &Z_Registration_Info_UScriptStruct_ControlRigForWorldTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigForWorldTransforms), 2011666347U) },
		{ FControlRigSnapperSelection::StaticStruct, Z_Construct_UScriptStruct_FControlRigSnapperSelection_Statics::NewStructOps, TEXT("ControlRigSnapperSelection"), &Z_Registration_Info_UScriptStruct_ControlRigSnapperSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSnapperSelection), 821260252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapper_h_2707547570(TEXT("/Script/ControlRigEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
