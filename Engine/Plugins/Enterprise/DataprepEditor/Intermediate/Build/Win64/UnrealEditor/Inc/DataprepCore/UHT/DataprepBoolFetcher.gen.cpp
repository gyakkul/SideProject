// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepBoolFetcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepBoolFetcher() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepBoolFetcher();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepBoolFetcher_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFetcher();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	DEFINE_FUNCTION(UDataprepBoolFetcher::execFetch)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL_REF(Z_Param_Out_bOutFetchSucceded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Fetch_Implementation(Z_Param_Object,Z_Param_Out_bOutFetchSucceded);
		P_NATIVE_END;
	}
	struct DataprepBoolFetcher_eventFetch_Parms
	{
		const UObject* Object;
		bool bOutFetchSucceded;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DataprepBoolFetcher_eventFetch_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UDataprepBoolFetcher_Fetch = FName(TEXT("Fetch"));
	bool UDataprepBoolFetcher::Fetch(const UObject* Object, bool& bOutFetchSucceded) const
	{
		DataprepBoolFetcher_eventFetch_Parms Parms;
		Parms.Object=Object;
		Parms.bOutFetchSucceded=bOutFetchSucceded ? true : false;
		const_cast<UDataprepBoolFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepBoolFetcher_Fetch),&Parms);
		bOutFetchSucceded=Parms.bOutFetchSucceded;
		return !!Parms.ReturnValue;
	}
	void UDataprepBoolFetcher::StaticRegisterNativesUDataprepBoolFetcher()
	{
		UClass* Class = UDataprepBoolFetcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fetch", &UDataprepBoolFetcher::execFetch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bOutFetchSucceded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutFetchSucceded;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepBoolFetcher_eventFetch_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_bOutFetchSucceded_SetBit(void* Obj)
	{
		((DataprepBoolFetcher_eventFetch_Parms*)Obj)->bOutFetchSucceded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_bOutFetchSucceded = { "bOutFetchSucceded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepBoolFetcher_eventFetch_Parms), &Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_bOutFetchSucceded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataprepBoolFetcher_eventFetch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepBoolFetcher_eventFetch_Parms), &Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_bOutFetchSucceded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * This function is called when the fetcher is executed.\n\x09 * If your defining your fetcher in Blueprint this is the function to override.\n\x09 * @param Object The object from which the fetcher should try to retrieve the boolean\n\x09 * @param bOutFetchSucceded If the fetcher managed to retrieve the boolean from the object this bool must be set to true\n\x09 * @return The fetched bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepBoolFetcher.h" },
		{ "ToolTip", "This function is called when the fetcher is executed.\nIf your defining your fetcher in Blueprint this is the function to override.\n@param Object The object from which the fetcher should try to retrieve the boolean\n@param bOutFetchSucceded If the fetcher managed to retrieve the boolean from the object this bool must be set to true\n@return The fetched bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepBoolFetcher, nullptr, "Fetch", nullptr, nullptr, sizeof(DataprepBoolFetcher_eventFetch_Parms), Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepBoolFetcher_Fetch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepBoolFetcher_Fetch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepBoolFetcher);
	UClass* Z_Construct_UClass_UDataprepBoolFetcher_NoRegister()
	{
		return UDataprepBoolFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepBoolFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepBoolFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepBoolFetcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepBoolFetcher_Fetch, "Fetch" }, // 2924315773
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepBoolFetcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The bool fetcher is a specialized type of fetcher for the booleans\n */" },
		{ "DisplayName", "Condition" },
		{ "IncludePath", "SelectionSystem/DataprepBoolFetcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepBoolFetcher.h" },
		{ "ToolTip", "The bool fetcher is a specialized type of fetcher for the booleans" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepBoolFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepBoolFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepBoolFetcher_Statics::ClassParams = {
		&UDataprepBoolFetcher::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataprepBoolFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepBoolFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepBoolFetcher()
	{
		if (!Z_Registration_Info_UClass_UDataprepBoolFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepBoolFetcher.OuterSingleton, Z_Construct_UClass_UDataprepBoolFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepBoolFetcher.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepBoolFetcher>()
	{
		return UDataprepBoolFetcher::StaticClass();
	}
	UDataprepBoolFetcher::UDataprepBoolFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepBoolFetcher);
	UDataprepBoolFetcher::~UDataprepBoolFetcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFetcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFetcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepBoolFetcher, UDataprepBoolFetcher::StaticClass, TEXT("UDataprepBoolFetcher"), &Z_Registration_Info_UClass_UDataprepBoolFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepBoolFetcher), 3209029934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFetcher_h_2566247573(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFetcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFetcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
