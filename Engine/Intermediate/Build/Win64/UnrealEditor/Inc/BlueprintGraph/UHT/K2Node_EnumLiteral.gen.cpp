// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_EnumLiteral.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EnumLiteral() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EnumLiteral();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EnumLiteral_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_EnumLiteral::StaticRegisterNativesUK2Node_EnumLiteral()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EnumLiteral);
	UClass* Z_Construct_UClass_UK2Node_EnumLiteral_NoRegister()
	{
		return UK2Node_EnumLiteral::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EnumLiteral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EnumLiteral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnumLiteral_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EnumLiteral.h" },
		{ "ModuleRelativePath", "Classes/K2Node_EnumLiteral.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EnumLiteral.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_EnumLiteral, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EnumLiteral_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_EnumLiteral_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_EnumLiteral, INodeDependingOnEnumInterface), false },  // 2360955649
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EnumLiteral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EnumLiteral>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EnumLiteral_Statics::ClassParams = {
		&UK2Node_EnumLiteral::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EnumLiteral_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EnumLiteral()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EnumLiteral.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EnumLiteral.OuterSingleton, Z_Construct_UClass_UK2Node_EnumLiteral_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EnumLiteral.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_EnumLiteral>()
	{
		return UK2Node_EnumLiteral::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EnumLiteral);
	UK2Node_EnumLiteral::~UK2Node_EnumLiteral() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EnumLiteral_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EnumLiteral_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EnumLiteral, UK2Node_EnumLiteral::StaticClass, TEXT("UK2Node_EnumLiteral"), &Z_Registration_Info_UClass_UK2Node_EnumLiteral, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EnumLiteral), 1204745272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EnumLiteral_h_81605278(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EnumLiteral_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EnumLiteral_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
