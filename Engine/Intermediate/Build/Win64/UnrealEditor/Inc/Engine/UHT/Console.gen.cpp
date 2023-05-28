// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Console.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameViewportClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsole() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UConsole();
	ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoCompleteNode;
class UScriptStruct* FAutoCompleteNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoCompleteNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoCompleteNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AutoCompleteNode"));
	}
	return Z_Registration_Info_UScriptStruct_AutoCompleteNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAutoCompleteNode>()
{
	return FAutoCompleteNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoCompleteNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexChar_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexChar;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoCompleteListIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteListIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteListIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Node for storing an auto-complete tree based on each char in the command.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Node for storing an auto-complete tree based on each char in the command." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar_MetaData[] = {
		{ "Comment", "/** Char for node in the tree */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Char for node in the tree" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar = { "IndexChar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoCompleteNode, IndexChar), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_Inner = { "AutoCompleteListIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_MetaData[] = {
		{ "Comment", "/** Indices into AutoCompleteList for commands that match to this level */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Indices into AutoCompleteList for commands that match to this level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices = { "AutoCompleteListIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoCompleteNode, AutoCompleteListIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_IndexChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewProp_AutoCompleteListIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AutoCompleteNode",
		sizeof(FAutoCompleteNode),
		alignof(FAutoCompleteNode),
		Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoCompleteNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoCompleteNode.InnerSingleton, Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoCompleteNode.InnerSingleton;
	}
	void UConsole::StaticRegisterNativesUConsole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsole);
	UClass* Z_Construct_UClass_UConsole_NoRegister()
	{
		return UConsole::StaticClass();
	}
	struct Z_Construct_UClass_UConsole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleTargetPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConsoleTargetPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_Black_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultTexture_Black;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_White_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultTexture_White;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HistoryBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistoryBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HistoryBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A basic command line console that accepts most commands.\n */" },
		{ "IncludePath", "Engine/Console.h" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "A basic command line console that accepts most commands." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer_MetaData[] = {
		{ "Comment", "/** The player which the next console command should be executed in the context of.  If nullptr, execute in the viewport. */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "The player which the next console command should be executed in the context of.  If nullptr, execute in the viewport." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer = { "ConsoleTargetPlayer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsole, ConsoleTargetPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black = { "DefaultTexture_Black", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsole, DefaultTexture_Black), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White = { "DefaultTexture_White", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsole, DefaultTexture_White), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_Inner = { "HistoryBuffer", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_MetaData[] = {
		{ "Comment", "/** Holds the history buffer, order is old to new */" },
		{ "ModuleRelativePath", "Classes/Engine/Console.h" },
		{ "ToolTip", "Holds the history buffer, order is old to new" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer = { "HistoryBuffer", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsole, HistoryBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_ConsoleTargetPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_Black,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_DefaultTexture_White,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsole_Statics::NewProp_HistoryBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsole_Statics::ClassParams = {
		&UConsole::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsole_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsole()
	{
		if (!Z_Registration_Info_UClass_UConsole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsole.OuterSingleton, Z_Construct_UClass_UConsole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConsole.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UConsole>()
	{
		return UConsole::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsole);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ScriptStructInfo[] = {
		{ FAutoCompleteNode::StaticStruct, Z_Construct_UScriptStruct_FAutoCompleteNode_Statics::NewStructOps, TEXT("AutoCompleteNode"), &Z_Registration_Info_UScriptStruct_AutoCompleteNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoCompleteNode), 470139460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConsole, UConsole::StaticClass, TEXT("UConsole"), &Z_Registration_Info_UClass_UConsole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsole), 2972000810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_3155555717(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
