// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/VisibilityBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisibilityBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UMG_API UClass* Z_Construct_UClass_UVisibilityBinding();
	UMG_API UClass* Z_Construct_UClass_UVisibilityBinding_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UVisibilityBinding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UVisibilityBinding::StaticRegisterNativesUVisibilityBinding()
	{
		UClass* Class = UVisibilityBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UVisibilityBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics
	{
		struct VisibilityBinding_eventGetValue_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VisibilityBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/VisibilityBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisibilityBinding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::VisibilityBinding_eventGetValue_Parms), Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisibilityBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisibilityBinding);
	UClass* Z_Construct_UClass_UVisibilityBinding_NoRegister()
	{
		return UVisibilityBinding::StaticClass();
	}
	struct Z_Construct_UClass_UVisibilityBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisibilityBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVisibilityBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisibilityBinding_GetValue, "GetValue" }, // 1435544713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisibilityBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/VisibilityBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/VisibilityBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisibilityBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisibilityBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisibilityBinding_Statics::ClassParams = {
		&UVisibilityBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisibilityBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisibilityBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisibilityBinding()
	{
		if (!Z_Registration_Info_UClass_UVisibilityBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisibilityBinding.OuterSingleton, Z_Construct_UClass_UVisibilityBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisibilityBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UVisibilityBinding>()
	{
		return UVisibilityBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisibilityBinding);
	UVisibilityBinding::~UVisibilityBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisibilityBinding, UVisibilityBinding::StaticClass, TEXT("UVisibilityBinding"), &Z_Registration_Info_UClass_UVisibilityBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisibilityBinding), 929429964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_1942791658(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
