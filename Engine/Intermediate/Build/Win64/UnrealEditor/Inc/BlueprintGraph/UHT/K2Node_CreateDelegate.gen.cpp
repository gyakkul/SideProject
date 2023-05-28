// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_CreateDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CreateDelegate() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CreateDelegate();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CreateDelegate_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_CreateDelegate::StaticRegisterNativesUK2Node_CreateDelegate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_CreateDelegate);
	UClass* Z_Construct_UClass_UK2Node_CreateDelegate_NoRegister()
	{
		return UK2Node_CreateDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CreateDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFunctionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedFunctionGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CreateDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateDelegate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CreateDelegate.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CreateDelegate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName_MetaData[] = {
		{ "BlueprintSearchable", "true" },
		{ "ModuleRelativePath", "Classes/K2Node_CreateDelegate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName = { "SelectedFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CreateDelegate, SelectedFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CreateDelegate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid = { "SelectedFunctionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CreateDelegate, SelectedFunctionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CreateDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CreateDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CreateDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CreateDelegate_Statics::ClassParams = {
		&UK2Node_CreateDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CreateDelegate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CreateDelegate()
	{
		if (!Z_Registration_Info_UClass_UK2Node_CreateDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CreateDelegate.OuterSingleton, Z_Construct_UClass_UK2Node_CreateDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_CreateDelegate.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CreateDelegate>()
	{
		return UK2Node_CreateDelegate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CreateDelegate);
	UK2Node_CreateDelegate::~UK2Node_CreateDelegate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CreateDelegate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CreateDelegate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CreateDelegate, UK2Node_CreateDelegate::StaticClass, TEXT("UK2Node_CreateDelegate"), &Z_Registration_Info_UClass_UK2Node_CreateDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CreateDelegate), 2087996527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CreateDelegate_h_1093541399(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CreateDelegate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CreateDelegate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
