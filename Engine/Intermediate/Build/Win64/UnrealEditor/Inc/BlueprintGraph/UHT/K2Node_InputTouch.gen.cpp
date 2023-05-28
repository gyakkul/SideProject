// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_InputTouch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputTouch() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputTouch();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputTouch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_InputTouch::StaticRegisterNativesUK2Node_InputTouch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InputTouch);
	UClass* Z_Construct_UClass_UK2Node_InputTouch_NoRegister()
	{
		return UK2Node_InputTouch::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputTouch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideParentBinding_MetaData[];
#endif
		static void NewProp_bOverrideParentBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParentBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputTouch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputTouch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputTouch.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InputTouch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Prevents actors with lower priority from handling this input\n" },
		{ "ModuleRelativePath", "Classes/K2Node_InputTouch.h" },
		{ "ToolTip", "Prevents actors with lower priority from handling this input" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UK2Node_InputTouch*)Obj)->bConsumeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputTouch), &Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bConsumeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Should the binding execute even when the game is paused\n" },
		{ "ModuleRelativePath", "Classes/K2Node_InputTouch.h" },
		{ "ToolTip", "Should the binding execute even when the game is paused" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_InputTouch*)Obj)->bExecuteWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputTouch), &Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bOverrideParentBinding_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Should any bindings to this event in parent classes be removed\n" },
		{ "ModuleRelativePath", "Classes/K2Node_InputTouch.h" },
		{ "ToolTip", "Should any bindings to this event in parent classes be removed" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
	{
		((UK2Node_InputTouch*)Obj)->bOverrideParentBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputTouch), &Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bOverrideParentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bOverrideParentBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputTouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bConsumeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bExecuteWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputTouch_Statics::NewProp_bOverrideParentBinding,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_InputTouch_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_InputTouch, IK2Node_EventNodeInterface), false },  // 152586591
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputTouch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputTouch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputTouch_Statics::ClassParams = {
		&UK2Node_InputTouch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputTouch_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputTouch_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputTouch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputTouch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputTouch()
	{
		if (!Z_Registration_Info_UClass_UK2Node_InputTouch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InputTouch.OuterSingleton, Z_Construct_UClass_UK2Node_InputTouch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_InputTouch.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_InputTouch>()
	{
		return UK2Node_InputTouch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputTouch);
	UK2Node_InputTouch::~UK2Node_InputTouch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputTouch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputTouch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InputTouch, UK2Node_InputTouch::StaticClass, TEXT("UK2Node_InputTouch"), &Z_Registration_Info_UClass_UK2Node_InputTouch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InputTouch), 1980401040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputTouch_h_1446649784(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputTouch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputTouch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
