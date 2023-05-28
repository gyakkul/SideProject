// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_PropertyAccess.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_PropertyAccess() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UClassVariableCreator_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	PROPERTYACCESSNODE_API UClass* Z_Construct_UClass_UK2Node_PropertyAccess();
	PROPERTYACCESSNODE_API UClass* Z_Construct_UClass_UK2Node_PropertyAccess_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PropertyAccessNode();
// End Cross Module References
	void UK2Node_PropertyAccess::StaticRegisterNativesUK2Node_PropertyAccess()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_PropertyAccess);
	UClass* Z_Construct_UClass_UK2Node_PropertyAccess_NoRegister()
	{
		return UK2Node_PropertyAccess::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_PropertyAccess_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextPath_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedPinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedPinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GeneratedPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_PropertyAccess_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccessNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PropertyAccess_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_PropertyAccess.h" },
		{ "ModuleRelativePath", "Private/K2Node_PropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** Path that this access exposes */" },
		{ "ModuleRelativePath", "Private/K2Node_PropertyAccess.h" },
		{ "ToolTip", "Path that this access exposes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_PropertyAccess, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_TextPath_MetaData[] = {
		{ "Comment", "/** Path as text, for display */" },
		{ "ModuleRelativePath", "Private/K2Node_PropertyAccess.h" },
		{ "ToolTip", "Path as text, for display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_TextPath = { "TextPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_PropertyAccess, TextPath), METADATA_PARAMS(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_TextPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_TextPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ResolvedPinType_MetaData[] = {
		{ "Comment", "/** Resolved pin type */" },
		{ "ModuleRelativePath", "Private/K2Node_PropertyAccess.h" },
		{ "ToolTip", "Resolved pin type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ResolvedPinType = { "ResolvedPinType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_PropertyAccess, ResolvedPinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ResolvedPinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ResolvedPinType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_GeneratedPropertyName_MetaData[] = {
		{ "Comment", "/** Generated property created during compilation */" },
		{ "ModuleRelativePath", "Private/K2Node_PropertyAccess.h" },
		{ "ToolTip", "Generated property created during compilation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_GeneratedPropertyName = { "GeneratedPropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_PropertyAccess, GeneratedPropertyName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_GeneratedPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_GeneratedPropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ContextId_MetaData[] = {
		{ "Comment", "/** Property access context (set by the user) that is intended to be used */" },
		{ "ModuleRelativePath", "Private/K2Node_PropertyAccess.h" },
		{ "ToolTip", "Property access context (set by the user) that is intended to be used" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_PropertyAccess, ContextId), METADATA_PARAMS(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ContextId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ContextId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_PropertyAccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_TextPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ResolvedPinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_GeneratedPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_PropertyAccess_Statics::NewProp_ContextId,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UClassVariableCreator_NoRegister, (int32)VTABLE_OFFSET(UK2Node_PropertyAccess, IClassVariableCreator), false },  // 2394176608
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_PropertyAccess_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_PropertyAccess>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_PropertyAccess_Statics::ClassParams = {
		&UK2Node_PropertyAccess::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_PropertyAccess_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PropertyAccess_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_PropertyAccess()
	{
		if (!Z_Registration_Info_UClass_UK2Node_PropertyAccess.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_PropertyAccess.OuterSingleton, Z_Construct_UClass_UK2Node_PropertyAccess_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_PropertyAccess.OuterSingleton;
	}
	template<> PROPERTYACCESSNODE_API UClass* StaticClass<UK2Node_PropertyAccess>()
	{
		return UK2Node_PropertyAccess::StaticClass();
	}
	UK2Node_PropertyAccess::UK2Node_PropertyAccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_PropertyAccess);
	UK2Node_PropertyAccess::~UK2Node_PropertyAccess() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PropertyAccessNode_Source_PropertyAccessNode_Private_K2Node_PropertyAccess_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PropertyAccessNode_Source_PropertyAccessNode_Private_K2Node_PropertyAccess_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_PropertyAccess, UK2Node_PropertyAccess::StaticClass, TEXT("UK2Node_PropertyAccess"), &Z_Registration_Info_UClass_UK2Node_PropertyAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_PropertyAccess), 2291646892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PropertyAccessNode_Source_PropertyAccessNode_Private_K2Node_PropertyAccess_h_2854679282(TEXT("/Script/PropertyAccessNode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PropertyAccessNode_Source_PropertyAccessNode_Private_K2Node_PropertyAccess_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PropertyAccessNode_Source_PropertyAccessNode_Private_K2Node_PropertyAccess_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
