// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_CastPatchToType.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CastPatchToType() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	DMXBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType();
	DMXBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXBlueprintGraph();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_K2Node_CastPatchToType::execResetAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_K2Node_CastPatchToType::execExposeAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExposeAttributes();
		P_NATIVE_END;
	}
	void UDEPRECATED_K2Node_CastPatchToType::StaticRegisterNativesUDEPRECATED_K2Node_CastPatchToType()
	{
		UClass* Class = UDEPRECATED_K2Node_CastPatchToType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExposeAttributes", &UDEPRECATED_K2Node_CastPatchToType::execExposeAttributes },
			{ "ResetAttributes", &UDEPRECATED_K2Node_CastPatchToType::execResetAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K2Node_CastPatchToType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType, nullptr, "ExposeAttributes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K2Node_CastPatchToType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType, nullptr, "ResetAttributes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_K2Node_CastPatchToType);
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_NoRegister()
	{
		return UDEPRECATED_K2Node_CastPatchToType::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExposed_MetaData[];
#endif
		static void NewProp_bIsExposed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExposed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXBlueprintGraph,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ExposeAttributes, "ExposeAttributes" }, // 3094574563
		{ &Z_Construct_UFunction_UDEPRECATED_K2Node_CastPatchToType_ResetAttributes, "ResetAttributes" }, // 4096338749
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* k2Node that checks if a FixturePatch is of a given FixtureType, and if it succeed, lets you\n* grab the function values from the patch\n*/" },
		{ "IncludePath", "K2Node_CastPatchToType.h" },
		{ "ModuleRelativePath", "Public/K2Node_CastPatchToType.h" },
		{ "ToolTip", "k2Node that checks if a FixturePatch is of a given FixtureType, and if it succeed, lets you\ngrab the function values from the patch" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::NewProp_bIsExposed_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_CastPatchToType.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::NewProp_bIsExposed_SetBit(void* Obj)
	{
		((UDEPRECATED_K2Node_CastPatchToType*)Obj)->bIsExposed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::NewProp_bIsExposed = { "bIsExposed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_K2Node_CastPatchToType), &Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::NewProp_bIsExposed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::NewProp_bIsExposed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::NewProp_bIsExposed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::NewProp_bIsExposed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_K2Node_CastPatchToType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::ClassParams = {
		&UDEPRECATED_K2Node_CastPatchToType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::PropPointers),
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_K2Node_CastPatchToType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_K2Node_CastPatchToType.OuterSingleton, Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_K2Node_CastPatchToType.OuterSingleton;
	}
	template<> DMXBLUEPRINTGRAPH_API UClass* StaticClass<UDEPRECATED_K2Node_CastPatchToType>()
	{
		return UDEPRECATED_K2Node_CastPatchToType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_K2Node_CastPatchToType);
	UDEPRECATED_K2Node_CastPatchToType::~UDEPRECATED_K2Node_CastPatchToType() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDEPRECATED_K2Node_CastPatchToType)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_CastPatchToType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_CastPatchToType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_K2Node_CastPatchToType, UDEPRECATED_K2Node_CastPatchToType::StaticClass, TEXT("UDEPRECATED_K2Node_CastPatchToType"), &Z_Registration_Info_UClass_UDEPRECATED_K2Node_CastPatchToType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_K2Node_CastPatchToType), 880591364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_CastPatchToType_h_1700780126(TEXT("/Script/DMXBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_CastPatchToType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_CastPatchToType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
