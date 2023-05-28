// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/CheckedStateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckedStateBinding() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UMG_API UClass* Z_Construct_UClass_UCheckedStateBinding();
	UMG_API UClass* Z_Construct_UClass_UCheckedStateBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UCheckedStateBinding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECheckBoxState*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UCheckedStateBinding::StaticRegisterNativesUCheckedStateBinding()
	{
		UClass* Class = UCheckedStateBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UCheckedStateBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics
	{
		struct CheckedStateBinding_eventGetValue_Parms
		{
			ECheckBoxState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckedStateBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/CheckedStateBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckedStateBinding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::CheckedStateBinding_eventGetValue_Parms), Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckedStateBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckedStateBinding);
	UClass* Z_Construct_UClass_UCheckedStateBinding_NoRegister()
	{
		return UCheckedStateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UCheckedStateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckedStateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckedStateBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckedStateBinding_GetValue, "GetValue" }, // 794338743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/CheckedStateBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/CheckedStateBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckedStateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckedStateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckedStateBinding_Statics::ClassParams = {
		&UCheckedStateBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckedStateBinding()
	{
		if (!Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton, Z_Construct_UClass_UCheckedStateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UCheckedStateBinding>()
	{
		return UCheckedStateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckedStateBinding);
	UCheckedStateBinding::~UCheckedStateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCheckedStateBinding, UCheckedStateBinding::StaticClass, TEXT("UCheckedStateBinding"), &Z_Registration_Info_UClass_UCheckedStateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckedStateBinding), 180065238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_3644363050(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
