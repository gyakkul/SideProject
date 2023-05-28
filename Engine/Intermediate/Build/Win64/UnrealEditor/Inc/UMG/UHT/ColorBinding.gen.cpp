// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/ColorBinding.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorBinding() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UColorBinding();
	UMG_API UClass* Z_Construct_UClass_UColorBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UColorBinding::execGetLinearValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorBinding::execGetSlateValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateColor*)Z_Param__Result=P_THIS->GetSlateValue();
		P_NATIVE_END;
	}
	void UColorBinding::StaticRegisterNativesUColorBinding()
	{
		UClass* Class = UColorBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLinearValue", &UColorBinding::execGetLinearValue },
			{ "GetSlateValue", &UColorBinding::execGetSlateValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics
	{
		struct ColorBinding_eventGetLinearValue_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorBinding_eventGetLinearValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBinding, nullptr, "GetLinearValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::ColorBinding_eventGetLinearValue_Parms), Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorBinding_GetLinearValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics
	{
		struct ColorBinding_eventGetSlateValue_Parms
		{
			FSlateColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorBinding_eventGetSlateValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBinding, nullptr, "GetSlateValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::ColorBinding_eventGetSlateValue_Parms), Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorBinding_GetSlateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorBinding);
	UClass* Z_Construct_UClass_UColorBinding_NoRegister()
	{
		return UColorBinding::StaticClass();
	}
	struct Z_Construct_UClass_UColorBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorBinding_GetLinearValue, "GetLinearValue" }, // 3766100273
		{ &Z_Construct_UFunction_UColorBinding_GetSlateValue, "GetSlateValue" }, // 4224494160
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/ColorBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorBinding_Statics::ClassParams = {
		&UColorBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorBinding()
	{
		if (!Z_Registration_Info_UClass_UColorBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorBinding.OuterSingleton, Z_Construct_UClass_UColorBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UColorBinding>()
	{
		return UColorBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorBinding);
	UColorBinding::~UColorBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UColorBinding, UColorBinding::StaticClass, TEXT("UColorBinding"), &Z_Registration_Info_UClass_UColorBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorBinding), 73072419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_3840936904(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
