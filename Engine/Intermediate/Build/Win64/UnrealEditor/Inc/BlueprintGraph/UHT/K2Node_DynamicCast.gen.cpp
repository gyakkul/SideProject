// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_DynamicCast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DynamicCast() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DynamicCast();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DynamicCast_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_DynamicCast::StaticRegisterNativesUK2Node_DynamicCast()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_DynamicCast);
	UClass* Z_Construct_UClass_UK2Node_DynamicCast_NoRegister()
	{
		return UK2Node_DynamicCast::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_DynamicCast_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPureCast_MetaData[];
#endif
		static void NewProp_bIsPureCast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPureCast;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_DynamicCast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DynamicCast_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_DynamicCast.h" },
		{ "ModuleRelativePath", "Classes/K2Node_DynamicCast.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType_MetaData[] = {
		{ "Comment", "/** The type that the input should try to be cast to */" },
		{ "ModuleRelativePath", "Classes/K2Node_DynamicCast.h" },
		{ "ToolTip", "The type that the input should try to be cast to" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_DynamicCast, TargetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_DynamicCast.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_SetBit(void* Obj)
	{
		((UK2Node_DynamicCast*)Obj)->bIsPureCast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast = { "bIsPureCast", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_DynamicCast), &Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_DynamicCast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_DynamicCast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DynamicCast>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DynamicCast_Statics::ClassParams = {
		&UK2Node_DynamicCast::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_DynamicCast_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_DynamicCast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_DynamicCast()
	{
		if (!Z_Registration_Info_UClass_UK2Node_DynamicCast.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_DynamicCast.OuterSingleton, Z_Construct_UClass_UK2Node_DynamicCast_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_DynamicCast.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_DynamicCast>()
	{
		return UK2Node_DynamicCast::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DynamicCast);
	UK2Node_DynamicCast::~UK2Node_DynamicCast() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DynamicCast_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DynamicCast_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_DynamicCast, UK2Node_DynamicCast::StaticClass, TEXT("UK2Node_DynamicCast"), &Z_Registration_Info_UClass_UK2Node_DynamicCast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_DynamicCast), 3935218842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DynamicCast_h_1750891951(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DynamicCast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DynamicCast_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
