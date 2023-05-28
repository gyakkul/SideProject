// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepFetcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepFetcher() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFetcher();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFetcher_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	DEFINE_FUNCTION(UDataprepFetcher::execGetAdditionalKeyword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetAdditionalKeyword_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFetcher::execGetTooltipText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTooltipText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFetcher::execGetNodeDisplayFetcherName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeDisplayFetcherName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFetcher::execGetDisplayFetcherName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayFetcherName_Implementation();
		P_NATIVE_END;
	}
	struct DataprepFetcher_eventGetAdditionalKeyword_Parms
	{
		FText ReturnValue;
	};
	struct DataprepFetcher_eventGetDisplayFetcherName_Parms
	{
		FText ReturnValue;
	};
	struct DataprepFetcher_eventGetNodeDisplayFetcherName_Parms
	{
		FText ReturnValue;
	};
	struct DataprepFetcher_eventGetTooltipText_Parms
	{
		FText ReturnValue;
	};
	static FName NAME_UDataprepFetcher_GetAdditionalKeyword = FName(TEXT("GetAdditionalKeyword"));
	FText UDataprepFetcher::GetAdditionalKeyword() const
	{
		DataprepFetcher_eventGetAdditionalKeyword_Parms Parms;
		const_cast<UDataprepFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFetcher_GetAdditionalKeyword),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepFetcher_GetDisplayFetcherName = FName(TEXT("GetDisplayFetcherName"));
	FText UDataprepFetcher::GetDisplayFetcherName() const
	{
		DataprepFetcher_eventGetDisplayFetcherName_Parms Parms;
		const_cast<UDataprepFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFetcher_GetDisplayFetcherName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepFetcher_GetNodeDisplayFetcherName = FName(TEXT("GetNodeDisplayFetcherName"));
	FText UDataprepFetcher::GetNodeDisplayFetcherName() const
	{
		DataprepFetcher_eventGetNodeDisplayFetcherName_Parms Parms;
		const_cast<UDataprepFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFetcher_GetNodeDisplayFetcherName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepFetcher_GetTooltipText = FName(TEXT("GetTooltipText"));
	FText UDataprepFetcher::GetTooltipText() const
	{
		DataprepFetcher_eventGetTooltipText_Parms Parms;
		const_cast<UDataprepFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepFetcher_GetTooltipText),&Parms);
		return Parms.ReturnValue;
	}
	void UDataprepFetcher::StaticRegisterNativesUDataprepFetcher()
	{
		UClass* Class = UDataprepFetcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdditionalKeyword", &UDataprepFetcher::execGetAdditionalKeyword },
			{ "GetDisplayFetcherName", &UDataprepFetcher::execGetDisplayFetcherName },
			{ "GetNodeDisplayFetcherName", &UDataprepFetcher::execGetNodeDisplayFetcherName },
			{ "GetTooltipText", &UDataprepFetcher::execGetTooltipText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFetcher_eventGetAdditionalKeyword_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display|Search" },
		{ "Comment", "/**\n\x09 * Allows to add more keywords for when a user is searching for the fetcher in the ui.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFetcher.h" },
		{ "ToolTip", "Allows to add more keywords for when a user is searching for the fetcher in the ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFetcher, nullptr, "GetAdditionalKeyword", nullptr, nullptr, sizeof(DataprepFetcher_eventGetAdditionalKeyword_Parms), Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFetcher_eventGetDisplayFetcherName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/** \n\x09 * Allows to change the name of the fetcher for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFetcher.h" },
		{ "ToolTip", "Allows to change the name of the fetcher for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFetcher, nullptr, "GetDisplayFetcherName", nullptr, nullptr, sizeof(DataprepFetcher_eventGetDisplayFetcherName_Parms), Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFetcher_eventGetNodeDisplayFetcherName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * The name displayed on node title.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFetcher.h" },
		{ "ToolTip", "The name displayed on node title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFetcher, nullptr, "GetNodeDisplayFetcherName", nullptr, nullptr, sizeof(DataprepFetcher_eventGetNodeDisplayFetcherName_Parms), Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFetcher_eventGetTooltipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * Allows to change the tooltip of the fetcher for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFetcher.h" },
		{ "ToolTip", "Allows to change the tooltip of the fetcher for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFetcher, nullptr, "GetTooltipText", nullptr, nullptr, sizeof(DataprepFetcher_eventGetTooltipText_Parms), Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFetcher_GetTooltipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFetcher_GetTooltipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepFetcher);
	UClass* Z_Construct_UClass_UDataprepFetcher_NoRegister()
	{
		return UDataprepFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepParameterizableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepFetcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepFetcher_GetAdditionalKeyword, "GetAdditionalKeyword" }, // 2614877682
		{ &Z_Construct_UFunction_UDataprepFetcher_GetDisplayFetcherName, "GetDisplayFetcherName" }, // 1033125176
		{ &Z_Construct_UFunction_UDataprepFetcher_GetNodeDisplayFetcherName, "GetNodeDisplayFetcherName" }, // 3490087992
		{ &Z_Construct_UFunction_UDataprepFetcher_GetTooltipText, "GetTooltipText" }, // 1468022587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFetcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Dataprep fetcher is a base class for Dataprep Selection system.\n * The responsibility of fetcher is return a certain type of data for a object. (Look at DataprepStringFetcher for a example)\n * This abstract base class exist currently for the discovery process, some compile time validation and to propagate UDataprepParameterizableObject\n */" },
		{ "IncludePath", "SelectionSystem/DataprepFetcher.h" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFetcher.h" },
		{ "ToolTip", "The Dataprep fetcher is a base class for Dataprep Selection system.\nThe responsibility of fetcher is return a certain type of data for a object. (Look at DataprepStringFetcher for a example)\nThis abstract base class exist currently for the discovery process, some compile time validation and to propagate UDataprepParameterizableObject" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepFetcher_Statics::ClassParams = {
		&UDataprepFetcher::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepFetcher()
	{
		if (!Z_Registration_Info_UClass_UDataprepFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepFetcher.OuterSingleton, Z_Construct_UClass_UDataprepFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepFetcher.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepFetcher>()
	{
		return UDataprepFetcher::StaticClass();
	}
	UDataprepFetcher::UDataprepFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepFetcher);
	UDataprepFetcher::~UDataprepFetcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepFetcher, UDataprepFetcher::StaticClass, TEXT("UDataprepFetcher"), &Z_Registration_Info_UClass_UDataprepFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepFetcher), 828079204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_3997600093(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
