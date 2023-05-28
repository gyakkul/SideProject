// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigBlueprint.h"
#include "Rigs/RigHierarchyContainer.h"
#include "Rigs/RigInfluenceMap.h"
#include "RigVMCompiler/RigVMCompiler.h"
#include "RigVMCore/RigVMDrawContainer.h"
#include "RigVMCore/RigVMExecuteContext.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
#include "RigVMCore/RigVMMemoryCommon.h"
#include "RigVMCore/RigVMStatistics.h"
#include "RigVMModel/RigVMBuildData.h"
#include "RigVMModel/RigVMClient.h"
#include "RigVMModel/RigVMVariableDescription.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigBlueprint() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidator_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyController_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraph_NoRegister();
	CONTROLRIGDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigPublicFunctionArg();
	CONTROLRIGDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigPublicFunctionData();
	CONTROLRIGDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigPythonSettings();
	CONTROLRIGDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigGraphDisplaySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStatistics();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMClientHost_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMClient();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMCompileSettings();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphVariableDescription();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMReferenceNodeData();
	UPackage* Z_Construct_UPackage__Script_ControlRigDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg;
class UScriptStruct* FControlRigPublicFunctionArg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg, (UObject*)Z_Construct_UPackage__Script_ControlRigDeveloper(), TEXT("ControlRigPublicFunctionArg"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg.OuterSingleton;
}
template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<FControlRigPublicFunctionArg>()
{
	return FControlRigPublicFunctionArg::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPTypeObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.2" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigPublicFunctionArg>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionArg, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionArg, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath = { "CPPTypeObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionArg, CPPTypeObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_bIsArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FControlRigPublicFunctionArg*)Obj)->bIsArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControlRigPublicFunctionArg), &Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_bIsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_bIsArray_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionArg, Direction), Z_Construct_UEnum_RigVM_ERigVMPinDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Direction_MetaData)) }; // 4092277362
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewProp_Direction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
		nullptr,
		&NewStructOps,
		"ControlRigPublicFunctionArg",
		sizeof(FControlRigPublicFunctionArg),
		alignof(FControlRigPublicFunctionArg),
		Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigPublicFunctionArg()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg.InnerSingleton, Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData;
class UScriptStruct* FControlRigPublicFunctionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigPublicFunctionData, (UObject*)Z_Construct_UPackage__Script_ControlRigDeveloper(), TEXT("ControlRigPublicFunctionData"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData.OuterSingleton;
}
template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<FControlRigPublicFunctionData>()
{
	return FControlRigPublicFunctionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.2" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigPublicFunctionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionData, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Keywords_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionData, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionData, ReturnValue), Z_Construct_UScriptStruct_FControlRigPublicFunctionArg, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_ReturnValue_MetaData)) }; // 2560604079
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigPublicFunctionArg, METADATA_PARAMS(nullptr, 0) }; // 2560604079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Arguments_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigPublicFunctionData, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Arguments_MetaData)) }; // 2560604079
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_ReturnValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Arguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewProp_Arguments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
		nullptr,
		&NewStructOps,
		"ControlRigPublicFunctionData",
		sizeof(FControlRigPublicFunctionData),
		alignof(FControlRigPublicFunctionData),
		Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigPublicFunctionData()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData.InnerSingleton, Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings;
class UScriptStruct* FRigGraphDisplaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigGraphDisplaySettings, (UObject*)Z_Construct_UPackage__Script_ControlRigDeveloper(), TEXT("RigGraphDisplaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings.OuterSingleton;
}
template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<FRigGraphDisplaySettings>()
{
	return FRigGraphDisplaySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNodeInstructionIndex_MetaData[];
#endif
		static void NewProp_bShowNodeInstructionIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNodeInstructionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNodeRunCounts_MetaData[];
#endif
		static void NewProp_bShowNodeRunCounts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNodeRunCounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeRunLowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeRunLowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeRunLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeRunLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetermineRange_MetaData[];
#endif
		static void NewProp_bAutoDetermineRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetermineRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMinMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastMinMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMaxMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastMaxMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDurationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinDurationColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxDurationColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigGraphDisplaySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// When enabled shows the first node instruction index\n// matching the execution stack window.\n" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "When enabled shows the first node instruction index\nmatching the execution stack window." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_SetBit(void* Obj)
	{
		((FRigGraphDisplaySettings*)Obj)->bShowNodeInstructionIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex = { "bShowNodeInstructionIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigGraphDisplaySettings), &Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// When enabled shows the node counts both in the graph view as\n// we as in the execution stack window.\n// The number on each node represents how often the node has been run.\n// Keep in mind when looking at nodes in a function the count\n// represents the sum of all counts for each node based on all\n// references of the function currently running.\n" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "When enabled shows the node counts both in the graph view as\nwe as in the execution stack window.\nThe number on each node represents how often the node has been run.\nKeep in mind when looking at nodes in a function the count\nrepresents the sum of all counts for each node based on all\nreferences of the function currently running." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_SetBit(void* Obj)
	{
		((FRigGraphDisplaySettings*)Obj)->bShowNodeRunCounts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts = { "bShowNodeRunCounts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigGraphDisplaySettings), &Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// A lower limit for counts for nodes used for debugging.\n// Any node lower than this count won't show the run count.\n" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "A lower limit for counts for nodes used for debugging.\nAny node lower than this count won't show the run count." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound = { "NodeRunLowerBound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, NodeRunLowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLimit_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// A upper limit for counts for nodes used for debugging.\n// If a node reaches this count a warning will be issued for the\n// node and displayed both in the execution stack as well as in the\n// graph. Setting this to <= 1 disables the warning.\n// Note: The count limit doesn't apply to functions / collapse nodes.\n" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "A upper limit for counts for nodes used for debugging.\nIf a node reaches this count a warning will be issued for the\nnode and displayed both in the execution stack as well as in the\ngraph. Setting this to <= 1 disables the warning.\nNote: The count limit doesn't apply to functions / collapse nodes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLimit = { "NodeRunLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, NodeRunLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinMicroSeconds_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The duration in microseconds of the fastest instruction / node\n" },
		{ "EditCondition", "!bAutoDetermineRange" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The duration in microseconds of the fastest instruction / node" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinMicroSeconds = { "MinMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, MinMicroSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinMicroSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinMicroSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The duration in microseconds of the slowest instruction / node\n" },
		{ "EditCondition", "!bAutoDetermineRange" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The duration in microseconds of the slowest instruction / node" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds = { "MaxMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, MaxMicroSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The total duration of the last execution of the rig\n" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The total duration of the last execution of the rig" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds = { "TotalMicroSeconds", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, TotalMicroSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_SetBit(void* Obj)
	{
		((FRigGraphDisplaySettings*)Obj)->bAutoDetermineRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange = { "bAutoDetermineRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigGraphDisplaySettings), &Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds = { "LastMinMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, LastMinMicroSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds = { "LastMaxMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, LastMaxMicroSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinDurationColor_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The color of the fastest instruction / node\n" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The color of the fastest instruction / node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinDurationColor = { "MinDurationColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, MinDurationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinDurationColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinDurationColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxDurationColor_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The color of the slowest instruction / node\n" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The color of the slowest instruction / node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxDurationColor = { "MaxDurationColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigGraphDisplaySettings, MaxDurationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxDurationColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxDurationColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_NodeRunLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MinDurationColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewProp_MaxDurationColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
		nullptr,
		&NewStructOps,
		"RigGraphDisplaySettings",
		sizeof(FRigGraphDisplaySettings),
		alignof(FRigGraphDisplaySettings),
		Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigGraphDisplaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings.InnerSingleton, Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigPythonSettings;
class UScriptStruct* FControlRigPythonSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigPythonSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigPythonSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigPythonSettings, (UObject*)Z_Construct_UPackage__Script_ControlRigDeveloper(), TEXT("ControlRigPythonSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigPythonSettings.OuterSingleton;
}
template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<FControlRigPythonSettings>()
{
	return FControlRigPythonSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigPythonSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
		nullptr,
		&NewStructOps,
		"ControlRigPythonSettings",
		sizeof(FControlRigPythonSettings),
		alignof(FControlRigPythonSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigPythonSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigPythonSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigPythonSettings.InnerSingleton, Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigPythonSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetHierarchyController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigHierarchyController**)Z_Param__Result=P_THIS->GetHierarchyController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetAvailableRigUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStruct*>*)Z_Param__Result=UControlRigBlueprint::GetAvailableRigUnits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execCreateControlRig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRig**)Z_Param__Result=P_THIS->CreateControlRig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetControlRigClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetControlRigClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetCurrentlyOpenRigBlueprints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UControlRigBlueprint*>*)Z_Param__Result=UControlRigBlueprint::GetCurrentlyOpenRigBlueprints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGeneratePythonCommands)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewBlueprintName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GeneratePythonCommands(Z_Param_InNewBlueprintName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetOrCreateController)
	{
		P_GET_OBJECT(URigVMGraph,Z_Param_InGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMController**)Z_Param__Result=P_THIS->GetOrCreateController(Z_Param_InGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetControllerByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InGraphName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMController**)Z_Param__Result=P_THIS->GetControllerByName(Z_Param_InGraphName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetController)
	{
		P_GET_OBJECT(URigVMGraph,Z_Param_InGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMController**)Z_Param__Result=P_THIS->GetController(Z_Param_InGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execRemoveModel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveModel(Z_Param_InName,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execAddModel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->AddModel(Z_Param_InName,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetLocalFunctionLibrary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMFunctionLibrary**)Z_Param__Result=P_THIS->GetLocalFunctionLibrary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetAllModels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMGraph*>*)Z_Param__Result=P_THIS->GetAllModels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetDefaultModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetDefaultModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetModel)
	{
		P_GET_OBJECT(UEdGraph,Z_Param_InEdGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetModel(Z_Param_InEdGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execRequestControlRigInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestControlRigInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execSetAutoVMRecompile)
	{
		P_GET_UBOOL(Z_Param_bAutoRecompile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoVMRecompile(Z_Param_bAutoRecompile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execRequestAutoVMRecompilation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestAutoVMRecompilation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execRecompileVMIfRequired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecompileVMIfRequired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execRecompileVM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecompileVM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetPreviewMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetPreviewMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execSetPreviewMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh);
		P_GET_UBOOL(Z_Param_bMarkAsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewMesh(Z_Param_PreviewMesh,Z_Param_bMarkAsDirty);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UControlRigBlueprint::execSuspendNotifications)
	{
		P_GET_UBOOL(Z_Param_bSuspendNotifs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendNotifications(Z_Param_bSuspendNotifs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execChangeMemberVariableType)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InCPPType);
		P_GET_UBOOL(Z_Param_bIsPublic);
		P_GET_UBOOL(Z_Param_bIsReadOnly);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeMemberVariableType(Z_Param_Out_InName,Z_Param_InCPPType,Z_Param_bIsPublic,Z_Param_bIsReadOnly,Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execRenameMemberVariable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InOldName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InNewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameMemberVariable(Z_Param_Out_InOldName,Z_Param_Out_InNewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execRemoveMemberVariable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMemberVariable(Z_Param_Out_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execAddMemberVariable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InCPPType);
		P_GET_UBOOL(Z_Param_bIsPublic);
		P_GET_UBOOL(Z_Param_bIsReadOnly);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->AddMemberVariable(Z_Param_Out_InName,Z_Param_InCPPType,Z_Param_bIsPublic,Z_Param_bIsReadOnly,Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprint::execGetMemberVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMGraphVariableDescription>*)Z_Param__Result=P_THIS->GetMemberVariables();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UControlRigBlueprint::StaticRegisterNativesUControlRigBlueprint()
	{
		UClass* Class = UControlRigBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddMemberVariable", &UControlRigBlueprint::execAddMemberVariable },
#endif // WITH_EDITOR
			{ "AddModel", &UControlRigBlueprint::execAddModel },
#if WITH_EDITOR
			{ "ChangeMemberVariableType", &UControlRigBlueprint::execChangeMemberVariableType },
#endif // WITH_EDITOR
			{ "CreateControlRig", &UControlRigBlueprint::execCreateControlRig },
			{ "GeneratePythonCommands", &UControlRigBlueprint::execGeneratePythonCommands },
			{ "GetAllModels", &UControlRigBlueprint::execGetAllModels },
			{ "GetAvailableRigUnits", &UControlRigBlueprint::execGetAvailableRigUnits },
			{ "GetController", &UControlRigBlueprint::execGetController },
			{ "GetControllerByName", &UControlRigBlueprint::execGetControllerByName },
			{ "GetControlRigClass", &UControlRigBlueprint::execGetControlRigClass },
			{ "GetCurrentlyOpenRigBlueprints", &UControlRigBlueprint::execGetCurrentlyOpenRigBlueprints },
			{ "GetDefaultModel", &UControlRigBlueprint::execGetDefaultModel },
			{ "GetHierarchyController", &UControlRigBlueprint::execGetHierarchyController },
			{ "GetLocalFunctionLibrary", &UControlRigBlueprint::execGetLocalFunctionLibrary },
#if WITH_EDITOR
			{ "GetMemberVariables", &UControlRigBlueprint::execGetMemberVariables },
#endif // WITH_EDITOR
			{ "GetModel", &UControlRigBlueprint::execGetModel },
			{ "GetOrCreateController", &UControlRigBlueprint::execGetOrCreateController },
			{ "GetPreviewMesh", &UControlRigBlueprint::execGetPreviewMesh },
			{ "RecompileVM", &UControlRigBlueprint::execRecompileVM },
			{ "RecompileVMIfRequired", &UControlRigBlueprint::execRecompileVMIfRequired },
#if WITH_EDITOR
			{ "RemoveMemberVariable", &UControlRigBlueprint::execRemoveMemberVariable },
#endif // WITH_EDITOR
			{ "RemoveModel", &UControlRigBlueprint::execRemoveModel },
#if WITH_EDITOR
			{ "RenameMemberVariable", &UControlRigBlueprint::execRenameMemberVariable },
#endif // WITH_EDITOR
			{ "RequestAutoVMRecompilation", &UControlRigBlueprint::execRequestAutoVMRecompilation },
			{ "RequestControlRigInit", &UControlRigBlueprint::execRequestControlRigInit },
			{ "SetAutoVMRecompile", &UControlRigBlueprint::execSetAutoVMRecompile },
			{ "SetPreviewMesh", &UControlRigBlueprint::execSetPreviewMesh },
#if WITH_EDITOR
			{ "SuspendNotifications", &UControlRigBlueprint::execSuspendNotifications },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics
	{
		struct ControlRigBlueprint_eventAddMemberVariable_Parms
		{
			FName InName;
			FString InCPPType;
			bool bIsPublic;
			bool bIsReadOnly;
			FString InDefaultValue;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCPPType;
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventAddMemberVariable_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InCPPType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InCPPType = { "InCPPType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventAddMemberVariable_Parms, InCPPType), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InCPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InCPPType_MetaData)) };
	void Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventAddMemberVariable_Parms*)Obj)->bIsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventAddMemberVariable_Parms), &Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventAddMemberVariable_Parms*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventAddMemberVariable_Parms), &Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventAddMemberVariable_Parms, InDefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventAddMemberVariable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InCPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_InDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "CPP_Default_bIsPublic", "false" },
		{ "CPP_Default_bIsReadOnly", "false" },
		{ "CPP_Default_InDefaultValue", "" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "AddMemberVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::ControlRigBlueprint_eventAddMemberVariable_Parms), Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics
	{
		struct ControlRigBlueprint_eventAddModel_Parms
		{
			FString InName;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventAddModel_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventAddModel_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventAddModel_Parms), &Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventAddModel_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventAddModel_Parms), &Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventAddModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "CPP_Default_InName", "Rig Graph" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "AddModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::ControlRigBlueprint_eventAddModel_Parms), Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_AddModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_AddModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics
	{
		struct ControlRigBlueprint_eventChangeMemberVariableType_Parms
		{
			FName InName;
			FString InCPPType;
			bool bIsPublic;
			bool bIsReadOnly;
			FString InDefaultValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCPPType;
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventChangeMemberVariableType_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType = { "InCPPType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventChangeMemberVariableType_Parms, InCPPType), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType_MetaData)) };
	void Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventChangeMemberVariableType_Parms*)Obj)->bIsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventChangeMemberVariableType_Parms), &Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventChangeMemberVariableType_Parms*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventChangeMemberVariableType_Parms), &Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventChangeMemberVariableType_Parms, InDefaultValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventChangeMemberVariableType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventChangeMemberVariableType_Parms), &Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_InDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "CPP_Default_bIsPublic", "false" },
		{ "CPP_Default_bIsReadOnly", "false" },
		{ "CPP_Default_InDefaultValue", "" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "ChangeMemberVariableType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::ControlRigBlueprint_eventChangeMemberVariableType_Parms), Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics
	{
		struct ControlRigBlueprint_eventCreateControlRig_Parms
		{
			UControlRig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventCreateControlRig_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "CreateControlRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::ControlRigBlueprint_eventCreateControlRig_Parms), Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics
	{
		struct ControlRigBlueprint_eventGeneratePythonCommands_Parms
		{
			FString InNewBlueprintName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewBlueprintName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNewBlueprintName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName = { "InNewBlueprintName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGeneratePythonCommands_Parms, InNewBlueprintName), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGeneratePythonCommands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GeneratePythonCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::ControlRigBlueprint_eventGeneratePythonCommands_Parms), Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics
	{
		struct ControlRigBlueprint_eventGetAllModels_Parms
		{
			TArray<URigVMGraph*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetAllModels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetAllModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::ControlRigBlueprint_eventGetAllModels_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetAllModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetAllModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics
	{
		struct ControlRigBlueprint_eventGetAvailableRigUnits_Parms
		{
			TArray<UStruct*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetAvailableRigUnits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetAvailableRigUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::ControlRigBlueprint_eventGetAvailableRigUnits_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics
	{
		struct ControlRigBlueprint_eventGetController_Parms
		{
			const URigVMGraph* InGraph;
			URigVMController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::NewProp_InGraph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetController_Parms, InGraph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::NewProp_InGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::NewProp_InGraph_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetController_Parms, ReturnValue), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "CPP_Default_InGraph", "None" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::ControlRigBlueprint_eventGetController_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics
	{
		struct ControlRigBlueprint_eventGetControllerByName_Parms
		{
			FString InGraphName;
			URigVMController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGraphName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InGraphName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::NewProp_InGraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::NewProp_InGraphName = { "InGraphName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetControllerByName_Parms, InGraphName), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::NewProp_InGraphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::NewProp_InGraphName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetControllerByName_Parms, ReturnValue), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::NewProp_InGraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "CPP_Default_InGraphName", "" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetControllerByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::ControlRigBlueprint_eventGetControllerByName_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics
	{
		struct ControlRigBlueprint_eventGetControlRigClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetControlRigClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetControlRigClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::ControlRigBlueprint_eventGetControlRigClass_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics
	{
		struct ControlRigBlueprint_eventGetCurrentlyOpenRigBlueprints_Parms
		{
			TArray<UControlRigBlueprint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetCurrentlyOpenRigBlueprints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetCurrentlyOpenRigBlueprints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::ControlRigBlueprint_eventGetCurrentlyOpenRigBlueprints_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics
	{
		struct ControlRigBlueprint_eventGetDefaultModel_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetDefaultModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetDefaultModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::ControlRigBlueprint_eventGetDefaultModel_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics
	{
		struct ControlRigBlueprint_eventGetHierarchyController_Parms
		{
			URigHierarchyController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetHierarchyController_Parms, ReturnValue), Z_Construct_UClass_URigHierarchyController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetHierarchyController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::ControlRigBlueprint_eventGetHierarchyController_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics
	{
		struct ControlRigBlueprint_eventGetLocalFunctionLibrary_Parms
		{
			URigVMFunctionLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetLocalFunctionLibrary_Parms, ReturnValue), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetLocalFunctionLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::ControlRigBlueprint_eventGetLocalFunctionLibrary_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics
	{
		struct ControlRigBlueprint_eventGetMemberVariables_Parms
		{
			TArray<FRigVMGraphVariableDescription> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetMemberVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetMemberVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::ControlRigBlueprint_eventGetMemberVariables_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics
	{
		struct ControlRigBlueprint_eventGetModel_Parms
		{
			const UEdGraph* InEdGraph;
			URigVMGraph* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEdGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::NewProp_InEdGraph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::NewProp_InEdGraph = { "InEdGraph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetModel_Parms, InEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::NewProp_InEdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::NewProp_InEdGraph_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::NewProp_InEdGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "CPP_Default_InEdGraph", "None" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::ControlRigBlueprint_eventGetModel_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics
	{
		struct ControlRigBlueprint_eventGetOrCreateController_Parms
		{
			URigVMGraph* InGraph;
			URigVMController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetOrCreateController_Parms, InGraph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetOrCreateController_Parms, ReturnValue), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "CPP_Default_InGraph", "None" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetOrCreateController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::ControlRigBlueprint_eventGetOrCreateController_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics
	{
		struct ControlRigBlueprint_eventGetPreviewMesh_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventGetPreviewMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "GetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::ControlRigBlueprint_eventGetPreviewMesh_Parms), Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_RecompileVM_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RecompileVM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_RecompileVM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "RecompileVM", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RecompileVM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RecompileVM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_RecompileVM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_RecompileVM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "RecompileVMIfRequired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics
	{
		struct ControlRigBlueprint_eventRemoveMemberVariable_Parms
		{
			FName InName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventRemoveMemberVariable_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_InName_MetaData)) };
	void Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventRemoveMemberVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventRemoveMemberVariable_Parms), &Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "RemoveMemberVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::ControlRigBlueprint_eventRemoveMemberVariable_Parms), Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics
	{
		struct ControlRigBlueprint_eventRemoveModel_Parms
		{
			FString InName;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventRemoveModel_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventRemoveModel_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventRemoveModel_Parms), &Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventRemoveModel_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventRemoveModel_Parms), &Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventRemoveModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventRemoveModel_Parms), &Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "CPP_Default_InName", "Rig Graph" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "RemoveModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::ControlRigBlueprint_eventRemoveModel_Parms), Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_RemoveModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_RemoveModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics
	{
		struct ControlRigBlueprint_eventRenameMemberVariable_Parms
		{
			FName InOldName;
			FName InNewName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOldName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InOldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InOldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InOldName = { "InOldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventRenameMemberVariable_Parms, InOldName), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InOldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InOldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InNewName = { "InNewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventRenameMemberVariable_Parms, InNewName), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InNewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InNewName_MetaData)) };
	void Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventRenameMemberVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventRenameMemberVariable_Parms), &Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InOldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_InNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "RenameMemberVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::ControlRigBlueprint_eventRenameMemberVariable_Parms), Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "RequestAutoVMRecompilation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "RequestControlRigInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics
	{
		struct ControlRigBlueprint_eventSetAutoVMRecompile_Parms
		{
			bool bAutoRecompile;
		};
		static void NewProp_bAutoRecompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRecompile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventSetAutoVMRecompile_Parms*)Obj)->bAutoRecompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile = { "bAutoRecompile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventSetAutoVMRecompile_Parms), &Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "SetAutoVMRecompile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::ControlRigBlueprint_eventSetAutoVMRecompile_Parms), Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics
	{
		struct ControlRigBlueprint_eventSetPreviewMesh_Parms
		{
			USkeletalMesh* PreviewMesh;
			bool bMarkAsDirty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
		static void NewProp_bMarkAsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkAsDirty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprint_eventSetPreviewMesh_Parms, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventSetPreviewMesh_Parms*)Obj)->bMarkAsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty = { "bMarkAsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventSetPreviewMesh_Parms), &Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::NewProp_bMarkAsDirty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "Comment", "/** IInterface_PreviewMeshProvider interface */" },
		{ "CPP_Default_bMarkAsDirty", "true" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "IInterface_PreviewMeshProvider interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "SetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::ControlRigBlueprint_eventSetPreviewMesh_Parms), Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics
	{
		struct ControlRigBlueprint_eventSuspendNotifications_Parms
		{
			bool bSuspendNotifs;
		};
		static void NewProp_bSuspendNotifs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspendNotifs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs_SetBit(void* Obj)
	{
		((ControlRigBlueprint_eventSuspendNotifications_Parms*)Obj)->bSuspendNotifs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs = { "bSuspendNotifs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigBlueprint_eventSuspendNotifications_Parms), &Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig Blueprint" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprint, nullptr, "SuspendNotifications", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::ControlRigBlueprint_eventSuspendNotifications_Parms), Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigBlueprint);
	UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister()
	{
		return UControlRigBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionLibraryEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionLibraryEdGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigGraphDisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigGraphDisplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMCompileSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMCompileSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonLogSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PythonLogSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionLibrary;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVMClient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigVMClient;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublicFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublicGraphFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicGraphFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicGraphFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReferenceNodeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReferenceNodeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionReferenceNodeData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateController;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinToOperandMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinToOperandMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinToOperandMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinToOperandMap;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GizmoLibrary;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShapeLibraries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibraries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeLibraries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Statistics;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Influences_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Influences;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyContainer;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Hierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsInversion_MetaData[];
#endif
		static void NewProp_bSupportsInversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsInversion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsControls_MetaData[];
#endif
		static void NewProp_bSupportsControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsControls;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceHierarchyImport_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceHierarchyImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCurveImport_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceCurveImport;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SupportedEventNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedEventNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedEventNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposesAnimatableControls_MetaData[];
#endif
		static void NewProp_bExposesAnimatableControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposesAnimatableControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRecompileVM_MetaData[];
#endif
		static void NewProp_bAutoRecompileVM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRecompileVM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVMRecompilationRequired_MetaData[];
#endif
		static void NewProp_bVMRecompilationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVMRecompilationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompiling_MetaData[];
#endif
		static void NewProp_bIsCompiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRecompilationBracket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VMRecompilationBracket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Validator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Validator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugBoneRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugBoneRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigBlueprint_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_AddMemberVariable, "AddMemberVariable" }, // 3559969881
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_AddModel, "AddModel" }, // 2868632554
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_ChangeMemberVariableType, "ChangeMemberVariableType" }, // 2398800167
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_CreateControlRig, "CreateControlRig" }, // 3647994020
		{ &Z_Construct_UFunction_UControlRigBlueprint_GeneratePythonCommands, "GeneratePythonCommands" }, // 1519494131
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetAllModels, "GetAllModels" }, // 2434823258
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetAvailableRigUnits, "GetAvailableRigUnits" }, // 1978818127
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetController, "GetController" }, // 3724661513
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetControllerByName, "GetControllerByName" }, // 1642400977
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetControlRigClass, "GetControlRigClass" }, // 961409970
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetCurrentlyOpenRigBlueprints, "GetCurrentlyOpenRigBlueprints" }, // 1713640629
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetDefaultModel, "GetDefaultModel" }, // 3491094220
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetHierarchyController, "GetHierarchyController" }, // 642196803
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetLocalFunctionLibrary, "GetLocalFunctionLibrary" }, // 3053890354
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetMemberVariables, "GetMemberVariables" }, // 2493896853
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetModel, "GetModel" }, // 169845633
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetOrCreateController, "GetOrCreateController" }, // 2339844295
		{ &Z_Construct_UFunction_UControlRigBlueprint_GetPreviewMesh, "GetPreviewMesh" }, // 2634959740
		{ &Z_Construct_UFunction_UControlRigBlueprint_RecompileVM, "RecompileVM" }, // 2958657498
		{ &Z_Construct_UFunction_UControlRigBlueprint_RecompileVMIfRequired, "RecompileVMIfRequired" }, // 2997726017
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_RemoveMemberVariable, "RemoveMemberVariable" }, // 2479293511
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_RemoveModel, "RemoveModel" }, // 245092300
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_RenameMemberVariable, "RenameMemberVariable" }, // 3059710400
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_RequestAutoVMRecompilation, "RequestAutoVMRecompilation" }, // 1165751189
		{ &Z_Construct_UFunction_UControlRigBlueprint_RequestControlRigInit, "RequestControlRigInit" }, // 1444650035
		{ &Z_Construct_UFunction_UControlRigBlueprint_SetAutoVMRecompile, "SetAutoVMRecompile" }, // 3705685277
		{ &Z_Construct_UFunction_UControlRigBlueprint_SetPreviewMesh, "SetPreviewMesh" }, // 1674012200
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UControlRigBlueprint_SuspendNotifications, "SuspendNotifications" }, // 155128022
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "ControlRigBlueprint.h" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibraryEdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibraryEdGraph = { "FunctionLibraryEdGraph", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, FunctionLibraryEdGraph), Z_Construct_UClass_UControlRigGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibraryEdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibraryEdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigGraphDisplaySettings_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigGraphDisplaySettings = { "RigGraphDisplaySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, RigGraphDisplaySettings), Z_Construct_UScriptStruct_FRigGraphDisplaySettings, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigGraphDisplaySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigGraphDisplaySettings_MetaData)) }; // 4228744140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings = { "HierarchySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, HierarchySettings), Z_Construct_UScriptStruct_FRigHierarchySettings, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings_MetaData)) }; // 460636539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRuntimeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRuntimeSettings_MetaData)) }; // 2495750411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMCompileSettings_MetaData[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMCompileSettings = { "VMCompileSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, VMCompileSettings), Z_Construct_UScriptStruct_FRigVMCompileSettings, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMCompileSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMCompileSettings_MetaData)) }; // 3903670742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PythonLogSettings_MetaData[] = {
		{ "Category", "Python Log Settings" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PythonLogSettings = { "PythonLogSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, PythonLogSettings), Z_Construct_UScriptStruct_FControlRigPythonSettings, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PythonLogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PythonLogSettings_MetaData)) }; // 4285085245
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, Model_DEPRECATED), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibrary = { "FunctionLibrary", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, FunctionLibrary_DEPRECATED), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibrary_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigVMClient_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigVMClient = { "RigVMClient", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, RigVMClient), Z_Construct_UScriptStruct_FRigVMClient, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigVMClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigVMClient_MetaData)) }; // 1783123471
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_Inner = { "PublicFunctions", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigPublicFunctionData, METADATA_PARAMS(nullptr, 0) }; // 2572896511
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_MetaData[] = {
		{ "Comment", "/** Asset searchable information about exposed public functions on this rig */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Asset searchable information about exposed public functions on this rig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions = { "PublicFunctions", nullptr, (EPropertyFlags)0x0020090020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, PublicFunctions_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_MetaData)) }; // 2572896511
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicGraphFunctions_Inner = { "PublicGraphFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(nullptr, 0) }; // 767263506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicGraphFunctions_MetaData[] = {
		{ "Comment", "/** Asset searchable information about exposed public functions on this rig */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Asset searchable information about exposed public functions on this rig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicGraphFunctions = { "PublicGraphFunctions", nullptr, (EPropertyFlags)0x0020090000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, PublicGraphFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicGraphFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicGraphFunctions_MetaData)) }; // 767263506
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionReferenceNodeData_Inner = { "FunctionReferenceNodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMReferenceNodeData, METADATA_PARAMS(nullptr, 0) }; // 1978678584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionReferenceNodeData_MetaData[] = {
		{ "Comment", "/** Asset searchable information function references in this rig */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Asset searchable information function references in this rig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionReferenceNodeData = { "FunctionReferenceNodeData", nullptr, (EPropertyFlags)0x0020090000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, FunctionReferenceNodeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionReferenceNodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionReferenceNodeData_MetaData)) }; // 1978678584
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateModel = { "TemplateModel", nullptr, (EPropertyFlags)0x0024080800202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, TemplateModel), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateController_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateController = { "TemplateController", nullptr, (EPropertyFlags)0x0024080800202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, TemplateController), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateController_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap_ValueProp = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRigVMOperand, METADATA_PARAMS(nullptr, 0) }; // 1902833667
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap_Key_KeyProp = { "PinToOperandMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, PinToOperandMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap_MetaData)) }; // 1902833667
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary = { "GizmoLibrary", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, GizmoLibrary_DEPRECATED), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_Inner = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_MetaData[] = {
		{ "Category", "Shapes" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, ShapeLibraries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics_MetaData[] = {
		{ "DisplayAfter", "VMCompileSettings" },
		{ "DisplayName", "VM Statistics" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000820202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, Statistics_DEPRECATED), Z_Construct_UScriptStruct_FRigVMStatistics, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics_MetaData)) }; // 1821124700
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer = { "DrawContainer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, DrawContainer), Z_Construct_UScriptStruct_FRigVMDrawContainer, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer_MetaData)) }; // 1476167880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences_MetaData[] = {
		{ "Category", "Influence Map" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences = { "Influences", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, Influences), Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences_MetaData)) }; // 2658910230
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer = { "HierarchyContainer", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, HierarchyContainer_DEPRECATED), Z_Construct_UScriptStruct_FRigHierarchyContainer, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer_MetaData)) }; // 406125163
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, Hierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_MetaData[] = {
		{ "Comment", "/** Whether or not this rig has an Inversion Event */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Whether or not this rig has an Inversion Event" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bSupportsInversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion = { "bSupportsInversion", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_MetaData[] = {
		{ "Comment", "/** Whether or not this rig has Controls on It */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "Whether or not this rig has Controls on It" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bSupportsControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls = { "bSupportsControls", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport_MetaData[] = {
		{ "Comment", "/** The skeleton from import into a hierarchy */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The skeleton from import into a hierarchy" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport = { "SourceHierarchyImport", nullptr, (EPropertyFlags)0x0044010000200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, SourceHierarchyImport), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport_MetaData[] = {
		{ "Comment", "/** The skeleton from import into a curve */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The skeleton from import into a curve" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport = { "SourceCurveImport", nullptr, (EPropertyFlags)0x0044010000200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, SourceCurveImport), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SupportedEventNames_Inner = { "SupportedEventNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SupportedEventNames_MetaData[] = {
		{ "Comment", "/** The event names this control rig blueprint contains */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "The event names this control rig blueprint contains" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SupportedEventNames = { "SupportedEventNames", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, SupportedEventNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SupportedEventNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SupportedEventNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_MetaData[] = {
		{ "Comment", "/** If set to true, this control rig has animatable controls */" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
		{ "ToolTip", "If set to true, this control rig has animatable controls" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bExposesAnimatableControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls = { "bExposesAnimatableControls", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bAutoRecompileVM_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bAutoRecompileVM_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bAutoRecompileVM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bAutoRecompileVM = { "bAutoRecompileVM", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bAutoRecompileVM_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bAutoRecompileVM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bAutoRecompileVM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bVMRecompilationRequired_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bVMRecompilationRequired_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bVMRecompilationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bVMRecompilationRequired = { "bVMRecompilationRequired", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bVMRecompilationRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bVMRecompilationRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bVMRecompilationRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bIsCompiling_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bIsCompiling_SetBit(void* Obj)
	{
		((UControlRigBlueprint*)Obj)->bIsCompiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bIsCompiling = { "bIsCompiling", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigBlueprint), &Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bIsCompiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bIsCompiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bIsCompiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRecompilationBracket_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRecompilationBracket = { "VMRecompilationBracket", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, VMRecompilationBracket), METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRecompilationBracket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRecompilationBracket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator = { "Validator", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, Validator), Z_Construct_UClass_UControlRigValidator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius = { "DebugBoneRadius", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprint, DebugBoneRadius), METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigBlueprint_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibraryEdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigGraphDisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMCompileSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PythonLogSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionLibrary,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_RigVMClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicGraphFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PublicGraphFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionReferenceNodeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_FunctionReferenceNodeData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_TemplateController,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PinToOperandMap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_GizmoLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_ShapeLibraries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Statistics,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DrawContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Influences,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_HierarchyContainer,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Hierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsInversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bSupportsControls,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_PreviewSkeletalMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceHierarchyImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SourceCurveImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SupportedEventNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_SupportedEventNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bExposesAnimatableControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bAutoRecompileVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bVMRecompilationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_bIsCompiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_VMRecompilationBracket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_Validator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprint_Statics::NewProp_DebugBoneRadius,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRigBlueprint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UControlRigBlueprint, IInterface_PreviewMeshProvider), false },  // 3026411520
			{ Z_Construct_UClass_URigVMClientHost_NoRegister, (int32)VTABLE_OFFSET(UControlRigBlueprint, IRigVMClientHost), false },  // 4096289824
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigBlueprint_Statics::ClassParams = {
		&UControlRigBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRigBlueprint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigBlueprint()
	{
		if (!Z_Registration_Info_UClass_UControlRigBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigBlueprint.OuterSingleton, Z_Construct_UClass_UControlRigBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigBlueprint.OuterSingleton;
	}
	template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<UControlRigBlueprint>()
	{
		return UControlRigBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigBlueprint);
	UControlRigBlueprint::~UControlRigBlueprint() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigBlueprint)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ScriptStructInfo[] = {
		{ FControlRigPublicFunctionArg::StaticStruct, Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics::NewStructOps, TEXT("ControlRigPublicFunctionArg"), &Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionArg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigPublicFunctionArg), 2560604079U) },
		{ FControlRigPublicFunctionData::StaticStruct, Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics::NewStructOps, TEXT("ControlRigPublicFunctionData"), &Z_Registration_Info_UScriptStruct_ControlRigPublicFunctionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigPublicFunctionData), 2572896511U) },
		{ FRigGraphDisplaySettings::StaticStruct, Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics::NewStructOps, TEXT("RigGraphDisplaySettings"), &Z_Registration_Info_UScriptStruct_RigGraphDisplaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigGraphDisplaySettings), 4228744140U) },
		{ FControlRigPythonSettings::StaticStruct, Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics::NewStructOps, TEXT("ControlRigPythonSettings"), &Z_Registration_Info_UScriptStruct_ControlRigPythonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigPythonSettings), 4285085245U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigBlueprint, UControlRigBlueprint::StaticClass, TEXT("UControlRigBlueprint"), &Z_Registration_Info_UClass_UControlRigBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigBlueprint), 176006896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_4188181809(TEXT("/Script/ControlRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
