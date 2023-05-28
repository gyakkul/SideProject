// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryGraphNode_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryGraphNode_Test() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryGraphNode_Test::StaticRegisterNativesUEnvironmentQueryGraphNode_Test()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvironmentQueryGraphNode_Test);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Test::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestWeightPct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TestWeightPct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNamedWeight_MetaData[];
#endif
		static void NewProp_bHasNamedWeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNamedWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTestEnabled_MetaData[];
#endif
		static void NewProp_bTestEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvironmentQueryGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQueryGraphNode_Test.h" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode_Test.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct_MetaData[] = {
		{ "Comment", "/** weight percent for display */" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode_Test.h" },
		{ "ToolTip", "weight percent for display" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct = { "TestWeightPct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvironmentQueryGraphNode_Test, TestWeightPct), METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_MetaData[] = {
		{ "Comment", "/** weight is passed as named param */" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode_Test.h" },
		{ "ToolTip", "weight is passed as named param" },
	};
#endif
	void Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_SetBit(void* Obj)
	{
		((UEnvironmentQueryGraphNode_Test*)Obj)->bHasNamedWeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight = { "bHasNamedWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvironmentQueryGraphNode_Test), &Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_MetaData[] = {
		{ "Comment", "/** toggles test */" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode_Test.h" },
		{ "ToolTip", "toggles test" },
	};
#endif
	void Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_SetBit(void* Obj)
	{
		((UEnvironmentQueryGraphNode_Test*)Obj)->bTestEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled = { "bTestEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvironmentQueryGraphNode_Test), &Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryGraphNode_Test>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::ClassParams = {
		&UEnvironmentQueryGraphNode_Test::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test()
	{
		if (!Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Test.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Test.OuterSingleton, Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Test.OuterSingleton;
	}
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryGraphNode_Test>()
	{
		return UEnvironmentQueryGraphNode_Test::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Test);
	UEnvironmentQueryGraphNode_Test::~UEnvironmentQueryGraphNode_Test() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvironmentQueryGraphNode_Test, UEnvironmentQueryGraphNode_Test::StaticClass, TEXT("UEnvironmentQueryGraphNode_Test"), &Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvironmentQueryGraphNode_Test), 1813075208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Test_h_1617403967(TEXT("/Script/EnvironmentQueryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
