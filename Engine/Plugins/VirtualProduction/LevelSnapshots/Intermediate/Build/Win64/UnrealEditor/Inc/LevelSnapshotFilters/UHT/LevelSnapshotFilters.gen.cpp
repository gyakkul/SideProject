// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSnapshotFilters.h"
#include "LevelSnapshotFilterParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotFilters() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsActorValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsAddedActorValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsAddedComponentValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsDeletedActorValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsDeletedComponentValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsPropertyValidParams();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilterResult;
	static UEnum* EFilterResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilterResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilterResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("EFilterResult"));
		}
		return Z_Registration_Info_UEnum_EFilterResult.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UEnum* StaticEnum<EFilterResult::Type>()
	{
		return EFilterResult_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::Enumerators[] = {
		{ "EFilterResult::Include", (int64)EFilterResult::Include },
		{ "EFilterResult::Exclude", (int64)EFilterResult::Exclude },
		{ "EFilterResult::DoNotCare", (int64)EFilterResult::DoNotCare },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotCare.Comment", "/* The filter does not care what happens to this actor / property.\n\x09\x09 * Another filter will decide. If all filters don't care, actor / property is included.\n\x09\x09 *\n\x09\x09 * Use this for filters that only implement one function: IsActorValid or IsPropertyValid.\n\x09\x09 */" },
		{ "DoNotCare.Name", "EFilterResult::DoNotCare" },
		{ "DoNotCare.ToolTip", "The filter does not care what happens to this actor / property.\n               * Another filter will decide. If all filters don't care, actor / property is included.\n               *\n               * Use this for filters that only implement one function: IsActorValid or IsPropertyValid." },
		{ "Exclude.Comment", "/* This actor / property will be excluded.\n\x09\x09 */" },
		{ "Exclude.Name", "EFilterResult::Exclude" },
		{ "Exclude.ToolTip", "This actor / property will be excluded." },
		{ "Include.Comment", "/* This actor / property will be included. \n\x09\x09 */" },
		{ "Include.Name", "EFilterResult::Include" },
		{ "Include.ToolTip", "This actor / property will be included." },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		"EFilterResult",
		"EFilterResult::Type",
		Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult()
	{
		if (!Z_Registration_Info_UEnum_EFilterResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilterResult.InnerSingleton, Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilterResult.InnerSingleton;
	}
	void ULevelSnapshotFilter::StaticRegisterNativesULevelSnapshotFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotFilter);
	UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister()
	{
		return ULevelSnapshotFilter::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base-class for filtering a level snapshot.\n * Native C++ classes should inherit directly from this class.\n */" },
		{ "IncludePath", "LevelSnapshotFilters.h" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "Base-class for filtering a level snapshot.\nNative C++ classes should inherit directly from this class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotFilter_Statics::ClassParams = {
		&ULevelSnapshotFilter::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotFilter()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotFilter.OuterSingleton, Z_Construct_UClass_ULevelSnapshotFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<ULevelSnapshotFilter>()
	{
		return ULevelSnapshotFilter::StaticClass();
	}
	ULevelSnapshotFilter::ULevelSnapshotFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotFilter);
	ULevelSnapshotFilter::~ULevelSnapshotFilter() {}
	DEFINE_FUNCTION(ULevelSnapshotBlueprintFilter::execIsAddedComponentValid)
	{
		P_GET_STRUCT_REF(FIsAddedComponentValidParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EFilterResult::Type>*)Z_Param__Result=P_THIS->IsAddedComponentValid_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotBlueprintFilter::execIsDeletedComponentValid)
	{
		P_GET_STRUCT_REF(FIsDeletedComponentValidParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EFilterResult::Type>*)Z_Param__Result=P_THIS->IsDeletedComponentValid_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotBlueprintFilter::execIsAddedActorValid)
	{
		P_GET_STRUCT_REF(FIsAddedActorValidParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EFilterResult::Type>*)Z_Param__Result=P_THIS->IsAddedActorValid_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotBlueprintFilter::execIsDeletedActorValid)
	{
		P_GET_STRUCT_REF(FIsDeletedActorValidParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EFilterResult::Type>*)Z_Param__Result=P_THIS->IsDeletedActorValid_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotBlueprintFilter::execIsPropertyValid)
	{
		P_GET_STRUCT_REF(FIsPropertyValidParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EFilterResult::Type>*)Z_Param__Result=P_THIS->IsPropertyValid_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotBlueprintFilter::execIsActorValid)
	{
		P_GET_STRUCT_REF(FIsActorValidParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EFilterResult::Type>*)Z_Param__Result=P_THIS->IsActorValid_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	struct LevelSnapshotBlueprintFilter_eventIsActorValid_Parms
	{
		FIsActorValidParams Params;
		TEnumAsByte<EFilterResult::Type> ReturnValue;

		/** Constructor, initializes return property only **/
		LevelSnapshotBlueprintFilter_eventIsActorValid_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct LevelSnapshotBlueprintFilter_eventIsAddedActorValid_Parms
	{
		FIsAddedActorValidParams Params;
		TEnumAsByte<EFilterResult::Type> ReturnValue;

		/** Constructor, initializes return property only **/
		LevelSnapshotBlueprintFilter_eventIsAddedActorValid_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct LevelSnapshotBlueprintFilter_eventIsAddedComponentValid_Parms
	{
		FIsAddedComponentValidParams Params;
		TEnumAsByte<EFilterResult::Type> ReturnValue;

		/** Constructor, initializes return property only **/
		LevelSnapshotBlueprintFilter_eventIsAddedComponentValid_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct LevelSnapshotBlueprintFilter_eventIsDeletedActorValid_Parms
	{
		FIsDeletedActorValidParams Params;
		TEnumAsByte<EFilterResult::Type> ReturnValue;

		/** Constructor, initializes return property only **/
		LevelSnapshotBlueprintFilter_eventIsDeletedActorValid_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct LevelSnapshotBlueprintFilter_eventIsDeletedComponentValid_Parms
	{
		FIsDeletedComponentValidParams Params;
		TEnumAsByte<EFilterResult::Type> ReturnValue;

		/** Constructor, initializes return property only **/
		LevelSnapshotBlueprintFilter_eventIsDeletedComponentValid_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct LevelSnapshotBlueprintFilter_eventIsPropertyValid_Parms
	{
		FIsPropertyValidParams Params;
		TEnumAsByte<EFilterResult::Type> ReturnValue;

		/** Constructor, initializes return property only **/
		LevelSnapshotBlueprintFilter_eventIsPropertyValid_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_ULevelSnapshotBlueprintFilter_IsActorValid = FName(TEXT("IsActorValid"));
	EFilterResult::Type ULevelSnapshotBlueprintFilter::IsActorValid(FIsActorValidParams const& Params) const
	{
		LevelSnapshotBlueprintFilter_eventIsActorValid_Parms Parms;
		Parms.Params=Params;
		const_cast<ULevelSnapshotBlueprintFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSnapshotBlueprintFilter_IsActorValid),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSnapshotBlueprintFilter_IsAddedActorValid = FName(TEXT("IsAddedActorValid"));
	EFilterResult::Type ULevelSnapshotBlueprintFilter::IsAddedActorValid(FIsAddedActorValidParams const& Params) const
	{
		LevelSnapshotBlueprintFilter_eventIsAddedActorValid_Parms Parms;
		Parms.Params=Params;
		const_cast<ULevelSnapshotBlueprintFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSnapshotBlueprintFilter_IsAddedActorValid),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSnapshotBlueprintFilter_IsAddedComponentValid = FName(TEXT("IsAddedComponentValid"));
	EFilterResult::Type ULevelSnapshotBlueprintFilter::IsAddedComponentValid(FIsAddedComponentValidParams const& Params) const
	{
		LevelSnapshotBlueprintFilter_eventIsAddedComponentValid_Parms Parms;
		Parms.Params=Params;
		const_cast<ULevelSnapshotBlueprintFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSnapshotBlueprintFilter_IsAddedComponentValid),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSnapshotBlueprintFilter_IsDeletedActorValid = FName(TEXT("IsDeletedActorValid"));
	EFilterResult::Type ULevelSnapshotBlueprintFilter::IsDeletedActorValid(FIsDeletedActorValidParams const& Params) const
	{
		LevelSnapshotBlueprintFilter_eventIsDeletedActorValid_Parms Parms;
		Parms.Params=Params;
		const_cast<ULevelSnapshotBlueprintFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSnapshotBlueprintFilter_IsDeletedActorValid),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid = FName(TEXT("IsDeletedComponentValid"));
	EFilterResult::Type ULevelSnapshotBlueprintFilter::IsDeletedComponentValid(FIsDeletedComponentValidParams const& Params) const
	{
		LevelSnapshotBlueprintFilter_eventIsDeletedComponentValid_Parms Parms;
		Parms.Params=Params;
		const_cast<ULevelSnapshotBlueprintFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSnapshotBlueprintFilter_IsPropertyValid = FName(TEXT("IsPropertyValid"));
	EFilterResult::Type ULevelSnapshotBlueprintFilter::IsPropertyValid(FIsPropertyValidParams const& Params) const
	{
		LevelSnapshotBlueprintFilter_eventIsPropertyValid_Parms Parms;
		Parms.Params=Params;
		const_cast<ULevelSnapshotBlueprintFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSnapshotBlueprintFilter_IsPropertyValid),&Parms);
		return Parms.ReturnValue;
	}
	void ULevelSnapshotBlueprintFilter::StaticRegisterNativesULevelSnapshotBlueprintFilter()
	{
		UClass* Class = ULevelSnapshotBlueprintFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActorValid", &ULevelSnapshotBlueprintFilter::execIsActorValid },
			{ "IsAddedActorValid", &ULevelSnapshotBlueprintFilter::execIsAddedActorValid },
			{ "IsAddedComponentValid", &ULevelSnapshotBlueprintFilter::execIsAddedComponentValid },
			{ "IsDeletedActorValid", &ULevelSnapshotBlueprintFilter::execIsDeletedActorValid },
			{ "IsDeletedComponentValid", &ULevelSnapshotBlueprintFilter::execIsDeletedComponentValid },
			{ "IsPropertyValid", &ULevelSnapshotBlueprintFilter::execIsPropertyValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsActorValid_Parms, Params), Z_Construct_UScriptStruct_FIsActorValidParams, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::NewProp_Params_MetaData)) }; // 2469178653
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsActorValid_Parms, ReturnValue), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(nullptr, 0) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * @return Whether the actor should be considered for the level snapshot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "@return Whether the actor should be considered for the level snapshot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotBlueprintFilter, nullptr, "IsActorValid", nullptr, nullptr, sizeof(LevelSnapshotBlueprintFilter_eventIsActorValid_Parms), Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsAddedActorValid_Parms, Params), Z_Construct_UScriptStruct_FIsAddedActorValidParams, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::NewProp_Params_MetaData)) }; // 19224632
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsAddedActorValid_Parms, ReturnValue), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(nullptr, 0) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09* This is called when an actor was added to the world since the snapshot had been taken. \n\x09* @return Whether to track the added actor\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "This is called when an actor was added to the world since the snapshot had been taken.\n@return Whether to track the added actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotBlueprintFilter, nullptr, "IsAddedActorValid", nullptr, nullptr, sizeof(LevelSnapshotBlueprintFilter_eventIsAddedActorValid_Parms), Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsAddedComponentValid_Parms, Params), Z_Construct_UScriptStruct_FIsAddedComponentValidParams, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::NewProp_Params_MetaData)) }; // 858785891
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsAddedComponentValid_Parms, ReturnValue), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(nullptr, 0) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * This is called when a component was added to the world since the snapshot had been taken. \n\x09 * @return Whether to track the added component\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "This is called when a component was added to the world since the snapshot had been taken.\n@return Whether to track the added component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotBlueprintFilter, nullptr, "IsAddedComponentValid", nullptr, nullptr, sizeof(LevelSnapshotBlueprintFilter_eventIsAddedComponentValid_Parms), Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsDeletedActorValid_Parms, Params), Z_Construct_UScriptStruct_FIsDeletedActorValidParams, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::NewProp_Params_MetaData)) }; // 402524035
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsDeletedActorValid_Parms, ReturnValue), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(nullptr, 0) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09* This is called when an actor was removed from the world since the snapshot had been taken.\n\x09* @return Whether to track the removed actor\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "This is called when an actor was removed from the world since the snapshot had been taken.\n@return Whether to track the removed actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotBlueprintFilter, nullptr, "IsDeletedActorValid", nullptr, nullptr, sizeof(LevelSnapshotBlueprintFilter_eventIsDeletedActorValid_Parms), Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsDeletedComponentValid_Parms, Params), Z_Construct_UScriptStruct_FIsDeletedComponentValidParams, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::NewProp_Params_MetaData)) }; // 2720726088
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsDeletedComponentValid_Parms, ReturnValue), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(nullptr, 0) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * This is called when a component was removed from an actor since the snapshot had been taken. \n\x09 * @return Whether to track the removed component\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "This is called when a component was removed from an actor since the snapshot had been taken.\n@return Whether to track the removed component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotBlueprintFilter, nullptr, "IsDeletedComponentValid", nullptr, nullptr, sizeof(LevelSnapshotBlueprintFilter_eventIsDeletedComponentValid_Parms), Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsPropertyValid_Parms, Params), Z_Construct_UScriptStruct_FIsPropertyValidParams, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::NewProp_Params_MetaData)) }; // 2449847881
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotBlueprintFilter_eventIsPropertyValid_Parms, ReturnValue), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(nullptr, 0) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * @return Whether this property should be considered for rolling back to the version in the snapshot. \n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "@return Whether this property should be considered for rolling back to the version in the snapshot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotBlueprintFilter, nullptr, "IsPropertyValid", nullptr, nullptr, sizeof(LevelSnapshotBlueprintFilter_eventIsPropertyValid_Parms), Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotBlueprintFilter);
	UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilter_NoRegister()
	{
		return ULevelSnapshotBlueprintFilter::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsActorValid, "IsActorValid" }, // 3709193834
		{ &Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedActorValid, "IsAddedActorValid" }, // 2500583451
		{ &Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsAddedComponentValid, "IsAddedComponentValid" }, // 665152029
		{ &Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedActorValid, "IsDeletedActorValid" }, // 736363830
		{ &Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsDeletedComponentValid, "IsDeletedComponentValid" }, // 4195174883
		{ &Z_Construct_UFunction_ULevelSnapshotBlueprintFilter_IsPropertyValid, "IsPropertyValid" }, // 388811009
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base-class for filtering a level snapshot in Blueprints.\n */" },
		{ "IncludePath", "LevelSnapshotFilters.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilters.h" },
		{ "ToolTip", "Base-class for filtering a level snapshot in Blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotBlueprintFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::ClassParams = {
		&ULevelSnapshotBlueprintFilter::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilter()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilter.OuterSingleton, Z_Construct_UClass_ULevelSnapshotBlueprintFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<ULevelSnapshotBlueprintFilter>()
	{
		return ULevelSnapshotBlueprintFilter::StaticClass();
	}
	ULevelSnapshotBlueprintFilter::ULevelSnapshotBlueprintFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotBlueprintFilter);
	ULevelSnapshotBlueprintFilter::~ULevelSnapshotBlueprintFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_Statics::EnumInfo[] = {
		{ EFilterResult_StaticEnum, TEXT("EFilterResult"), &Z_Registration_Info_UEnum_EFilterResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3495860090U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotFilter, ULevelSnapshotFilter::StaticClass, TEXT("ULevelSnapshotFilter"), &Z_Registration_Info_UClass_ULevelSnapshotFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotFilter), 2009199027U) },
		{ Z_Construct_UClass_ULevelSnapshotBlueprintFilter, ULevelSnapshotBlueprintFilter::StaticClass, TEXT("ULevelSnapshotBlueprintFilter"), &Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotBlueprintFilter), 519655917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_1528845521(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilters_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
