// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_DelegateSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DelegateSet() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DelegateSet();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DelegateSet_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_DelegateSet::StaticRegisterNativesUK2Node_DelegateSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_DelegateSet);
	UClass* Z_Construct_UClass_UK2Node_DelegateSet_NoRegister()
	{
		return UK2Node_DelegateSet::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_DelegateSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DelegatePropertyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_DelegateSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DelegateSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_DelegateSet.h" },
		{ "ModuleRelativePath", "Classes/K2Node_DelegateSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "Comment", "/** Delegate property name that this event is associated with on the target */" },
		{ "ModuleRelativePath", "Classes/K2Node_DelegateSet.h" },
		{ "ToolTip", "Delegate property name that this event is associated with on the target" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_DelegateSet, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyClass_MetaData[] = {
		{ "Comment", "/** Class that the delegate property is defined in */" },
		{ "ModuleRelativePath", "Classes/K2Node_DelegateSet.h" },
		{ "ToolTip", "Class that the delegate property is defined in" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyClass = { "DelegatePropertyClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_DelegateSet, DelegatePropertyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_DelegateSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DelegateSet_Statics::NewProp_DelegatePropertyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_DelegateSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DelegateSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DelegateSet_Statics::ClassParams = {
		&UK2Node_DelegateSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_DelegateSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DelegateSet_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_DelegateSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DelegateSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_DelegateSet()
	{
		if (!Z_Registration_Info_UClass_UK2Node_DelegateSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_DelegateSet.OuterSingleton, Z_Construct_UClass_UK2Node_DelegateSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_DelegateSet.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_DelegateSet>()
	{
		return UK2Node_DelegateSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DelegateSet);
	UK2Node_DelegateSet::~UK2Node_DelegateSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DelegateSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DelegateSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_DelegateSet, UK2Node_DelegateSet::StaticClass, TEXT("UK2Node_DelegateSet"), &Z_Registration_Info_UClass_UK2Node_DelegateSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_DelegateSet), 1045962679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DelegateSet_h_1964725773(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DelegateSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DelegateSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
