// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChooserFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooserFunctionLibrary() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserFunctionLibrary();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserFunctionLibrary_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	DEFINE_FUNCTION(UChooserFunctionLibrary::execEvaluateChooserMulti)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UChooserTable,Z_Param_ChooserTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UChooserFunctionLibrary::EvaluateChooserMulti(Z_Param_ContextObject,Z_Param_ChooserTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChooserFunctionLibrary::execEvaluateChooser)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UChooserTable,Z_Param_ChooserTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UChooserFunctionLibrary::EvaluateChooser(Z_Param_ContextObject,Z_Param_ChooserTable);
		P_NATIVE_END;
	}
	void UChooserFunctionLibrary::StaticRegisterNativesUChooserFunctionLibrary()
	{
		UClass* Class = UChooserFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateChooser", &UChooserFunctionLibrary::execEvaluateChooser },
			{ "EvaluateChooserMulti", &UChooserFunctionLibrary::execEvaluateChooserMulti },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics
	{
		struct ChooserFunctionLibrary_eventEvaluateChooser_Parms
		{
			const UObject* ContextObject;
			const UChooserTable* ChooserTable;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChooserTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChooserTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooser_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable = { "ChooserTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooser_Parms, ChooserTable), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooser_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Evaluate a chooser table and return the selected UObject, or null\n\x09*\n\x09* @param ContextObject\x09\x09\x09(in) An Object from which the parameters to the Chooser Table will be read\n\x09* @param ChooserTable\x09\x09\x09(in) The ChooserTable asset\n\x09*/" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Evaluate a chooser table and return the selected UObject, or null\n\n@param ContextObject                  (in) An Object from which the parameters to the Chooser Table will be read\n@param ChooserTable                   (in) The ChooserTable asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "EvaluateChooser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::ChooserFunctionLibrary_eventEvaluateChooser_Parms), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics
	{
		struct ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms
		{
			const UObject* ContextObject;
			const UChooserTable* ChooserTable;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChooserTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChooserTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable = { "ChooserTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms, ChooserTable), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/**\n    * Evaluate a chooser table and return the list of all selected UObjects\n    *\n    * @param ContextObject\x09\x09\x09(in) An Object from which the parameters to the Chooser Table will be read\n    * @param ChooserTable\x09\x09\x09(in) The ChooserTable asset\n    */" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Evaluate a chooser table and return the list of all selected UObjects\n\n@param ContextObject                     (in) An Object from which the parameters to the Chooser Table will be read\n@param ChooserTable                      (in) The ChooserTable asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "EvaluateChooserMulti", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserFunctionLibrary);
	UClass* Z_Construct_UClass_UChooserFunctionLibrary_NoRegister()
	{
		return UChooserFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChooserFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChooserFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser, "EvaluateChooser" }, // 3773131325
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti, "EvaluateChooserMulti" }, // 3498304629
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Morpheus Extensions Function Library\n */" },
		{ "IncludePath", "ChooserFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Morpheus Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooserFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserFunctionLibrary_Statics::ClassParams = {
		&UChooserFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChooserFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UChooserFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserFunctionLibrary.OuterSingleton, Z_Construct_UClass_UChooserFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserFunctionLibrary.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserFunctionLibrary>()
	{
		return UChooserFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserFunctionLibrary);
	UChooserFunctionLibrary::~UChooserFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserFunctionLibrary, UChooserFunctionLibrary::StaticClass, TEXT("UChooserFunctionLibrary"), &Z_Registration_Info_UClass_UChooserFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserFunctionLibrary), 2108459316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_2895638011(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
