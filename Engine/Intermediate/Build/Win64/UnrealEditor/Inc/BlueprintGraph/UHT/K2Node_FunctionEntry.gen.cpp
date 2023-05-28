// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_FunctionEntry.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
#include "K2Node_EditablePinBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_FunctionEntry() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionEntry();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionEntry_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionTerminator();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_FunctionEntry::StaticRegisterNativesUK2Node_FunctionEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_FunctionEntry);
	UClass* Z_Construct_UClass_UK2Node_FunctionEntry_NoRegister()
	{
		return UK2Node_FunctionEntry::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_FunctionEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomGeneratedFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomGeneratedFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceConstCorrectness_MetaData[];
#endif
		static void NewProp_bEnforceConstCorrectness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceConstCorrectness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExtraFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_FunctionEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_FunctionTerminator,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_FunctionEntry.h" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName_MetaData[] = {
		{ "Comment", "/** If specified, the function that is created for this entry point will have this name.  Otherwise, it will have the function signature's name */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "If specified, the function that is created for this entry point will have this name.  Otherwise, it will have the function signature's name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName = { "CustomGeneratedFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FunctionEntry, CustomGeneratedFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData_MetaData[] = {
		{ "Comment", "/** Function metadata */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Function metadata" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FunctionEntry, MetaData), Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData_MetaData)) }; // 3460500281
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_Inner = { "LocalVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 1436727657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_MetaData[] = {
		{ "Comment", "/** Array of local variables to be added to generated function */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Array of local variables to be added to generated function" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables = { "LocalVariables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FunctionEntry, LocalVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_MetaData)) }; // 1436727657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_MetaData[] = {
		{ "Comment", "/** Whether or not to enforce const-correctness for const function overrides */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Whether or not to enforce const-correctness for const function overrides" },
	};
#endif
	void Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_SetBit(void* Obj)
	{
		((UK2Node_FunctionEntry*)Obj)->bEnforceConstCorrectness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness = { "bEnforceConstCorrectness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_FunctionEntry), &Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags_MetaData[] = {
		{ "Comment", "/** Any extra flags that the function may need */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Any extra flags that the function may need" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags = { "ExtraFlags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FunctionEntry, ExtraFlags), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_FunctionEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_FunctionEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_FunctionEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::ClassParams = {
		&UK2Node_FunctionEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_FunctionEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_FunctionEntry()
	{
		if (!Z_Registration_Info_UClass_UK2Node_FunctionEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_FunctionEntry.OuterSingleton, Z_Construct_UClass_UK2Node_FunctionEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_FunctionEntry.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_FunctionEntry>()
	{
		return UK2Node_FunctionEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_FunctionEntry);
	UK2Node_FunctionEntry::~UK2Node_FunctionEntry() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_FunctionEntry)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_FunctionEntry, UK2Node_FunctionEntry::StaticClass, TEXT("UK2Node_FunctionEntry"), &Z_Registration_Info_UClass_UK2Node_FunctionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_FunctionEntry), 2373570260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_3493940651(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
