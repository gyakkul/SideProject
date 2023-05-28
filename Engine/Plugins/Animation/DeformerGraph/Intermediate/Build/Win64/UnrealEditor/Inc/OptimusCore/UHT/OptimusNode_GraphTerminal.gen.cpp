// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_GraphTerminal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_GraphTerminal() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusTerminalType();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusTerminalType;
	static UEnum* EOptimusTerminalType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusTerminalType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusTerminalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusTerminalType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusTerminalType"));
		}
		return Z_Registration_Info_UEnum_EOptimusTerminalType.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusTerminalType>()
	{
		return EOptimusTerminalType_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enumerators[] = {
		{ "EOptimusTerminalType::Unknown", (int64)EOptimusTerminalType::Unknown },
		{ "EOptimusTerminalType::Entry", (int64)EOptimusTerminalType::Entry },
		{ "EOptimusTerminalType::Return", (int64)EOptimusTerminalType::Return },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enum_MetaDataParams[] = {
		{ "Entry.Name", "EOptimusTerminalType::Entry" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
		{ "Return.Name", "EOptimusTerminalType::Return" },
		{ "Unknown.Name", "EOptimusTerminalType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusTerminalType",
		"EOptimusTerminalType",
		Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusTerminalType()
	{
		if (!Z_Registration_Info_UEnum_EOptimusTerminalType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusTerminalType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusTerminalType.InnerSingleton;
	}
	void UOptimusNode_GraphTerminal::StaticRegisterNativesUOptimusNode_GraphTerminal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_GraphTerminal);
	UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal_NoRegister()
	{
		return UOptimusNode_GraphTerminal::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TerminalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerminalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TerminalType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningGraph_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_GraphTerminal.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType_MetaData[] = {
		{ "Comment", "/** Indicates whether this is an entry or a return terminal node */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
		{ "ToolTip", "Indicates whether this is an entry or a return terminal node" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType = { "TerminalType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_GraphTerminal, TerminalType), Z_Construct_UEnum_OptimusCore_EOptimusTerminalType, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType_MetaData)) }; // 3356149060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_OwningGraph_MetaData[] = {
		{ "Comment", "/** The graph that owns us. This contains all the necessary pin information to add on\n\x09 * the terminal node.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
		{ "ToolTip", "The graph that owns us. This contains all the necessary pin information to add on\nthe terminal node." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_OwningGraph = { "OwningGraph", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_GraphTerminal, OwningGraph), Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_OwningGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_OwningGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_OwningGraph,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusNodePinRouter_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GraphTerminal, IOptimusNodePinRouter), false },  // 162175867
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_GraphTerminal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::ClassParams = {
		&UOptimusNode_GraphTerminal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x010000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.OuterSingleton, Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_GraphTerminal>()
	{
		return UOptimusNode_GraphTerminal::StaticClass();
	}
	UOptimusNode_GraphTerminal::UOptimusNode_GraphTerminal() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_GraphTerminal);
	UOptimusNode_GraphTerminal::~UOptimusNode_GraphTerminal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::EnumInfo[] = {
		{ EOptimusTerminalType_StaticEnum, TEXT("EOptimusTerminalType"), &Z_Registration_Info_UEnum_EOptimusTerminalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3356149060U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_GraphTerminal, UOptimusNode_GraphTerminal::StaticClass, TEXT("UOptimusNode_GraphTerminal"), &Z_Registration_Info_UClass_UOptimusNode_GraphTerminal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_GraphTerminal), 3257383300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_2107544862(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
