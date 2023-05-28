// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_EditablePinBase.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EditablePinBase() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FUserPinInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserPinInfo;
class UScriptStruct* FUserPinInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserPinInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserPinInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserPinInfo, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("UserPinInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UserPinInfo.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FUserPinInfo>()
{
	return FUserPinInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserPinInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPinDirection_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredPinDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserPinInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName_MetaData[] = {
		{ "Comment", "/** The name of the pin, as defined by the user */" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "The name of the pin, as defined by the user" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserPinInfo, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType_MetaData[] = {
		{ "Comment", "/** Type info for the pin */" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Type info for the pin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserPinInfo, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection_MetaData[] = {
		{ "Comment", "/** Desired direction for the pin. The direction will be forced to work with the node if necessary */" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Desired direction for the pin. The direction will be forced to work with the node if necessary" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection = { "DesiredPinDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserPinInfo, DesiredPinDirection), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection_MetaData)) }; // 1668123198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue_MetaData[] = {
		{ "Comment", "/** The default value of the pin */" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "The default value of the pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue = { "PinDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserPinInfo, PinDefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserPinInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"UserPinInfo",
		sizeof(FUserPinInfo),
		alignof(FUserPinInfo),
		Z_Construct_UScriptStruct_FUserPinInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserPinInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UserPinInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserPinInfo.InnerSingleton, Z_Construct_UScriptStruct_FUserPinInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserPinInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata;
class UScriptStruct* FKismetUserDeclaredFunctionMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("KismetUserDeclaredFunctionMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FKismetUserDeclaredFunctionMetadata>()
{
	return FKismetUserDeclaredFunctionMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompactNodeTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CompactNodeTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTitleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeprecationMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeprecated_MetaData[];
#endif
		static void NewProp_bIsDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeprecated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallInEditor_MetaData[];
#endif
		static void NewProp_bCallInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bThreadSafe_MetaData[];
#endif
		static void NewProp_bThreadSafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bThreadSafe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnsafeDuringActorConstruction_MetaData[];
#endif
		static void NewProp_bIsUnsafeDuringActorConstruction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnsafeDuringActorConstruction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasLatentFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_HasLatentFunctions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaDataMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetaDataMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This structure describes metadata associated with a user declared function or macro\n// It will be turned into regular metadata during compilation\n" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "This structure describes metadata associated with a user declared function or macro\nIt will be turned into regular metadata during compilation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKismetUserDeclaredFunctionMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle = { "CompactNodeTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, CompactNodeTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor = { "InstanceTitleColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, InstanceTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_DeprecationMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, DeprecationMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_DeprecationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_DeprecationMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsDeprecated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsDeprecated_SetBit(void* Obj)
	{
		((FKismetUserDeclaredFunctionMetadata*)Obj)->bIsDeprecated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsDeprecated = { "bIsDeprecated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKismetUserDeclaredFunctionMetadata), &Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsDeprecated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_SetBit(void* Obj)
	{
		((FKismetUserDeclaredFunctionMetadata*)Obj)->bCallInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor = { "bCallInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKismetUserDeclaredFunctionMetadata), &Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bThreadSafe_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bThreadSafe_SetBit(void* Obj)
	{
		((FKismetUserDeclaredFunctionMetadata*)Obj)->bThreadSafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bThreadSafe = { "bThreadSafe", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKismetUserDeclaredFunctionMetadata), &Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bThreadSafe_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bThreadSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bThreadSafe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsUnsafeDuringActorConstruction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsUnsafeDuringActorConstruction_SetBit(void* Obj)
	{
		((FKismetUserDeclaredFunctionMetadata*)Obj)->bIsUnsafeDuringActorConstruction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsUnsafeDuringActorConstruction = { "bIsUnsafeDuringActorConstruction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKismetUserDeclaredFunctionMetadata), &Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsUnsafeDuringActorConstruction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsUnsafeDuringActorConstruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsUnsafeDuringActorConstruction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions_MetaData[] = {
		{ "Comment", "/** Cached value for whether or not the graph has latent functions, positive for TRUE, zero for FALSE, and INDEX_None for undetermined */" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Cached value for whether or not the graph has latent functions, positive for TRUE, zero for FALSE, and INDEX_None for undetermined" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions = { "HasLatentFunctions", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, HasLatentFunctions), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap_ValueProp = { "MetaDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap_Key_KeyProp = { "MetaDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap = { "MetaDataMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, MetaDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_DeprecationMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsDeprecated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bThreadSafe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bIsUnsafeDuringActorConstruction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_MetaDataMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"KismetUserDeclaredFunctionMetadata",
		sizeof(FKismetUserDeclaredFunctionMetadata),
		alignof(FKismetUserDeclaredFunctionMetadata),
		Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata.InnerSingleton, Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata.InnerSingleton;
	}
	void UK2Node_EditablePinBase::StaticRegisterNativesUK2Node_EditablePinBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EditablePinBase);
	UClass* Z_Construct_UClass_UK2Node_EditablePinBase_NoRegister()
	{
		return UK2Node_EditablePinBase::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EditablePinBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[];
#endif
		static void NewProp_bIsEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EditablePinBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EditablePinBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EditablePinBase.h" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_MetaData[] = {
		{ "Comment", "/** Whether or not this entry node should be user-editable with the function editor */" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Whether or not this entry node should be user-editable with the function editor" },
	};
#endif
	void Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_SetBit(void* Obj)
	{
		((UK2Node_EditablePinBase*)Obj)->bIsEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_EditablePinBase), &Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EditablePinBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EditablePinBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EditablePinBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EditablePinBase_Statics::ClassParams = {
		&UK2Node_EditablePinBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EditablePinBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EditablePinBase()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EditablePinBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EditablePinBase.OuterSingleton, Z_Construct_UClass_UK2Node_EditablePinBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EditablePinBase.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_EditablePinBase>()
	{
		return UK2Node_EditablePinBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EditablePinBase);
	UK2Node_EditablePinBase::~UK2Node_EditablePinBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_EditablePinBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_Statics::ScriptStructInfo[] = {
		{ FUserPinInfo::StaticStruct, Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewStructOps, TEXT("UserPinInfo"), &Z_Registration_Info_UScriptStruct_UserPinInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserPinInfo), 591110651U) },
		{ FKismetUserDeclaredFunctionMetadata::StaticStruct, Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewStructOps, TEXT("KismetUserDeclaredFunctionMetadata"), &Z_Registration_Info_UScriptStruct_KismetUserDeclaredFunctionMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKismetUserDeclaredFunctionMetadata), 3460500281U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EditablePinBase, UK2Node_EditablePinBase::StaticClass, TEXT("UK2Node_EditablePinBase"), &Z_Registration_Info_UClass_UK2Node_EditablePinBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EditablePinBase), 3047217128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_1885714142(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
