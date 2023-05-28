// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMeshReshapeCommon() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReshapeBoneReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneDeformSelectionMethod;
	static UEnum* EBoneDeformSelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneDeformSelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneDeformSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("EBoneDeformSelectionMethod"));
		}
		return Z_Registration_Info_UEnum_EBoneDeformSelectionMethod.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EBoneDeformSelectionMethod>()
	{
		return EBoneDeformSelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::Enumerators[] = {
		{ "EBoneDeformSelectionMethod::ONLY_SELECTED", (int64)EBoneDeformSelectionMethod::ONLY_SELECTED },
		{ "EBoneDeformSelectionMethod::ALL_BUT_SELECTED", (int64)EBoneDeformSelectionMethod::ALL_BUT_SELECTED },
		{ "EBoneDeformSelectionMethod::DEFORM_REF_SKELETON", (int64)EBoneDeformSelectionMethod::DEFORM_REF_SKELETON },
		{ "EBoneDeformSelectionMethod::DEFORM_NONE_REF_SKELETON", (int64)EBoneDeformSelectionMethod::DEFORM_NONE_REF_SKELETON },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "ALL_BUT_SELECTED.Comment", "// All bones will be deform except the selected ones\n" },
		{ "ALL_BUT_SELECTED.DisplayName", "All But Selected" },
		{ "ALL_BUT_SELECTED.Name", "EBoneDeformSelectionMethod::ALL_BUT_SELECTED" },
		{ "ALL_BUT_SELECTED.ToolTip", "All bones will be deform except the selected ones" },
		{ "DEFORM_NONE_REF_SKELETON.Comment", "// Deform only the bones that are not in the reference skeleton\n" },
		{ "DEFORM_NONE_REF_SKELETON.DisplayName", "Deform All But not Ref.Skeleton Bones" },
		{ "DEFORM_NONE_REF_SKELETON.Name", "EBoneDeformSelectionMethod::DEFORM_NONE_REF_SKELETON" },
		{ "DEFORM_NONE_REF_SKELETON.ToolTip", "Deform only the bones that are not in the reference skeleton" },
		{ "DEFORM_REF_SKELETON.Comment", "// Deform only the bones of the reference skeleton\n" },
		{ "DEFORM_REF_SKELETON.DisplayName", "Deform Only Ref.Seleton Bones" },
		{ "DEFORM_REF_SKELETON.Name", "EBoneDeformSelectionMethod::DEFORM_REF_SKELETON" },
		{ "DEFORM_REF_SKELETON.ToolTip", "Deform only the bones of the reference skeleton" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h" },
		{ "ONLY_SELECTED.Comment", "// Only selected bones will be deform\n" },
		{ "ONLY_SELECTED.DisplayName", "Only Selected" },
		{ "ONLY_SELECTED.Name", "EBoneDeformSelectionMethod::ONLY_SELECTED" },
		{ "ONLY_SELECTED.ToolTip", "Only selected bones will be deform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"EBoneDeformSelectionMethod",
		"EBoneDeformSelectionMethod",
		Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_EBoneDeformSelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneDeformSelectionMethod.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneDeformSelectionMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference;
class UScriptStruct* FMeshReshapeBoneReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReshapeBoneReference, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("MeshReshapeBoneReference"));
	}
	return Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FMeshReshapeBoneReference>()
{
	return FMeshReshapeBoneReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReshapeBoneReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Name of the bone that will be deformed */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h" },
		{ "ToolTip", "Name of the bone that will be deformed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReshapeBoneReference, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::NewProp_BoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"MeshReshapeBoneReference",
		sizeof(FMeshReshapeBoneReference),
		alignof(FMeshReshapeBoneReference),
		Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshReshapeBoneReference()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference.InnerSingleton, Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_Statics::EnumInfo[] = {
		{ EBoneDeformSelectionMethod_StaticEnum, TEXT("EBoneDeformSelectionMethod"), &Z_Registration_Info_UEnum_EBoneDeformSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 675266881U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_Statics::ScriptStructInfo[] = {
		{ FMeshReshapeBoneReference::StaticStruct, Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics::NewStructOps, TEXT("MeshReshapeBoneReference"), &Z_Registration_Info_UScriptStruct_MeshReshapeBoneReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshReshapeBoneReference), 850209549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_197261479(TEXT("/Script/CustomizableObjectEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
