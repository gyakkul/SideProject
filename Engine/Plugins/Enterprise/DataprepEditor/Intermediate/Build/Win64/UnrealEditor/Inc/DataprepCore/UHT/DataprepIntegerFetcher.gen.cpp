// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepIntegerFetcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepIntegerFetcher() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFetcher();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepIntegerFetcher();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepIntegerFetcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	DEFINE_FUNCTION(UDataprepIntegerFetcher::execFetch)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL_REF(Z_Param_Out_bOutFetchSucceded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Fetch_Implementation(Z_Param_Object,Z_Param_Out_bOutFetchSucceded);
		P_NATIVE_END;
	}
	struct DataprepIntegerFetcher_eventFetch_Parms
	{
		const UObject* Object;
		bool bOutFetchSucceded;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		DataprepIntegerFetcher_eventFetch_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UDataprepIntegerFetcher_Fetch = FName(TEXT("Fetch"));
	int32 UDataprepIntegerFetcher::Fetch(const UObject* Object, bool& bOutFetchSucceded) const
	{
		DataprepIntegerFetcher_eventFetch_Parms Parms;
		Parms.Object=Object;
		Parms.bOutFetchSucceded=bOutFetchSucceded ? true : false;
		const_cast<UDataprepIntegerFetcher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepIntegerFetcher_Fetch),&Parms);
		bOutFetchSucceded=Parms.bOutFetchSucceded;
		return Parms.ReturnValue;
	}
	void UDataprepIntegerFetcher::StaticRegisterNativesUDataprepIntegerFetcher()
	{
		UClass* Class = UDataprepIntegerFetcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fetch", &UDataprepIntegerFetcher::execFetch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bOutFetchSucceded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutFetchSucceded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepIntegerFetcher_eventFetch_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_bOutFetchSucceded_SetBit(void* Obj)
	{
		((DataprepIntegerFetcher_eventFetch_Parms*)Obj)->bOutFetchSucceded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_bOutFetchSucceded = { "bOutFetchSucceded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepIntegerFetcher_eventFetch_Parms), &Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_bOutFetchSucceded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepIntegerFetcher_eventFetch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_bOutFetchSucceded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * This function is called when the fetcher is executed.\n\x09 * If your defining your fetcher in Blueprint this is the function to override.\n\x09 * @param Object The object from which the fetcher should try to retrieve a float\n\x09 * @param bOutFetchSucceded If the fetcher managed to retrieve a float from the object this bool must be set to true\n\x09 * @return The fetched float\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFetcher.h" },
		{ "ToolTip", "This function is called when the fetcher is executed.\nIf your defining your fetcher in Blueprint this is the function to override.\n@param Object The object from which the fetcher should try to retrieve a float\n@param bOutFetchSucceded If the fetcher managed to retrieve a float from the object this bool must be set to true\n@return The fetched float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepIntegerFetcher, nullptr, "Fetch", nullptr, nullptr, sizeof(DataprepIntegerFetcher_eventFetch_Parms), Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepIntegerFetcher);
	UClass* Z_Construct_UClass_UDataprepIntegerFetcher_NoRegister()
	{
		return UDataprepIntegerFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepIntegerFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepIntegerFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepIntegerFetcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepIntegerFetcher_Fetch, "Fetch" }, // 87690207
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIntegerFetcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The integer fetcher is a specialized type of fetcher for the integer\n */" },
		{ "DisplayName", "Integer" },
		{ "IncludePath", "SelectionSystem/DataprepIntegerFetcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFetcher.h" },
		{ "ToolTip", "The integer fetcher is a specialized type of fetcher for the integer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepIntegerFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepIntegerFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepIntegerFetcher_Statics::ClassParams = {
		&UDataprepIntegerFetcher::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataprepIntegerFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepIntegerFetcher()
	{
		if (!Z_Registration_Info_UClass_UDataprepIntegerFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepIntegerFetcher.OuterSingleton, Z_Construct_UClass_UDataprepIntegerFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepIntegerFetcher.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepIntegerFetcher>()
	{
		return UDataprepIntegerFetcher::StaticClass();
	}
	UDataprepIntegerFetcher::UDataprepIntegerFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepIntegerFetcher);
	UDataprepIntegerFetcher::~UDataprepIntegerFetcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFetcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFetcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepIntegerFetcher, UDataprepIntegerFetcher::StaticClass, TEXT("UDataprepIntegerFetcher"), &Z_Registration_Info_UClass_UDataprepIntegerFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepIntegerFetcher), 13015000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFetcher_h_185378384(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFetcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFetcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
