// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_TemporaryVariable.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_TemporaryVariable() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_TemporaryVariable::StaticRegisterNativesUK2Node_TemporaryVariable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_TemporaryVariable);
	UClass* Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister()
	{
		return UK2Node_TemporaryVariable::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_TemporaryVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPersistent_MetaData[];
#endif
		static void NewProp_bIsPersistent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPersistent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_TemporaryVariable.h" },
		{ "ModuleRelativePath", "Classes/K2Node_TemporaryVariable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TemporaryVariable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_TemporaryVariable, VariableType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_MetaData[] = {
		{ "Comment", "/** Whether or not this variable should be flagged with CPF_SaveGame, and inherit its name from the GUID of the macro that that gave rise to it */" },
		{ "ModuleRelativePath", "Classes/K2Node_TemporaryVariable.h" },
		{ "ToolTip", "Whether or not this variable should be flagged with CPF_SaveGame, and inherit its name from the GUID of the macro that that gave rise to it" },
	};
#endif
	void Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_SetBit(void* Obj)
	{
		((UK2Node_TemporaryVariable*)Obj)->bIsPersistent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent = { "bIsPersistent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_TemporaryVariable), &Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_TemporaryVariable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::ClassParams = {
		&UK2Node_TemporaryVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_TemporaryVariable()
	{
		if (!Z_Registration_Info_UClass_UK2Node_TemporaryVariable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_TemporaryVariable.OuterSingleton, Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_TemporaryVariable.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_TemporaryVariable>()
	{
		return UK2Node_TemporaryVariable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_TemporaryVariable);
	UK2Node_TemporaryVariable::~UK2Node_TemporaryVariable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TemporaryVariable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TemporaryVariable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_TemporaryVariable, UK2Node_TemporaryVariable::StaticClass, TEXT("UK2Node_TemporaryVariable"), &Z_Registration_Info_UClass_UK2Node_TemporaryVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_TemporaryVariable), 2912204334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TemporaryVariable_h_3893001666(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TemporaryVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TemporaryVariable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
