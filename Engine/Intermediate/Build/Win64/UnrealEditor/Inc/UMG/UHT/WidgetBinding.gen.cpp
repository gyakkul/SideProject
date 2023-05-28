// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/WidgetBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetBinding();
	UMG_API UClass* Z_Construct_UClass_UWidgetBinding_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetBinding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UWidgetBinding::StaticRegisterNativesUWidgetBinding()
	{
		UClass* Class = UWidgetBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UWidgetBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetBinding_GetValue_Statics
	{
		struct WidgetBinding_eventGetValue_Parms
		{
			UWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/WidgetBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBinding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::WidgetBinding_eventGetValue_Parms), Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBinding);
	UClass* Z_Construct_UClass_UWidgetBinding_NoRegister()
	{
		return UWidgetBinding::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetBinding_GetValue, "GetValue" }, // 583146740
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/WidgetBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/WidgetBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBinding_Statics::ClassParams = {
		&UWidgetBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBinding()
	{
		if (!Z_Registration_Info_UClass_UWidgetBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBinding.OuterSingleton, Z_Construct_UClass_UWidgetBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetBinding>()
	{
		return UWidgetBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBinding);
	UWidgetBinding::~UWidgetBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBinding, UWidgetBinding::StaticClass, TEXT("UWidgetBinding"), &Z_Registration_Info_UClass_UWidgetBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBinding), 1105687334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_3751938828(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
