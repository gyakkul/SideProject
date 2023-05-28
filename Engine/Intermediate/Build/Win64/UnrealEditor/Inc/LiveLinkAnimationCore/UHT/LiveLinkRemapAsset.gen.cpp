// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRemapAsset() {}
// Cross Module References
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	UPackage* Z_Construct_UPackage__Script_LiveLinkAnimationCore();
// End Cross Module References
	DEFINE_FUNCTION(ULiveLinkRemapAsset::execRemapCurveElements)
	{
		P_GET_TMAP_REF(FName,float,Z_Param_Out_CurveItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemapCurveElements_Implementation(Z_Param_Out_CurveItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkRemapAsset::execGetRemappedCurveName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRemappedCurveName_Implementation(Z_Param_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkRemapAsset::execGetRemappedBoneName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRemappedBoneName_Implementation(Z_Param_BoneName);
		P_NATIVE_END;
	}
	struct LiveLinkRemapAsset_eventGetRemappedBoneName_Parms
	{
		FName BoneName;
		FName ReturnValue;
	};
	struct LiveLinkRemapAsset_eventGetRemappedCurveName_Parms
	{
		FName CurveName;
		FName ReturnValue;
	};
	struct LiveLinkRemapAsset_eventRemapCurveElements_Parms
	{
		TMap<FName,float> CurveItems;
	};
	static FName NAME_ULiveLinkRemapAsset_GetRemappedBoneName = FName(TEXT("GetRemappedBoneName"));
	FName ULiveLinkRemapAsset::GetRemappedBoneName(FName BoneName) const
	{
		LiveLinkRemapAsset_eventGetRemappedBoneName_Parms Parms;
		Parms.BoneName=BoneName;
		const_cast<ULiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULiveLinkRemapAsset_GetRemappedBoneName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULiveLinkRemapAsset_GetRemappedCurveName = FName(TEXT("GetRemappedCurveName"));
	FName ULiveLinkRemapAsset::GetRemappedCurveName(FName CurveName) const
	{
		LiveLinkRemapAsset_eventGetRemappedCurveName_Parms Parms;
		Parms.CurveName=CurveName;
		const_cast<ULiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULiveLinkRemapAsset_GetRemappedCurveName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULiveLinkRemapAsset_RemapCurveElements = FName(TEXT("RemapCurveElements"));
	void ULiveLinkRemapAsset::RemapCurveElements(TMap<FName,float>& CurveItems) const
	{
		LiveLinkRemapAsset_eventRemapCurveElements_Parms Parms;
		Parms.CurveItems=CurveItems;
		const_cast<ULiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULiveLinkRemapAsset_RemapCurveElements),&Parms);
		CurveItems=Parms.CurveItems;
	}
	void ULiveLinkRemapAsset::StaticRegisterNativesULiveLinkRemapAsset()
	{
		UClass* Class = ULiveLinkRemapAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRemappedBoneName", &ULiveLinkRemapAsset::execGetRemappedBoneName },
			{ "GetRemappedCurveName", &ULiveLinkRemapAsset::execGetRemappedCurveName },
			{ "RemapCurveElements", &ULiveLinkRemapAsset::execRemapCurveElements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedBoneName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped bone name from the original */" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped bone name from the original" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkRemapAsset, nullptr, "GetRemappedBoneName", nullptr, nullptr, sizeof(LiveLinkRemapAsset_eventGetRemappedBoneName_Parms), Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedCurveName_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkRemapAsset_eventGetRemappedCurveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped curve name from the original */" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped curve name from the original" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkRemapAsset, nullptr, "GetRemappedCurveName", nullptr, nullptr, sizeof(LiveLinkRemapAsset_eventGetRemappedCurveName_Parms), Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveItems_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveItems_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp = { "CurveItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp = { "CurveItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems = { "CurveItems", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkRemapAsset_eventRemapCurveElements_Parms, CurveItems), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName */" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkRemapAsset, nullptr, "RemapCurveElements", nullptr, nullptr, sizeof(LiveLinkRemapAsset_eventRemapCurveElements_Parms), Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkRemapAsset);
	UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister()
	{
		return ULiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkRemapAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName, "GetRemappedBoneName" }, // 2810065347
		{ &Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName, "GetRemappedCurveName" }, // 3399260693
		{ &Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements, "RemapCurveElements" }, // 3217833304
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Remap asset for data coming from Live Link. Allows simple application of bone transforms into current pose based on name remapping only\n" },
		{ "IncludePath", "LiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkRemapAsset.h" },
		{ "ToolTip", "Remap asset for data coming from Live Link. Allows simple application of bone transforms into current pose based on name remapping only" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkRemapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkRemapAsset_Statics::ClassParams = {
		&ULiveLinkRemapAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkRemapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkRemapAsset()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton, Z_Construct_UClass_ULiveLinkRemapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton;
	}
	template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<ULiveLinkRemapAsset>()
	{
		return ULiveLinkRemapAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkRemapAsset);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkRemapAsset, ULiveLinkRemapAsset::StaticClass, TEXT("ULiveLinkRemapAsset"), &Z_Registration_Info_UClass_ULiveLinkRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkRemapAsset), 2787162956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_3439623293(TEXT("/Script/LiveLinkAnimationCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
