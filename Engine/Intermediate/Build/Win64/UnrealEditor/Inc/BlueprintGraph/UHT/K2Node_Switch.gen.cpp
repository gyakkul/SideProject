// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Switch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Switch() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_Switch::StaticRegisterNativesUK2Node_Switch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Switch);
	UClass* Z_Construct_UClass_UK2Node_Switch_NoRegister()
	{
		return UK2Node_Switch::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Switch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultPin_MetaData[];
#endif
		static void NewProp_bHasDefaultPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FunctionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Switch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Switch.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "Comment", "/** If true switch has a default pin */" },
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
		{ "ToolTip", "If true switch has a default pin" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_SetBit(void* Obj)
	{
		((UK2Node_Switch*)Obj)->bHasDefaultPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin = { "bHasDefaultPin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Switch), &Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Comment", "/* The function underpining the switch, if required */" },
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
		{ "ToolTip", "The function underpining the switch, if required" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Switch, FunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass_MetaData[] = {
		{ "Comment", "/** The class that the function is from. */" },
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
		{ "ToolTip", "The class that the function is from." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass = { "FunctionClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Switch, FunctionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Switch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Switch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Switch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Switch_Statics::ClassParams = {
		&UK2Node_Switch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Switch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Switch()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Switch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Switch.OuterSingleton, Z_Construct_UClass_UK2Node_Switch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Switch.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Switch>()
	{
		return UK2Node_Switch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Switch);
	UK2Node_Switch::~UK2Node_Switch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Switch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Switch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Switch, UK2Node_Switch::StaticClass, TEXT("UK2Node_Switch"), &Z_Registration_Info_UClass_UK2Node_Switch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Switch), 2427163740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Switch_h_1540233311(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Switch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Switch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
