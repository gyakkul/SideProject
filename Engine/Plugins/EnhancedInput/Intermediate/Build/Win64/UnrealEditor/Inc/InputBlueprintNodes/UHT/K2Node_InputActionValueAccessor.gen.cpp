// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/K2Node_InputActionValueAccessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputActionValueAccessor() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_InputActionValueAccessor();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_InputActionValueAccessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputBlueprintNodes();
// End Cross Module References
	void UK2Node_InputActionValueAccessor::StaticRegisterNativesUK2Node_InputActionValueAccessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InputActionValueAccessor);
	UClass* Z_Construct_UClass_UK2Node_InputActionValueAccessor_NoRegister()
	{
		return UK2Node_InputActionValueAccessor::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBlueprintNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputActionValueAccessor.h" },
		{ "ModuleRelativePath", "Private/K2Node_InputActionValueAccessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::NewProp_InputAction_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_InputActionValueAccessor.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_InputActionValueAccessor, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::NewProp_InputAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::NewProp_InputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputActionValueAccessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::ClassParams = {
		&UK2Node_InputActionValueAccessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputActionValueAccessor()
	{
		if (!Z_Registration_Info_UClass_UK2Node_InputActionValueAccessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InputActionValueAccessor.OuterSingleton, Z_Construct_UClass_UK2Node_InputActionValueAccessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_InputActionValueAccessor.OuterSingleton;
	}
	template<> INPUTBLUEPRINTNODES_API UClass* StaticClass<UK2Node_InputActionValueAccessor>()
	{
		return UK2Node_InputActionValueAccessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputActionValueAccessor);
	UK2Node_InputActionValueAccessor::~UK2Node_InputActionValueAccessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputActionValueAccessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputActionValueAccessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InputActionValueAccessor, UK2Node_InputActionValueAccessor::StaticClass, TEXT("UK2Node_InputActionValueAccessor"), &Z_Registration_Info_UClass_UK2Node_InputActionValueAccessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InputActionValueAccessor), 699137844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputActionValueAccessor_h_1805346341(TEXT("/Script/InputBlueprintNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputActionValueAccessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputActionValueAccessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
