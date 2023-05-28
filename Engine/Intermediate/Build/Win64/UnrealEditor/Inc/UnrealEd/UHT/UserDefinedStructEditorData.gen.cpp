// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/UserDefinedStructure/UserDefinedStructEditorData.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStructEditorData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
	UNREALED_API UClass* Z_Construct_UClass_UUserDefinedStructEditorData();
	UNREALED_API UClass* Z_Construct_UClass_UUserDefinedStructEditorData_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FStructVariableDescription();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructVariableDescription;
class UScriptStruct* FStructVariableDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructVariableDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructVariableDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructVariableDescription, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("StructVariableDescription"));
	}
	return Z_Registration_Info_UScriptStruct_StructVariableDescription.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FStructVariableDescription>()
{
	return FStructVariableDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructVariableDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VarGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubCategory_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubCategoryObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubCategoryObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinValueType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinValueType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMap_MetaData[];
#endif
		static void NewProp_bIsMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvalidMember_MetaData[];
#endif
		static void NewProp_bInvalidMember_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvalidMember;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDontEditOnInstance_MetaData[];
#endif
		static void NewProp_bDontEditOnInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontEditOnInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSaveGame_MetaData[];
#endif
		static void NewProp_bEnableSaveGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSaveGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiLineText_MetaData[];
#endif
		static void NewProp_bEnableMultiLineText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiLineText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable3dWidget_MetaData[];
#endif
		static void NewProp_bEnable3dWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable3dWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructVariableDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid = { "VarGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, VarGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category_MetaData[] = {
		{ "Comment", "// TYPE DATA\n" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "TYPE DATA" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory = { "SubCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, SubCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject = { "SubCategoryObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, SubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType = { "PinValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, PinValueType), Z_Construct_UScriptStruct_FEdGraphTerminalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType_MetaData)) }; // 1385680097
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, ContainerType), Z_Construct_UEnum_Engine_EPinContainerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_MetaData)) }; // 3522656534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_MetaData[] = {
		{ "Comment", "// UE_DEPRECATED(4.17)\n" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17)" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bIsArray_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_MetaData[] = {
		{ "Comment", "// UE_DEPRECATED(4.17)\n" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17)" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bIsSet_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_MetaData[] = {
		{ "Comment", "// UE_DEPRECATED(4.17)\n" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17)" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bIsMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap = { "bIsMap", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bInvalidMember = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember = { "bInvalidMember", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditOnInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditOnInstance_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bDontEditOnInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditOnInstance = { "bDontEditOnInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditOnInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditOnInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditOnInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableSaveGame_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bEnableSaveGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableSaveGame = { "bEnableSaveGame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableSaveGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableSaveGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bEnableMultiLineText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText = { "bEnableMultiLineText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bEnable3dWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget = { "bEnable3dWidget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue_MetaData[] = {
		{ "Comment", "// CurrentDefaultValue stores the actual default value, after the DefaultValue was changed, and before the struct was recompiled\n" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "CurrentDefaultValue stores the actual default value, after the DefaultValue was changed, and before the struct was recompiled" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue = { "CurrentDefaultValue", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, CurrentDefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructVariableDescription, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructVariableDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditOnInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableSaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"StructVariableDescription",
		sizeof(FStructVariableDescription),
		alignof(FStructVariableDescription),
		Z_Construct_UScriptStruct_FStructVariableDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructVariableDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_StructVariableDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructVariableDescription.InnerSingleton, Z_Construct_UScriptStruct_FStructVariableDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructVariableDescription.InnerSingleton;
	}
	void UUserDefinedStructEditorData::StaticRegisterNativesUUserDefinedStructEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDefinedStructEditorData);
	UClass* Z_Construct_UClass_UUserDefinedStructEditorData_NoRegister()
	{
		return UUserDefinedStructEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedStructEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNameId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UniqueNameId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariablesDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariablesDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariablesDescriptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedStructEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId_MetaData[] = {
		{ "Comment", "// the property is used to generate an uniqe name id for member variable\n" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "the property is used to generate an uniqe name id for member variable" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId = { "UniqueNameId", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStructEditorData, UniqueNameId), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_Inner = { "VariablesDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStructVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2416468889
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions = { "VariablesDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStructEditorData, VariablesDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_MetaData)) }; // 2416468889
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserDefinedStructEditorData, ToolTip), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedStructEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedStructEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedStructEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::ClassParams = {
		&UUserDefinedStructEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserDefinedStructEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedStructEditorData()
	{
		if (!Z_Registration_Info_UClass_UUserDefinedStructEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDefinedStructEditorData.OuterSingleton, Z_Construct_UClass_UUserDefinedStructEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserDefinedStructEditorData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUserDefinedStructEditorData>()
	{
		return UUserDefinedStructEditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStructEditorData);
	UUserDefinedStructEditorData::~UUserDefinedStructEditorData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUserDefinedStructEditorData)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_Statics::ScriptStructInfo[] = {
		{ FStructVariableDescription::StaticStruct, Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewStructOps, TEXT("StructVariableDescription"), &Z_Registration_Info_UScriptStruct_StructVariableDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructVariableDescription), 2416468889U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserDefinedStructEditorData, UUserDefinedStructEditorData::StaticClass, TEXT("UUserDefinedStructEditorData"), &Z_Registration_Info_UClass_UUserDefinedStructEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDefinedStructEditorData), 3274119914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_417052704(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
