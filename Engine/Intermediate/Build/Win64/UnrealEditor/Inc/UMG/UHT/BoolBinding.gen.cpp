// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/BoolBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UBoolBinding();
	UMG_API UClass* Z_Construct_UClass_UBoolBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UBoolBinding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UBoolBinding::StaticRegisterNativesUBoolBinding()
	{
		UClass* Class = UBoolBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UBoolBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoolBinding_GetValue_Statics
	{
		struct BoolBinding_eventGetValue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoolBinding_eventGetValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BoolBinding_eventGetValue_Parms), &Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolBinding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoolBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/BoolBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolBinding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoolBinding_GetValue_Statics::BoolBinding_eventGetValue_Parms), Z_Construct_UFunction_UBoolBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoolBinding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoolBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoolBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoolBinding);
	UClass* Z_Construct_UClass_UBoolBinding_NoRegister()
	{
		return UBoolBinding::StaticClass();
	}
	struct Z_Construct_UClass_UBoolBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoolBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoolBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoolBinding_GetValue, "GetValue" }, // 1812543447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/BoolBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/BoolBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoolBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoolBinding_Statics::ClassParams = {
		&UBoolBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoolBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoolBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoolBinding()
	{
		if (!Z_Registration_Info_UClass_UBoolBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoolBinding.OuterSingleton, Z_Construct_UClass_UBoolBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoolBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UBoolBinding>()
	{
		return UBoolBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolBinding);
	UBoolBinding::~UBoolBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoolBinding, UBoolBinding::StaticClass, TEXT("UBoolBinding"), &Z_Registration_Info_UClass_UBoolBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoolBinding), 3016848906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_559588155(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
