// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/K2Node_InputDebugKey.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputDebugKey() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_InputDebugKey();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_InputDebugKey_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_InputBlueprintNodes();
// End Cross Module References
	void UK2Node_InputDebugKey::StaticRegisterNativesUK2Node_InputDebugKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InputDebugKey);
	UClass* Z_Construct_UClass_UK2Node_InputDebugKey_NoRegister()
	{
		return UK2Node_InputDebugKey::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputDebugKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bControl_MetaData[];
#endif
		static void NewProp_bControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCommand_MetaData[];
#endif
		static void NewProp_bCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputDebugKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBlueprintNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKey_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputDebugKey.h" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKey.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// The key that is bound\n" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKey.h" },
		{ "ToolTip", "The key that is bound" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_InputDebugKey, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_InputKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Should the binding execute even when the game is paused\n" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKey.h" },
		{ "ToolTip", "Should the binding execute even when the game is paused" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_InputDebugKey*)Obj)->bExecuteWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputDebugKey), &Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bControl_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// Does this binding require the control key on PC or the command key on Mac to be held\n" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKey.h" },
		{ "ToolTip", "Does this binding require the control key on PC or the command key on Mac to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bControl_SetBit(void* Obj)
	{
		((UK2Node_InputDebugKey*)Obj)->bControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bControl = { "bControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputDebugKey), &Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// Does this binding require the alt key to be held\n" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKey.h" },
		{ "ToolTip", "Does this binding require the alt key to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((UK2Node_InputDebugKey*)Obj)->bAlt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputDebugKey), &Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// Does this binding require the shift key to be held\n" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKey.h" },
		{ "ToolTip", "Does this binding require the shift key to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((UK2Node_InputDebugKey*)Obj)->bShift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputDebugKey), &Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bCommand_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// Does this binding require the windows key on PC or the control key on Mac to be held\n" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKey.h" },
		{ "ToolTip", "Does this binding require the windows key on PC or the control key on Mac to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bCommand_SetBit(void* Obj)
	{
		((UK2Node_InputDebugKey*)Obj)->bCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bCommand = { "bCommand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputDebugKey), &Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bCommand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bCommand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputDebugKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_InputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bExecuteWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bAlt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKey_Statics::NewProp_bCommand,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_InputDebugKey, IK2Node_EventNodeInterface), false },  // 152586591
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputDebugKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputDebugKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputDebugKey_Statics::ClassParams = {
		&UK2Node_InputDebugKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputDebugKey_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputDebugKey()
	{
		if (!Z_Registration_Info_UClass_UK2Node_InputDebugKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InputDebugKey.OuterSingleton, Z_Construct_UClass_UK2Node_InputDebugKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_InputDebugKey.OuterSingleton;
	}
	template<> INPUTBLUEPRINTNODES_API UClass* StaticClass<UK2Node_InputDebugKey>()
	{
		return UK2Node_InputDebugKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputDebugKey);
	UK2Node_InputDebugKey::~UK2Node_InputDebugKey() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InputDebugKey, UK2Node_InputDebugKey::StaticClass, TEXT("UK2Node_InputDebugKey"), &Z_Registration_Info_UClass_UK2Node_InputDebugKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InputDebugKey), 2910354133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKey_h_1769641111(TEXT("/Script/InputBlueprintNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
