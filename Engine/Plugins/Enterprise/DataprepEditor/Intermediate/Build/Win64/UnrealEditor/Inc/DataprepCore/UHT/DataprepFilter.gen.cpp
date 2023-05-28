// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepFilter() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFetcher_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilter_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilterNoFetcher();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilterNoFetcher_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	DEFINE_FUNCTION(UDataprepFilter::execGetFetcher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepFetcher**)Z_Param__Result=P_THIS->GetFetcher();
		P_NATIVE_END;
	}
	void UDataprepFilter::StaticRegisterNativesUDataprepFilter()
	{
		UClass* Class = UDataprepFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFetcher", &UDataprepFilter::execGetFetcher },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics
	{
		struct DataprepFilter_eventGetFetcher_Parms
		{
			UDataprepFetcher* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilter_eventGetFetcher_Parms, ReturnValue), Z_Construct_UClass_UDataprepFetcher_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilter, nullptr, "GetFetcher", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::DataprepFilter_eventGetFetcher_Parms), Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilter_GetFetcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilter_GetFetcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepFilter);
	UClass* Z_Construct_UClass_UDataprepFilter_NoRegister()
	{
		return UDataprepFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExcludingResult_MetaData[];
#endif
		static void NewProp_bIsExcludingResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExcludingResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepParameterizableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepFilter_GetFetcher, "GetFetcher" }, // 1680863122
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Dataprep Filter a base class for the Dataprep selection system\n * It's main responsibility is to filter a array of object and to return the selected objects\n */" },
		{ "IncludePath", "SelectionSystem/DataprepFilter.h" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "The Dataprep Filter a base class for the Dataprep selection system\nIt's main responsibility is to filter a array of object and to return the selected objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFilter_Statics::NewProp_bIsExcludingResult_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// Is this filter an excluding filter (a filter that produces the inverse of its normal output)\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "Is this filter an excluding filter (a filter that produces the inverse of its normal output)" },
	};
#endif
	void Z_Construct_UClass_UDataprepFilter_Statics::NewProp_bIsExcludingResult_SetBit(void* Obj)
	{
		((UDataprepFilter*)Obj)->bIsExcludingResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepFilter_Statics::NewProp_bIsExcludingResult = { "bIsExcludingResult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepFilter), &Z_Construct_UClass_UDataprepFilter_Statics::NewProp_bIsExcludingResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepFilter_Statics::NewProp_bIsExcludingResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFilter_Statics::NewProp_bIsExcludingResult_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepFilter_Statics::NewProp_bIsExcludingResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepFilter_Statics::ClassParams = {
		&UDataprepFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataprepFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFilter_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepFilter()
	{
		if (!Z_Registration_Info_UClass_UDataprepFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepFilter.OuterSingleton, Z_Construct_UClass_UDataprepFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepFilter.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepFilter>()
	{
		return UDataprepFilter::StaticClass();
	}
	UDataprepFilter::UDataprepFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepFilter);
	UDataprepFilter::~UDataprepFilter() {}
	DEFINE_FUNCTION(UDataprepFilterNoFetcher::execGetAdditionalKeyword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetAdditionalKeyword_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFilterNoFetcher::execGetTooltipText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTooltipText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFilterNoFetcher::execGetNodeDisplayFilterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeDisplayFilterName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFilterNoFetcher::execGetDisplayFilterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayFilterName_Implementation();
		P_NATIVE_END;
	}
	struct DataprepFilterNoFetcher_eventGetAdditionalKeyword_Parms
	{
		FText ReturnValue;
	};
	struct DataprepFilterNoFetcher_eventGetDisplayFilterName_Parms
	{
		FText ReturnValue;
	};
	struct DataprepFilterNoFetcher_eventGetNodeDisplayFilterName_Parms
	{
		FText ReturnValue;
	};
	struct DataprepFilterNoFetcher_eventGetTooltipText_Parms
	{
		FText ReturnValue;
	};
	static FName NAME_UDataprepFilterNoFetcher_GetAdditionalKeyword = FName(TEXT("GetAdditionalKeyword"));
	FText UDataprepFilterNoFetcher::GetAdditionalKeyword() const
	{
		DataprepFilterNoFetcher_eventGetAdditionalKeyword_Parms Parms;
		const_cast<UDataprepFilterNoFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFilterNoFetcher_GetAdditionalKeyword),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepFilterNoFetcher_GetDisplayFilterName = FName(TEXT("GetDisplayFilterName"));
	FText UDataprepFilterNoFetcher::GetDisplayFilterName() const
	{
		DataprepFilterNoFetcher_eventGetDisplayFilterName_Parms Parms;
		const_cast<UDataprepFilterNoFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFilterNoFetcher_GetDisplayFilterName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepFilterNoFetcher_GetNodeDisplayFilterName = FName(TEXT("GetNodeDisplayFilterName"));
	FText UDataprepFilterNoFetcher::GetNodeDisplayFilterName() const
	{
		DataprepFilterNoFetcher_eventGetNodeDisplayFilterName_Parms Parms;
		const_cast<UDataprepFilterNoFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFilterNoFetcher_GetNodeDisplayFilterName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepFilterNoFetcher_GetTooltipText = FName(TEXT("GetTooltipText"));
	FText UDataprepFilterNoFetcher::GetTooltipText() const
	{
		DataprepFilterNoFetcher_eventGetTooltipText_Parms Parms;
		const_cast<UDataprepFilterNoFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFilterNoFetcher_GetTooltipText),&Parms);
		return Parms.ReturnValue;
	}
	void UDataprepFilterNoFetcher::StaticRegisterNativesUDataprepFilterNoFetcher()
	{
		UClass* Class = UDataprepFilterNoFetcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdditionalKeyword", &UDataprepFilterNoFetcher::execGetAdditionalKeyword },
			{ "GetDisplayFilterName", &UDataprepFilterNoFetcher::execGetDisplayFilterName },
			{ "GetNodeDisplayFilterName", &UDataprepFilterNoFetcher::execGetNodeDisplayFilterName },
			{ "GetTooltipText", &UDataprepFilterNoFetcher::execGetTooltipText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterNoFetcher_eventGetAdditionalKeyword_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display|Search" },
		{ "Comment", "/**\n\x09 * Allows to add more keywords for when a user is searching for the filter in the ui.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "Allows to add more keywords for when a user is searching for the filter in the ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterNoFetcher, nullptr, "GetAdditionalKeyword", nullptr, nullptr, sizeof(DataprepFilterNoFetcher_eventGetAdditionalKeyword_Parms), Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterNoFetcher_eventGetDisplayFilterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/** \n\x09 * Allows to change the name of the filter for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "Allows to change the name of the filter for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterNoFetcher, nullptr, "GetDisplayFilterName", nullptr, nullptr, sizeof(DataprepFilterNoFetcher_eventGetDisplayFilterName_Parms), Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterNoFetcher_eventGetNodeDisplayFilterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * The name displayed on node title.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "The name displayed on node title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterNoFetcher, nullptr, "GetNodeDisplayFilterName", nullptr, nullptr, sizeof(DataprepFilterNoFetcher_eventGetNodeDisplayFilterName_Parms), Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterNoFetcher_eventGetTooltipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * Allows to change the tooltip of the filter for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "Allows to change the tooltip of the filter for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterNoFetcher, nullptr, "GetTooltipText", nullptr, nullptr, sizeof(DataprepFilterNoFetcher_eventGetTooltipText_Parms), Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepFilterNoFetcher);
	UClass* Z_Construct_UClass_UDataprepFilterNoFetcher_NoRegister()
	{
		return UDataprepFilterNoFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepFilterNoFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExcludingResult_MetaData[];
#endif
		static void NewProp_bIsExcludingResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExcludingResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepParameterizableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepFilterNoFetcher_GetAdditionalKeyword, "GetAdditionalKeyword" }, // 1171355046
		{ &Z_Construct_UFunction_UDataprepFilterNoFetcher_GetDisplayFilterName, "GetDisplayFilterName" }, // 759807693
		{ &Z_Construct_UFunction_UDataprepFilterNoFetcher_GetNodeDisplayFilterName, "GetNodeDisplayFilterName" }, // 3741634355
		{ &Z_Construct_UFunction_UDataprepFilterNoFetcher_GetTooltipText, "GetTooltipText" }, // 267188577
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Dataprep Filter a base class for the Dataprep selection system\n * It's main responsibility is to filter a array of object and to return the selected objects\n * \n * This version of the filter does not support fetchers, but instead works (filters) directly on the input objects\n */" },
		{ "IncludePath", "SelectionSystem/DataprepFilter.h" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "The Dataprep Filter a base class for the Dataprep selection system\nIt's main responsibility is to filter a array of object and to return the selected objects\n\nThis version of the filter does not support fetchers, but instead works (filters) directly on the input objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::NewProp_bIsExcludingResult_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// Is this filter an excluding filter (a filter that produces the inverse of its normal output)\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFilter.h" },
		{ "ToolTip", "Is this filter an excluding filter (a filter that produces the inverse of its normal output)" },
	};
#endif
	void Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::NewProp_bIsExcludingResult_SetBit(void* Obj)
	{
		((UDataprepFilterNoFetcher*)Obj)->bIsExcludingResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::NewProp_bIsExcludingResult = { "bIsExcludingResult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepFilterNoFetcher), &Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::NewProp_bIsExcludingResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::NewProp_bIsExcludingResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::NewProp_bIsExcludingResult_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::NewProp_bIsExcludingResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepFilterNoFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::ClassParams = {
		&UDataprepFilterNoFetcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepFilterNoFetcher()
	{
		if (!Z_Registration_Info_UClass_UDataprepFilterNoFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepFilterNoFetcher.OuterSingleton, Z_Construct_UClass_UDataprepFilterNoFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepFilterNoFetcher.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepFilterNoFetcher>()
	{
		return UDataprepFilterNoFetcher::StaticClass();
	}
	UDataprepFilterNoFetcher::UDataprepFilterNoFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepFilterNoFetcher);
	UDataprepFilterNoFetcher::~UDataprepFilterNoFetcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepFilter, UDataprepFilter::StaticClass, TEXT("UDataprepFilter"), &Z_Registration_Info_UClass_UDataprepFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepFilter), 4287175980U) },
		{ Z_Construct_UClass_UDataprepFilterNoFetcher, UDataprepFilterNoFetcher::StaticClass, TEXT("UDataprepFilterNoFetcher"), &Z_Registration_Info_UClass_UDataprepFilterNoFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepFilterNoFetcher), 4087808720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_486474315(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
