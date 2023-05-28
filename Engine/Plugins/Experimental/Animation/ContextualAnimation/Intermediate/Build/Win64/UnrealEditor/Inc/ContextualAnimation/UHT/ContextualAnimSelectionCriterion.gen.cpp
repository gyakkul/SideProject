// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimSelectionCriterion.h"
#include "ContextualAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimSelectionCriterion() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_NoRegister();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimCriterionType;
	static UEnum* EContextualAnimCriterionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimCriterionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimCriterionType"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionType.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCriterionType>()
	{
		return EContextualAnimCriterionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::Enumerators[] = {
		{ "EContextualAnimCriterionType::Spatial", (int64)EContextualAnimCriterionType::Spatial },
		{ "EContextualAnimCriterionType::Other", (int64)EContextualAnimCriterionType::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "Other.Name", "EContextualAnimCriterionType::Other" },
		{ "Spatial.Name", "EContextualAnimCriterionType::Spatial" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimCriterionType",
		"EContextualAnimCriterionType",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimCriterionType.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionType.InnerSingleton;
	}
	void UContextualAnimSelectionCriterion::StaticRegisterNativesUContextualAnimSelectionCriterion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSelectionCriterion);
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_NoRegister()
	{
		return UContextualAnimSelectionCriterion::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UContextualAnimSelectionCriterion\n//===========================================================================\n" },
		{ "IncludePath", "ContextualAnimSelectionCriterion.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UContextualAnimSelectionCriterion" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion, Type), Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionType, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::NewProp_Type_MetaData)) }; // 3435973691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSelectionCriterion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::ClassParams = {
		&UContextualAnimSelectionCriterion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSelectionCriterion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSelectionCriterion.OuterSingleton, Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSelectionCriterion.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSelectionCriterion>()
	{
		return UContextualAnimSelectionCriterion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSelectionCriterion);
	UContextualAnimSelectionCriterion::~UContextualAnimSelectionCriterion() {}
	DEFINE_FUNCTION(UContextualAnimSelectionCriterion_Blueprint::execGetSceneAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UContextualAnimSceneAsset**)Z_Param__Result=P_THIS->GetSceneAsset();
		P_NATIVE_END;
	}
	struct ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms
	{
		FContextualAnimSceneBindingContext Primary;
		FContextualAnimSceneBindingContext Querier;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition = FName(TEXT("BP_DoesQuerierPassCondition"));
	bool UContextualAnimSelectionCriterion_Blueprint::BP_DoesQuerierPassCondition(FContextualAnimSceneBindingContext const& Primary, FContextualAnimSceneBindingContext const& Querier) const
	{
		ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms Parms;
		Parms.Primary=Primary;
		Parms.Querier=Querier;
		const_cast<UContextualAnimSelectionCriterion_Blueprint*>(this)->ProcessEvent(FindFunctionChecked(NAME_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	void UContextualAnimSelectionCriterion_Blueprint::StaticRegisterNativesUContextualAnimSelectionCriterion_Blueprint()
	{
		UClass* Class = UContextualAnimSelectionCriterion_Blueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSceneAsset", &UContextualAnimSelectionCriterion_Blueprint::execGetSceneAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Querier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Querier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Primary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms, Primary), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Primary_MetaData)) }; // 2634761810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Querier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms, Querier), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Querier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Querier_MetaData)) }; // 2634761810
	void Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms), &Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_Querier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Does Querier Pass Condition" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint, nullptr, "BP_DoesQuerierPassCondition", nullptr, nullptr, sizeof(ContextualAnimSelectionCriterion_Blueprint_eventBP_DoesQuerierPassCondition_Parms), Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics
	{
		struct ContextualAnimSelectionCriterion_Blueprint_eventGetSceneAsset_Parms
		{
			const UContextualAnimSceneAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSelectionCriterion_Blueprint_eventGetSceneAsset_Parms, ReturnValue), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint, nullptr, "GetSceneAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::ContextualAnimSelectionCriterion_Blueprint_eventGetSceneAsset_Parms), Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSelectionCriterion_Blueprint);
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_NoRegister()
	{
		return UContextualAnimSelectionCriterion_Blueprint::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContextualAnimSelectionCriterion,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition, "BP_DoesQuerierPassCondition" }, // 4018136232
		{ &Z_Construct_UFunction_UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset, "GetSceneAsset" }, // 3888220617
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UContextualAnimSelectionCriterion_Blueprint\n//===========================================================================\n" },
		{ "IncludePath", "ContextualAnimSelectionCriterion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UContextualAnimSelectionCriterion_Blueprint" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSelectionCriterion_Blueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::ClassParams = {
		&UContextualAnimSelectionCriterion_Blueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Blueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Blueprint.OuterSingleton, Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Blueprint.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSelectionCriterion_Blueprint>()
	{
		return UContextualAnimSelectionCriterion_Blueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSelectionCriterion_Blueprint);
	UContextualAnimSelectionCriterion_Blueprint::~UContextualAnimSelectionCriterion_Blueprint() {}
	void UContextualAnimSelectionCriterion_TriggerArea::StaticRegisterNativesUContextualAnimSelectionCriterion_TriggerArea()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSelectionCriterion_TriggerArea);
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_NoRegister()
	{
		return UContextualAnimSelectionCriterion_TriggerArea::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContextualAnimSelectionCriterion,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// UContextualAnimSelectionCriterion_TriggerArea\n//===========================================================================\n" },
		{ "IncludePath", "ContextualAnimSelectionCriterion.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UContextualAnimSelectionCriterion_TriggerArea" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_PolygonPoints_Inner = { "PolygonPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_PolygonPoints_MetaData[] = {
		{ "Category", "Default" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_PolygonPoints = { "PolygonPoints", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_TriggerArea, PolygonPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_PolygonPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_PolygonPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_TriggerArea, Height), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_PolygonPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_PolygonPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::NewProp_Height,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSelectionCriterion_TriggerArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::ClassParams = {
		&UContextualAnimSelectionCriterion_TriggerArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_TriggerArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_TriggerArea.OuterSingleton, Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_TriggerArea.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSelectionCriterion_TriggerArea>()
	{
		return UContextualAnimSelectionCriterion_TriggerArea::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSelectionCriterion_TriggerArea);
	UContextualAnimSelectionCriterion_TriggerArea::~UContextualAnimSelectionCriterion_TriggerArea() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode;
	static UEnum* EContextualAnimCriterionConeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimCriterionConeMode"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCriterionConeMode>()
	{
		return EContextualAnimCriterionConeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::Enumerators[] = {
		{ "EContextualAnimCriterionConeMode::ToPrimary", (int64)EContextualAnimCriterionConeMode::ToPrimary },
		{ "EContextualAnimCriterionConeMode::FromPrimary", (int64)EContextualAnimCriterionConeMode::FromPrimary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UContextualAnimSelectionCriterion_Cone\n//===========================================================================\n" },
		{ "FromPrimary.Comment", "/** Uses the angle between the vector from primary to querier and primary forward vector rotated by offset */" },
		{ "FromPrimary.Name", "EContextualAnimCriterionConeMode::FromPrimary" },
		{ "FromPrimary.ToolTip", "Uses the angle between the vector from primary to querier and primary forward vector rotated by offset" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "ToolTip", "UContextualAnimSelectionCriterion_Cone" },
		{ "ToPrimary.Comment", "/** Uses the angle between the vector from querier to primary and querier forward vector rotated by offset */" },
		{ "ToPrimary.Name", "EContextualAnimCriterionConeMode::ToPrimary" },
		{ "ToPrimary.ToolTip", "Uses the angle between the vector from querier to primary and querier forward vector rotated by offset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimCriterionConeMode",
		"EContextualAnimCriterionConeMode",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode.InnerSingleton;
	}
	void UContextualAnimSelectionCriterion_Cone::StaticRegisterNativesUContextualAnimSelectionCriterion_Cone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSelectionCriterion_Cone);
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_NoRegister()
	{
		return UContextualAnimSelectionCriterion_Cone::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContextualAnimSelectionCriterion,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualAnimSelectionCriterion.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_Cone, Mode), Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionConeMode, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Mode_MetaData)) }; // 1388938454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_Cone, Distance), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_HalfAngle_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_Cone, HalfAngle), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_HalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_HalfAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_Cone, Offset), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_HalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::NewProp_Offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSelectionCriterion_Cone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::ClassParams = {
		&UContextualAnimSelectionCriterion_Cone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Cone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Cone.OuterSingleton, Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Cone.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSelectionCriterion_Cone>()
	{
		return UContextualAnimSelectionCriterion_Cone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSelectionCriterion_Cone);
	UContextualAnimSelectionCriterion_Cone::~UContextualAnimSelectionCriterion_Cone() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode;
	static UEnum* EContextualAnimCriterionDistanceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimCriterionDistanceMode"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCriterionDistanceMode>()
	{
		return EContextualAnimCriterionDistanceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::Enumerators[] = {
		{ "EContextualAnimCriterionDistanceMode::Distance_3D", (int64)EContextualAnimCriterionDistanceMode::Distance_3D },
		{ "EContextualAnimCriterionDistanceMode::Distance_2D", (int64)EContextualAnimCriterionDistanceMode::Distance_2D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UContextualAnimSelectionCriterion_Distance\n//===========================================================================\n" },
		{ "Distance_2D.Name", "EContextualAnimCriterionDistanceMode::Distance_2D" },
		{ "Distance_3D.Name", "EContextualAnimCriterionDistanceMode::Distance_3D" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "ToolTip", "UContextualAnimSelectionCriterion_Distance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimCriterionDistanceMode",
		"EContextualAnimCriterionDistanceMode",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode.InnerSingleton;
	}
	void UContextualAnimSelectionCriterion_Distance::StaticRegisterNativesUContextualAnimSelectionCriterion_Distance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSelectionCriterion_Distance);
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_NoRegister()
	{
		return UContextualAnimSelectionCriterion_Distance::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContextualAnimSelectionCriterion,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualAnimSelectionCriterion.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_Distance, Mode), Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionDistanceMode, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_Mode_MetaData)) }; // 377602034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_Distance, MinDistance), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ContextualAnimSelectionCriterion.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSelectionCriterion_Distance, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::NewProp_MaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSelectionCriterion_Distance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::ClassParams = {
		&UContextualAnimSelectionCriterion_Distance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Distance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Distance.OuterSingleton, Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Distance.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSelectionCriterion_Distance>()
	{
		return UContextualAnimSelectionCriterion_Distance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSelectionCriterion_Distance);
	UContextualAnimSelectionCriterion_Distance::~UContextualAnimSelectionCriterion_Distance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_Statics::EnumInfo[] = {
		{ EContextualAnimCriterionType_StaticEnum, TEXT("EContextualAnimCriterionType"), &Z_Registration_Info_UEnum_EContextualAnimCriterionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3435973691U) },
		{ EContextualAnimCriterionConeMode_StaticEnum, TEXT("EContextualAnimCriterionConeMode"), &Z_Registration_Info_UEnum_EContextualAnimCriterionConeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1388938454U) },
		{ EContextualAnimCriterionDistanceMode_StaticEnum, TEXT("EContextualAnimCriterionDistanceMode"), &Z_Registration_Info_UEnum_EContextualAnimCriterionDistanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 377602034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimSelectionCriterion, UContextualAnimSelectionCriterion::StaticClass, TEXT("UContextualAnimSelectionCriterion"), &Z_Registration_Info_UClass_UContextualAnimSelectionCriterion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSelectionCriterion), 853818193U) },
		{ Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint, UContextualAnimSelectionCriterion_Blueprint::StaticClass, TEXT("UContextualAnimSelectionCriterion_Blueprint"), &Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSelectionCriterion_Blueprint), 2053973197U) },
		{ Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea, UContextualAnimSelectionCriterion_TriggerArea::StaticClass, TEXT("UContextualAnimSelectionCriterion_TriggerArea"), &Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_TriggerArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSelectionCriterion_TriggerArea), 1409122586U) },
		{ Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone, UContextualAnimSelectionCriterion_Cone::StaticClass, TEXT("UContextualAnimSelectionCriterion_Cone"), &Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Cone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSelectionCriterion_Cone), 201155371U) },
		{ Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance, UContextualAnimSelectionCriterion_Distance::StaticClass, TEXT("UContextualAnimSelectionCriterion_Distance"), &Z_Registration_Info_UClass_UContextualAnimSelectionCriterion_Distance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSelectionCriterion_Distance), 2295687025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_3166859518(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
