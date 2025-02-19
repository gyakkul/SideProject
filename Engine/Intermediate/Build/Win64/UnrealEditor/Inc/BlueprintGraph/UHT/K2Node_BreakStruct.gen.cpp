// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_BreakStruct.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_BreakStruct() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BreakStruct();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BreakStruct_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructMemberGet();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_BreakStruct::StaticRegisterNativesUK2Node_BreakStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_BreakStruct);
	UClass* Z_Construct_UClass_UK2Node_BreakStruct_NoRegister()
	{
		return UK2Node_BreakStruct::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_BreakStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMadeAfterOverridePinRemoval_MetaData[];
#endif
		static void NewProp_bMadeAfterOverridePinRemoval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMadeAfterOverridePinRemoval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_BreakStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_StructMemberGet,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BreakStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_BreakStruct.h" },
		{ "ModuleRelativePath", "Classes/K2Node_BreakStruct.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_MetaData[] = {
		{ "Comment", "/** Helper property to handle upgrades from an old system of displaying pins for\n\x09*\x09the override values that properties referenced as a conditional of being set in a struct */" },
		{ "ModuleRelativePath", "Classes/K2Node_BreakStruct.h" },
		{ "ToolTip", "Helper property to handle upgrades from an old system of displaying pins for\n     the override values that properties referenced as a conditional of being set in a struct" },
	};
#endif
	void Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_SetBit(void* Obj)
	{
		((UK2Node_BreakStruct*)Obj)->bMadeAfterOverridePinRemoval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval = { "bMadeAfterOverridePinRemoval", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_BreakStruct), &Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_BreakStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_BreakStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BreakStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BreakStruct_Statics::ClassParams = {
		&UK2Node_BreakStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_BreakStruct_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BreakStruct_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_BreakStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BreakStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_BreakStruct()
	{
		if (!Z_Registration_Info_UClass_UK2Node_BreakStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_BreakStruct.OuterSingleton, Z_Construct_UClass_UK2Node_BreakStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_BreakStruct.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_BreakStruct>()
	{
		return UK2Node_BreakStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BreakStruct);
	UK2Node_BreakStruct::~UK2Node_BreakStruct() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_BreakStruct)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BreakStruct_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BreakStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_BreakStruct, UK2Node_BreakStruct::StaticClass, TEXT("UK2Node_BreakStruct"), &Z_Registration_Info_UClass_UK2Node_BreakStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_BreakStruct), 1318989420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BreakStruct_h_2259473378(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BreakStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BreakStruct_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
