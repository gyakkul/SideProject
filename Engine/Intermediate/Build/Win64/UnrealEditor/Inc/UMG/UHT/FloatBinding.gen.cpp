// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/FloatBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UFloatBinding();
	UMG_API UClass* Z_Construct_UClass_UFloatBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UFloatBinding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UFloatBinding::StaticRegisterNativesUFloatBinding()
	{
		UClass* Class = UFloatBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UFloatBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatBinding_GetValue_Statics
	{
		struct FloatBinding_eventGetValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FloatBinding_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatBinding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/FloatBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatBinding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FloatBinding_eventGetValue_Parms), Z_Construct_UFunction_UFloatBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatBinding);
	UClass* Z_Construct_UClass_UFloatBinding_NoRegister()
	{
		return UFloatBinding::StaticClass();
	}
	struct Z_Construct_UClass_UFloatBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatBinding_GetValue, "GetValue" }, // 3285437089
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/FloatBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/FloatBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatBinding_Statics::ClassParams = {
		&UFloatBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloatBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatBinding()
	{
		if (!Z_Registration_Info_UClass_UFloatBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatBinding.OuterSingleton, Z_Construct_UClass_UFloatBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UFloatBinding>()
	{
		return UFloatBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatBinding);
	UFloatBinding::~UFloatBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloatBinding, UFloatBinding::StaticClass, TEXT("UFloatBinding"), &Z_Registration_Info_UClass_UFloatBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatBinding), 1436816938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_465595469(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
