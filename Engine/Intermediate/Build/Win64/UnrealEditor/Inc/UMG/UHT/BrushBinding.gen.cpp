// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/BrushBinding.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushBinding() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UBrushBinding();
	UMG_API UClass* Z_Construct_UClass_UBrushBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UBrushBinding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UBrushBinding::StaticRegisterNativesUBrushBinding()
	{
		UClass* Class = UBrushBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UBrushBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBrushBinding_GetValue_Statics
	{
		struct BrushBinding_eventGetValue_Parms
		{
			FSlateBrush ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrushBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BrushBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrushBinding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrushBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrushBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/BrushBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrushBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrushBinding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::BrushBinding_eventGetValue_Parms), Z_Construct_UFunction_UBrushBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrushBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrushBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushBinding);
	UClass* Z_Construct_UClass_UBrushBinding_NoRegister()
	{
		return UBrushBinding::StaticClass();
	}
	struct Z_Construct_UClass_UBrushBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBrushBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrushBinding_GetValue, "GetValue" }, // 3041721649
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/BrushBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/BrushBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushBinding_Statics::ClassParams = {
		&UBrushBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBrushBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushBinding()
	{
		if (!Z_Registration_Info_UClass_UBrushBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushBinding.OuterSingleton, Z_Construct_UClass_UBrushBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UBrushBinding>()
	{
		return UBrushBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBinding);
	UBrushBinding::~UBrushBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBrushBinding, UBrushBinding::StaticClass, TEXT("UBrushBinding"), &Z_Registration_Info_UClass_UBrushBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushBinding), 3944105681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_3150669409(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
