// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Select.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Select() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Select();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Select_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_Select::StaticRegisterNativesUK2Node_Select()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Select);
	UClass* Z_Construct_UClass_UK2Node_Select_NoRegister()
	{
		return UK2Node_Select::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Select_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOptionPins_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOptionPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexPinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexPinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnumEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumEntries;
		static const UECodeGen_Private::FTextPropertyParams NewProp_EnumEntryFriendlyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumEntryFriendlyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumEntryFriendlyNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReconstructNode_MetaData[];
#endif
		static void NewProp_bReconstructNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReconstructNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Select_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Select.h" },
		{ "Keywords", "Ternary Select" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins_MetaData[] = {
		{ "Comment", "/** The number of selectable options this node currently has */" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "The number of selectable options this node currently has" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins = { "NumOptionPins", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Select, NumOptionPins), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType_MetaData[] = {
		{ "Comment", "/** The pin type of the index pin */" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "The pin type of the index pin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType = { "IndexPinType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Select, IndexPinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum_MetaData[] = {
		{ "Comment", "/** Name of the enum being switched on */" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "Name of the enum being switched on" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Select, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_Inner = { "EnumEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_MetaData[] = {
		{ "Comment", "/** List of the current entries in the enum (Pin Names) */" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "List of the current entries in the enum (Pin Names)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries = { "EnumEntries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Select, EnumEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_Inner = { "EnumEntryFriendlyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_MetaData[] = {
		{ "Comment", "/** List of the current entries in the enum (Pin Friendly Names) */" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "List of the current entries in the enum (Pin Friendly Names)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames = { "EnumEntryFriendlyNames", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Select, EnumEntryFriendlyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_MetaData[] = {
		{ "Comment", "/** Whether we need to reconstruct the node after the pins have changed */" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "Whether we need to reconstruct the node after the pins have changed" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_SetBit(void* Obj)
	{
		((UK2Node_Select*)Obj)->bReconstructNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode = { "bReconstructNode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Select), &Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Select_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_Select_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_Select, INodeDependingOnEnumInterface), false },  // 2360955649
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_Select, IK2Node_AddPinInterface), false },  // 1388788643
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Select_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Select>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Select_Statics::ClassParams = {
		&UK2Node_Select::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Select_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Select()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Select.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Select.OuterSingleton, Z_Construct_UClass_UK2Node_Select_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Select.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Select>()
	{
		return UK2Node_Select::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Select);
	UK2Node_Select::~UK2Node_Select() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Select, UK2Node_Select::StaticClass, TEXT("UK2Node_Select"), &Z_Registration_Info_UClass_UK2Node_Select, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Select), 2373547119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_3191486968(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
