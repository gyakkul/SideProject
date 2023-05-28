// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepRecipe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepRecipe() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDEPRECATED_DataprepRecipe();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDEPRECATED_DataprepRecipe_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_DataprepRecipe::execGetAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_DataprepRecipe::execGetActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActors();
		P_NATIVE_END;
	}
	static FName NAME_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal = FName(TEXT("TriggerPipelineTraversal"));
	void UDEPRECATED_DataprepRecipe::TriggerPipelineTraversal()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal),NULL);
	}
	void UDEPRECATED_DataprepRecipe::StaticRegisterNativesUDEPRECATED_DataprepRecipe()
	{
		UClass* Class = UDEPRECATED_DataprepRecipe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActors", &UDEPRECATED_DataprepRecipe::execGetActors },
			{ "GetAssets", &UDEPRECATED_DataprepRecipe::execGetAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics
	{
		struct DataprepRecipe_eventGetActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepRecipe_eventGetActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Query" },
		{ "Comment", "/**\n\x09 * DEPRECATED\n\x09 * Returns all actors contained in its attached world\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "No use of Blueprint with Dataprep." },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepRecipe.h" },
		{ "ToolTip", "DEPRECATED\nReturns all actors contained in its attached world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataprepRecipe, nullptr, "GetActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::DataprepRecipe_eventGetActors_Parms), Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics
	{
		struct DataprepRecipe_eventGetAssets_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepRecipe_eventGetAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Query" },
		{ "Comment", "/**\n\x09 * DEPRECATED\n\x09 * Returns all valid assets contained in attached world\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "No use of Blueprint with Dataprep." },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepRecipe.h" },
		{ "ToolTip", "DEPRECATED\nReturns all valid assets contained in attached world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataprepRecipe, nullptr, "GetAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::DataprepRecipe_eventGetAssets_Parms), Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * DEPRECATED\n\x09 * Function used to trigger the execution of the pipeline\n\x09 * An event node associated to this function must be in the pipeline graph to run it.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "No use of Blueprint with Dataprep." },
		{ "ModuleRelativePath", "Public/DataprepRecipe.h" },
		{ "ToolTip", "DEPRECATED\nFunction used to trigger the execution of the pipeline\nAn event node associated to this function must be in the pipeline graph to run it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataprepRecipe, nullptr, "TriggerPipelineTraversal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_DataprepRecipe);
	UClass* Z_Construct_UClass_UDEPRECATED_DataprepRecipe_NoRegister()
	{
		return UDEPRECATED_DataprepRecipe::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetActors, "GetActors" }, // 458153196
		{ &Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_GetAssets, "GetAssets" }, // 3526504477
		{ &Z_Construct_UFunction_UDEPRECATED_DataprepRecipe_TriggerPipelineTraversal, "TriggerPipelineTraversal" }, // 2752417904
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DeprecationMessage", "No use of Blueprint with Dataprep." },
		{ "DisplayName", "DEPRECATED Data Preparation Recipe" },
		{ "IncludePath", "DataprepRecipe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataprepRecipe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_DataprepRecipe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::ClassParams = {
		&UDEPRECATED_DataprepRecipe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_DataprepRecipe()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_DataprepRecipe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_DataprepRecipe.OuterSingleton, Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_DataprepRecipe.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDEPRECATED_DataprepRecipe>()
	{
		return UDEPRECATED_DataprepRecipe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_DataprepRecipe);
	UDEPRECATED_DataprepRecipe::~UDEPRECATED_DataprepRecipe() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_DataprepRecipe, UDEPRECATED_DataprepRecipe::StaticClass, TEXT("UDEPRECATED_DataprepRecipe"), &Z_Registration_Info_UClass_UDEPRECATED_DataprepRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_DataprepRecipe), 746668258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_3753997041(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
