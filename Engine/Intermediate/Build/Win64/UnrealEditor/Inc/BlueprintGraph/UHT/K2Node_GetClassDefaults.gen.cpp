// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetClassDefaults.h"
#include "K2Node.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetClassDefaults() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetClassDefaults();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetClassDefaults_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_GetClassDefaults::StaticRegisterNativesUK2Node_GetClassDefaults()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetClassDefaults);
	UClass* Z_Construct_UClass_UK2Node_GetClassDefaults_NoRegister()
	{
		return UK2Node_GetClassDefaults::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetClassDefaults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintSubscribedTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintSubscribedTo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowPinForProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowPinForProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowPinForProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeObjectContainers_MetaData[];
#endif
		static void NewProp_bExcludeObjectContainers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeObjectContainers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeObjectArrays_MetaData[];
#endif
		static void NewProp_bExcludeObjectArrays_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeObjectArrays;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetClassDefaults.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo_MetaData[] = {
		{ "Comment", "/** Blueprint that we subscribed OnBlueprintChangedDelegate and OnBlueprintCompiledDelegate to */" },
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Blueprint that we subscribed OnBlueprintChangedDelegate and OnBlueprintCompiledDelegate to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo = { "BlueprintSubscribedTo", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_GetClassDefaults, BlueprintSubscribedTo), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_Inner = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) }; // 3358763809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "Comment", "/** Output pin visibility control */" },
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Output pin visibility control" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_GetClassDefaults, ShowPinForProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_MetaData)) }; // 3358763809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_MetaData[] = {
		{ "Comment", "/** Whether or not to exclude object container properties */" },
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Whether or not to exclude object container properties" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_SetBit(void* Obj)
	{
		((UK2Node_GetClassDefaults*)Obj)->bExcludeObjectContainers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers = { "bExcludeObjectContainers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_GetClassDefaults), &Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_MetaData[] = {
		{ "Comment", "/** Whether or not to exclude object array properties (deprecated) */" },
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Whether or not to exclude object array properties (deprecated)" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_SetBit(void* Obj)
	{
		((UK2Node_GetClassDefaults*)Obj)->bExcludeObjectArrays_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays = { "bExcludeObjectArrays", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_GetClassDefaults), &Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetClassDefaults>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::ClassParams = {
		&UK2Node_GetClassDefaults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetClassDefaults()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetClassDefaults.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetClassDefaults.OuterSingleton, Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetClassDefaults.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetClassDefaults>()
	{
		return UK2Node_GetClassDefaults::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetClassDefaults);
	UK2Node_GetClassDefaults::~UK2Node_GetClassDefaults() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetClassDefaults_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetClassDefaults_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetClassDefaults, UK2Node_GetClassDefaults::StaticClass, TEXT("UK2Node_GetClassDefaults"), &Z_Registration_Info_UClass_UK2Node_GetClassDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetClassDefaults), 3003335009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetClassDefaults_h_3056657604(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetClassDefaults_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetClassDefaults_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
