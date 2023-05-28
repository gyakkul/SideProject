// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/Int32Binding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInt32Binding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UInt32Binding();
	UMG_API UClass* Z_Construct_UClass_UInt32Binding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UInt32Binding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UInt32Binding::StaticRegisterNativesUInt32Binding()
	{
		UClass* Class = UInt32Binding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UInt32Binding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInt32Binding_GetValue_Statics
	{
		struct Int32Binding_eventGetValue_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32Binding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Int32Binding_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32Binding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/Int32Binding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32Binding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32Binding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Int32Binding_eventGetValue_Parms), Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32Binding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInt32Binding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInt32Binding);
	UClass* Z_Construct_UClass_UInt32Binding_NoRegister()
	{
		return UInt32Binding::StaticClass();
	}
	struct Z_Construct_UClass_UInt32Binding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInt32Binding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInt32Binding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInt32Binding_GetValue, "GetValue" }, // 3119138198
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/Int32Binding.h" },
		{ "ModuleRelativePath", "Public/Binding/Int32Binding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInt32Binding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInt32Binding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInt32Binding_Statics::ClassParams = {
		&UInt32Binding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInt32Binding()
	{
		if (!Z_Registration_Info_UClass_UInt32Binding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInt32Binding.OuterSingleton, Z_Construct_UClass_UInt32Binding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInt32Binding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UInt32Binding>()
	{
		return UInt32Binding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInt32Binding);
	UInt32Binding::~UInt32Binding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInt32Binding, UInt32Binding::StaticClass, TEXT("UInt32Binding"), &Z_Registration_Info_UClass_UInt32Binding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInt32Binding), 3056204275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_2953937076(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
