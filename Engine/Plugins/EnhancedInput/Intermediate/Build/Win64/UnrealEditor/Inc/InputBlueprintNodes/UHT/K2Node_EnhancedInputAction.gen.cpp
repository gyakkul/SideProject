// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_EnhancedInputAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EnhancedInputAction() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_EnhancedInputAction();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_EnhancedInputAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputBlueprintNodes();
// End Cross Module References
	void UK2Node_EnhancedInputAction::StaticRegisterNativesUK2Node_EnhancedInputAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EnhancedInputAction);
	UClass* Z_Construct_UClass_UK2Node_EnhancedInputAction_NoRegister()
	{
		return UK2Node_EnhancedInputAction::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBlueprintNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EnhancedInputAction.h" },
		{ "ModuleRelativePath", "Public/K2Node_EnhancedInputAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_EnhancedInputAction.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_EnhancedInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::NewProp_InputAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::NewProp_InputAction,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_EnhancedInputAction, IK2Node_EventNodeInterface), false },  // 152586591
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EnhancedInputAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::ClassParams = {
		&UK2Node_EnhancedInputAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EnhancedInputAction()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EnhancedInputAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EnhancedInputAction.OuterSingleton, Z_Construct_UClass_UK2Node_EnhancedInputAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EnhancedInputAction.OuterSingleton;
	}
	template<> INPUTBLUEPRINTNODES_API UClass* StaticClass<UK2Node_EnhancedInputAction>()
	{
		return UK2Node_EnhancedInputAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EnhancedInputAction);
	UK2Node_EnhancedInputAction::~UK2Node_EnhancedInputAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Public_K2Node_EnhancedInputAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Public_K2Node_EnhancedInputAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EnhancedInputAction, UK2Node_EnhancedInputAction::StaticClass, TEXT("UK2Node_EnhancedInputAction"), &Z_Registration_Info_UClass_UK2Node_EnhancedInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EnhancedInputAction), 3566448560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Public_K2Node_EnhancedInputAction_h_3908359558(TEXT("/Script/InputBlueprintNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Public_K2Node_EnhancedInputAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Public_K2Node_EnhancedInputAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
