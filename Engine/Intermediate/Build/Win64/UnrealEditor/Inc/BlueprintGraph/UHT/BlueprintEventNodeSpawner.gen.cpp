// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintEventNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEventNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintEventNodeSpawner::StaticRegisterNativesUBlueprintEventNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintEventNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner_NoRegister()
	{
		return UBlueprintEventNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventFunc_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning UK2Node_Event nodes. Acts as the \"action\" portion of\n * certain FBlueprintActionMenuItems. Will not spawn a new event node if one\n * associated with the specified function already exits (instead, Invoke() will\n * return the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and \n * FEdGraphSchemaAction_K2ViewNode.\n */" },
		{ "IncludePath", "BlueprintEventNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintEventNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning UK2Node_Event nodes. Acts as the \"action\" portion of\ncertain FBlueprintActionMenuItems. Will not spawn a new event node if one\nassociated with the specified function already exits (instead, Invoke() will\nreturn the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and\nFEdGraphSchemaAction_K2ViewNode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc_MetaData[] = {
		{ "Comment", "/** The function to configure new nodes with. */" },
		{ "ModuleRelativePath", "Classes/BlueprintEventNodeSpawner.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The function to configure new nodes with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc = { "EventFunc", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEventNodeSpawner, EventFunc), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName_MetaData[] = {
		{ "Comment", "/** The custom name to configure new event nodes with. */" },
		{ "ModuleRelativePath", "Classes/BlueprintEventNodeSpawner.h" },
		{ "ToolTip", "The custom name to configure new event nodes with." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName = { "CustomEventName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEventNodeSpawner, CustomEventName), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEventNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::ClassParams = {
		&UBlueprintEventNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintEventNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintEventNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintEventNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintEventNodeSpawner>()
	{
		return UBlueprintEventNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEventNodeSpawner);
	UBlueprintEventNodeSpawner::~UBlueprintEventNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintEventNodeSpawner, UBlueprintEventNodeSpawner::StaticClass, TEXT("UBlueprintEventNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintEventNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintEventNodeSpawner), 3319339728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_3197831172(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
