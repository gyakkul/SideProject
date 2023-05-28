// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_LocalVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LocalVariable() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UDEPRECATED_K2Node_LocalVariable::StaticRegisterNativesUDEPRECATED_K2Node_LocalVariable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_K2Node_LocalVariable);
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_NoRegister()
	{
		return UDEPRECATED_K2Node_LocalVariable::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_VariableTooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_TemporaryVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_LocalVariable.h" },
		{ "ModuleRelativePath", "Classes/K2Node_LocalVariable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_CustomVariableName_MetaData[] = {
		{ "Comment", "/** If this is not an override, allow user to specify a name for the function created by this entry point */" },
		{ "ModuleRelativePath", "Classes/K2Node_LocalVariable.h" },
		{ "ToolTip", "If this is not an override, allow user to specify a name for the function created by this entry point" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_CustomVariableName = { "CustomVariableName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_K2Node_LocalVariable, CustomVariableName), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_CustomVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_CustomVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_VariableTooltip_MetaData[] = {
		{ "Comment", "/** The local variable's assigned tooltip */" },
		{ "ModuleRelativePath", "Classes/K2Node_LocalVariable.h" },
		{ "ToolTip", "The local variable's assigned tooltip" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_VariableTooltip = { "VariableTooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_K2Node_LocalVariable, VariableTooltip), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_VariableTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_VariableTooltip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_CustomVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::NewProp_VariableTooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_K2Node_LocalVariable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::ClassParams = {
		&UDEPRECATED_K2Node_LocalVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::PropPointers),
		0,
		0x020802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_K2Node_LocalVariable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_K2Node_LocalVariable.OuterSingleton, Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_K2Node_LocalVariable.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UDEPRECATED_K2Node_LocalVariable>()
	{
		return UDEPRECATED_K2Node_LocalVariable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_K2Node_LocalVariable);
	UDEPRECATED_K2Node_LocalVariable::~UDEPRECATED_K2Node_LocalVariable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_LocalVariable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_LocalVariable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_K2Node_LocalVariable, UDEPRECATED_K2Node_LocalVariable::StaticClass, TEXT("UDEPRECATED_K2Node_LocalVariable"), &Z_Registration_Info_UClass_UDEPRECATED_K2Node_LocalVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_K2Node_LocalVariable), 2604624973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_LocalVariable_h_2464080886(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_LocalVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_LocalVariable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
