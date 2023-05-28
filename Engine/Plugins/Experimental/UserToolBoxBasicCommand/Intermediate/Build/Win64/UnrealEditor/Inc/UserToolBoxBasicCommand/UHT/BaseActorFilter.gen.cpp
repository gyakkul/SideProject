// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFilter/BaseActorFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseActorFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseActorFilter();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseActorFilter_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetAllDescendants();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetAllDescendants_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetNDescendants();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetNDescendants_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetParents();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetParents_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasAttachedActor();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasAttachedActor_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasComponentOfClass();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasComponentOfClass_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKey();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKey_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKeyAndValue();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKeyAndValue_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_NoRegister();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UIsClassOf();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UIsClassOf_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseActorFilter::execFilterUnit)
	{
		P_GET_OBJECT(AActor,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FilterUnit_Implementation(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseActorFilter::execFilter)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->Filter_Implementation(Z_Param_Out_Source);
		P_NATIVE_END;
	}
	struct BaseActorFilter_eventFilter_Parms
	{
		TArray<AActor*> Source;
		TArray<AActor*> ReturnValue;
	};
	struct BaseActorFilter_eventFilterUnit_Parms
	{
		AActor* Source;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseActorFilter_eventFilterUnit_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UBaseActorFilter_Filter = FName(TEXT("Filter"));
	TArray<AActor*> UBaseActorFilter::Filter(TArray<AActor*> const& Source)
	{
		BaseActorFilter_eventFilter_Parms Parms;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_UBaseActorFilter_Filter),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseActorFilter_FilterUnit = FName(TEXT("FilterUnit"));
	bool UBaseActorFilter::FilterUnit(AActor* Source)
	{
		BaseActorFilter_eventFilterUnit_Parms Parms;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_UBaseActorFilter_FilterUnit),&Parms);
		return !!Parms.ReturnValue;
	}
	void UBaseActorFilter::StaticRegisterNativesUBaseActorFilter()
	{
		UClass* Class = UBaseActorFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Filter", &UBaseActorFilter::execFilter },
			{ "FilterUnit", &UBaseActorFilter::execFilterUnit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseActorFilter_Filter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Source;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_Source_Inner = { "Source", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseActorFilter_eventFilter_Parms, Source), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_Source_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseActorFilter_eventFilter_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_Source_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseActorFilter, nullptr, "Filter", nullptr, nullptr, sizeof(BaseActorFilter_eventFilter_Parms), Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseActorFilter_Filter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseActorFilter_Filter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseActorFilter_eventFilterUnit_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseActorFilter_eventFilterUnit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseActorFilter_eventFilterUnit_Parms), &Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseActorFilter, nullptr, "FilterUnit", nullptr, nullptr, sizeof(BaseActorFilter_eventFilterUnit_Parms), Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseActorFilter_FilterUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseActorFilter_FilterUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseActorFilter);
	UClass* Z_Construct_UClass_UBaseActorFilter_NoRegister()
	{
		return UBaseActorFilter::StaticClass();
	}
	struct Z_Construct_UClass_UBaseActorFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRunGlobalFilter_MetaData[];
#endif
		static void NewProp_bShouldRunGlobalFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRunGlobalFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRunUnitFilter_MetaData[];
#endif
		static void NewProp_bShouldRunUnitFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRunUnitFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseActorFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseActorFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseActorFilter_Filter, "Filter" }, // 200114427
		{ &Z_Construct_UFunction_UBaseActorFilter_FilterUnit, "FilterUnit" }, // 91059571
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseActorFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunGlobalFilter_MetaData[] = {
		{ "Category", "FilterCommand" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	void Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunGlobalFilter_SetBit(void* Obj)
	{
		((UBaseActorFilter*)Obj)->bShouldRunGlobalFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunGlobalFilter = { "bShouldRunGlobalFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseActorFilter), &Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunGlobalFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunGlobalFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunGlobalFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunUnitFilter_MetaData[] = {
		{ "Category", "FilterCommand" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	void Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunUnitFilter_SetBit(void* Obj)
	{
		((UBaseActorFilter*)Obj)->bShouldRunUnitFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunUnitFilter = { "bShouldRunUnitFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseActorFilter), &Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunUnitFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunUnitFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunUnitFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseActorFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunGlobalFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseActorFilter_Statics::NewProp_bShouldRunUnitFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseActorFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseActorFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseActorFilter_Statics::ClassParams = {
		&UBaseActorFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseActorFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorFilter_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseActorFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseActorFilter()
	{
		if (!Z_Registration_Info_UClass_UBaseActorFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseActorFilter.OuterSingleton, Z_Construct_UClass_UBaseActorFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseActorFilter.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UBaseActorFilter>()
	{
		return UBaseActorFilter::StaticClass();
	}
	UBaseActorFilter::UBaseActorFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseActorFilter);
	UBaseActorFilter::~UBaseActorFilter() {}
	void UGetAllDescendants::StaticRegisterNativesUGetAllDescendants()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetAllDescendants);
	UClass* Z_Construct_UClass_UGetAllDescendants_NoRegister()
	{
		return UGetAllDescendants::StaticClass();
	}
	struct Z_Construct_UClass_UGetAllDescendants_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetAllDescendants_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAllDescendants_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetAllDescendants_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetAllDescendants>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetAllDescendants_Statics::ClassParams = {
		&UGetAllDescendants::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetAllDescendants_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetAllDescendants_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetAllDescendants()
	{
		if (!Z_Registration_Info_UClass_UGetAllDescendants.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetAllDescendants.OuterSingleton, Z_Construct_UClass_UGetAllDescendants_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetAllDescendants.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UGetAllDescendants>()
	{
		return UGetAllDescendants::StaticClass();
	}
	UGetAllDescendants::UGetAllDescendants(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetAllDescendants);
	UGetAllDescendants::~UGetAllDescendants() {}
	void UGetParents::StaticRegisterNativesUGetParents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetParents);
	UClass* Z_Construct_UClass_UGetParents_NoRegister()
	{
		return UGetParents::StaticClass();
	}
	struct Z_Construct_UClass_UGetParents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetParents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetParents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetParents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetParents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetParents_Statics::ClassParams = {
		&UGetParents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetParents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetParents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetParents()
	{
		if (!Z_Registration_Info_UClass_UGetParents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetParents.OuterSingleton, Z_Construct_UClass_UGetParents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetParents.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UGetParents>()
	{
		return UGetParents::StaticClass();
	}
	UGetParents::UGetParents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetParents);
	UGetParents::~UGetParents() {}
	void UHasAttachedActor::StaticRegisterNativesUHasAttachedActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasAttachedActor);
	UClass* Z_Construct_UClass_UHasAttachedActor_NoRegister()
	{
		return UHasAttachedActor::StaticClass();
	}
	struct Z_Construct_UClass_UHasAttachedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasAttachedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasAttachedActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasAttachedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasAttachedActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasAttachedActor_Statics::ClassParams = {
		&UHasAttachedActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHasAttachedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasAttachedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasAttachedActor()
	{
		if (!Z_Registration_Info_UClass_UHasAttachedActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasAttachedActor.OuterSingleton, Z_Construct_UClass_UHasAttachedActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHasAttachedActor.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UHasAttachedActor>()
	{
		return UHasAttachedActor::StaticClass();
	}
	UHasAttachedActor::UHasAttachedActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasAttachedActor);
	UHasAttachedActor::~UHasAttachedActor() {}
	void UHasComponentOfClass::StaticRegisterNativesUHasComponentOfClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasComponentOfClass);
	UClass* Z_Construct_UClass_UHasComponentOfClass_NoRegister()
	{
		return UHasComponentOfClass::StaticClass();
	}
	struct Z_Construct_UClass_UHasComponentOfClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasComponentOfClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasComponentOfClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasComponentOfClass_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHasComponentOfClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHasComponentOfClass, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHasComponentOfClass_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasComponentOfClass_Statics::NewProp_ComponentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasComponentOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasComponentOfClass_Statics::NewProp_ComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasComponentOfClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasComponentOfClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasComponentOfClass_Statics::ClassParams = {
		&UHasComponentOfClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHasComponentOfClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasComponentOfClass_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHasComponentOfClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasComponentOfClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasComponentOfClass()
	{
		if (!Z_Registration_Info_UClass_UHasComponentOfClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasComponentOfClass.OuterSingleton, Z_Construct_UClass_UHasComponentOfClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHasComponentOfClass.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UHasComponentOfClass>()
	{
		return UHasComponentOfClass::StaticClass();
	}
	UHasComponentOfClass::UHasComponentOfClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasComponentOfClass);
	UHasComponentOfClass::~UHasComponentOfClass() {}
	void UHasMetadataByKey::StaticRegisterNativesUHasMetadataByKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasMetadataByKey);
	UClass* Z_Construct_UClass_UHasMetadataByKey_NoRegister()
	{
		return UHasMetadataByKey::StaticClass();
	}
	struct Z_Construct_UClass_UHasMetadataByKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasMetadataByKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasMetadataByKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasMetadataByKey_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHasMetadataByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHasMetadataByKey, Key), METADATA_PARAMS(Z_Construct_UClass_UHasMetadataByKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKey_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasMetadataByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasMetadataByKey_Statics::NewProp_Key,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasMetadataByKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasMetadataByKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasMetadataByKey_Statics::ClassParams = {
		&UHasMetadataByKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHasMetadataByKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKey_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHasMetadataByKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasMetadataByKey()
	{
		if (!Z_Registration_Info_UClass_UHasMetadataByKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasMetadataByKey.OuterSingleton, Z_Construct_UClass_UHasMetadataByKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHasMetadataByKey.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UHasMetadataByKey>()
	{
		return UHasMetadataByKey::StaticClass();
	}
	UHasMetadataByKey::UHasMetadataByKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasMetadataByKey);
	UHasMetadataByKey::~UHasMetadataByKey() {}
	void UHasMetadataByKeyAndValue::StaticRegisterNativesUHasMetadataByKeyAndValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasMetadataByKeyAndValue);
	UClass* Z_Construct_UClass_UHasMetadataByKeyAndValue_NoRegister()
	{
		return UHasMetadataByKeyAndValue::StaticClass();
	}
	struct Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHasMetadataByKeyAndValue, Key), METADATA_PARAMS(Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHasMetadataByKeyAndValue, Value), METADATA_PARAMS(Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasMetadataByKeyAndValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::ClassParams = {
		&UHasMetadataByKeyAndValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasMetadataByKeyAndValue()
	{
		if (!Z_Registration_Info_UClass_UHasMetadataByKeyAndValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasMetadataByKeyAndValue.OuterSingleton, Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHasMetadataByKeyAndValue.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UHasMetadataByKeyAndValue>()
	{
		return UHasMetadataByKeyAndValue::StaticClass();
	}
	UHasMetadataByKeyAndValue::UHasMetadataByKeyAndValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasMetadataByKeyAndValue);
	UHasMetadataByKeyAndValue::~UHasMetadataByKeyAndValue() {}
	void UIsClassOf::StaticRegisterNativesUIsClassOf()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsClassOf);
	UClass* Z_Construct_UClass_UIsClassOf_NoRegister()
	{
		return UIsClassOf::StaticClass();
	}
	struct Z_Construct_UClass_UIsClassOf_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildClass_MetaData[];
#endif
		static void NewProp_ChildClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChildClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsClassOf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsClassOf_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsClassOf_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIsClassOf_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIsClassOf, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIsClassOf_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsClassOf_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsClassOf_Statics::NewProp_ChildClass_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	void Z_Construct_UClass_UIsClassOf_Statics::NewProp_ChildClass_SetBit(void* Obj)
	{
		((UIsClassOf*)Obj)->ChildClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsClassOf_Statics::NewProp_ChildClass = { "ChildClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIsClassOf), &Z_Construct_UClass_UIsClassOf_Statics::NewProp_ChildClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIsClassOf_Statics::NewProp_ChildClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsClassOf_Statics::NewProp_ChildClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsClassOf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsClassOf_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsClassOf_Statics::NewProp_ChildClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsClassOf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsClassOf>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsClassOf_Statics::ClassParams = {
		&UIsClassOf::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsClassOf_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsClassOf_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsClassOf_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsClassOf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsClassOf()
	{
		if (!Z_Registration_Info_UClass_UIsClassOf.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsClassOf.OuterSingleton, Z_Construct_UClass_UIsClassOf_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsClassOf.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UIsClassOf>()
	{
		return UIsClassOf::StaticClass();
	}
	UIsClassOf::UIsClassOf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsClassOf);
	UIsClassOf::~UIsClassOf() {}
	void UGetNDescendants::StaticRegisterNativesUGetNDescendants()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetNDescendants);
	UClass* Z_Construct_UClass_UGetNDescendants_NoRegister()
	{
		return UGetNDescendants::StaticClass();
	}
	struct Z_Construct_UClass_UGetNDescendants_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_N;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddIntermediaries_MetaData[];
#endif
		static void NewProp_AddIntermediaries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddIntermediaries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetNDescendants_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetNDescendants_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetNDescendants_Statics::NewProp_N_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGetNDescendants_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGetNDescendants, N), METADATA_PARAMS(Z_Construct_UClass_UGetNDescendants_Statics::NewProp_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetNDescendants_Statics::NewProp_N_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetNDescendants_Statics::NewProp_AddIntermediaries_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	void Z_Construct_UClass_UGetNDescendants_Statics::NewProp_AddIntermediaries_SetBit(void* Obj)
	{
		((UGetNDescendants*)Obj)->AddIntermediaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGetNDescendants_Statics::NewProp_AddIntermediaries = { "AddIntermediaries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGetNDescendants), &Z_Construct_UClass_UGetNDescendants_Statics::NewProp_AddIntermediaries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGetNDescendants_Statics::NewProp_AddIntermediaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetNDescendants_Statics::NewProp_AddIntermediaries_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetNDescendants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetNDescendants_Statics::NewProp_N,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetNDescendants_Statics::NewProp_AddIntermediaries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetNDescendants_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetNDescendants>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetNDescendants_Statics::ClassParams = {
		&UGetNDescendants::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGetNDescendants_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetNDescendants_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetNDescendants_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetNDescendants_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetNDescendants()
	{
		if (!Z_Registration_Info_UClass_UGetNDescendants.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetNDescendants.OuterSingleton, Z_Construct_UClass_UGetNDescendants_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetNDescendants.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UGetNDescendants>()
	{
		return UGetNDescendants::StaticClass();
	}
	UGetNDescendants::UGetNDescendants(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetNDescendants);
	UGetNDescendants::~UGetNDescendants() {}
	void UHasMetadataByKeyAndValueDropDown::StaticRegisterNativesUHasMetadataByKeyAndValueDropDown()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasMetadataByKeyAndValueDropDown);
	UClass* Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_NoRegister()
	{
		return UHasMetadataByKeyAndValueDropDown::StaticClass();
	}
	struct Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorFilter/BaseActorFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorFilter/BaseActorFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasMetadataByKeyAndValueDropDown>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics::ClassParams = {
		&UHasMetadataByKeyAndValueDropDown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown()
	{
		if (!Z_Registration_Info_UClass_UHasMetadataByKeyAndValueDropDown.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasMetadataByKeyAndValueDropDown.OuterSingleton, Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHasMetadataByKeyAndValueDropDown.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UHasMetadataByKeyAndValueDropDown>()
	{
		return UHasMetadataByKeyAndValueDropDown::StaticClass();
	}
	UHasMetadataByKeyAndValueDropDown::UHasMetadataByKeyAndValueDropDown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasMetadataByKeyAndValueDropDown);
	UHasMetadataByKeyAndValueDropDown::~UHasMetadataByKeyAndValueDropDown() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseActorFilter, UBaseActorFilter::StaticClass, TEXT("UBaseActorFilter"), &Z_Registration_Info_UClass_UBaseActorFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseActorFilter), 1923022020U) },
		{ Z_Construct_UClass_UGetAllDescendants, UGetAllDescendants::StaticClass, TEXT("UGetAllDescendants"), &Z_Registration_Info_UClass_UGetAllDescendants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetAllDescendants), 936394247U) },
		{ Z_Construct_UClass_UGetParents, UGetParents::StaticClass, TEXT("UGetParents"), &Z_Registration_Info_UClass_UGetParents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetParents), 3952828838U) },
		{ Z_Construct_UClass_UHasAttachedActor, UHasAttachedActor::StaticClass, TEXT("UHasAttachedActor"), &Z_Registration_Info_UClass_UHasAttachedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasAttachedActor), 4264708855U) },
		{ Z_Construct_UClass_UHasComponentOfClass, UHasComponentOfClass::StaticClass, TEXT("UHasComponentOfClass"), &Z_Registration_Info_UClass_UHasComponentOfClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasComponentOfClass), 4134344660U) },
		{ Z_Construct_UClass_UHasMetadataByKey, UHasMetadataByKey::StaticClass, TEXT("UHasMetadataByKey"), &Z_Registration_Info_UClass_UHasMetadataByKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasMetadataByKey), 338358861U) },
		{ Z_Construct_UClass_UHasMetadataByKeyAndValue, UHasMetadataByKeyAndValue::StaticClass, TEXT("UHasMetadataByKeyAndValue"), &Z_Registration_Info_UClass_UHasMetadataByKeyAndValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasMetadataByKeyAndValue), 1218390160U) },
		{ Z_Construct_UClass_UIsClassOf, UIsClassOf::StaticClass, TEXT("UIsClassOf"), &Z_Registration_Info_UClass_UIsClassOf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsClassOf), 3306685902U) },
		{ Z_Construct_UClass_UGetNDescendants, UGetNDescendants::StaticClass, TEXT("UGetNDescendants"), &Z_Registration_Info_UClass_UGetNDescendants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetNDescendants), 1991838635U) },
		{ Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown, UHasMetadataByKeyAndValueDropDown::StaticClass, TEXT("UHasMetadataByKeyAndValueDropDown"), &Z_Registration_Info_UClass_UHasMetadataByKeyAndValueDropDown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasMetadataByKeyAndValueDropDown), 3808384240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_3250051360(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
