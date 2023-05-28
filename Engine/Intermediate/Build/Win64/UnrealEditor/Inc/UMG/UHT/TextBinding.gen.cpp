// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/TextBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UMG_API UClass* Z_Construct_UClass_UTextBinding();
	UMG_API UClass* Z_Construct_UClass_UTextBinding_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UTextBinding::execGetStringValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBinding::execGetTextValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTextValue();
		P_NATIVE_END;
	}
	void UTextBinding::StaticRegisterNativesUTextBinding()
	{
		UClass* Class = UTextBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStringValue", &UTextBinding::execGetStringValue },
			{ "GetTextValue", &UTextBinding::execGetTextValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextBinding_GetStringValue_Statics
	{
		struct TextBinding_eventGetStringValue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextBinding_eventGetStringValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBinding, nullptr, "GetStringValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::TextBinding_eventGetStringValue_Parms), Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBinding_GetStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBinding_GetTextValue_Statics
	{
		struct TextBinding_eventGetTextValue_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextBinding_eventGetTextValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBinding, nullptr, "GetTextValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::TextBinding_eventGetTextValue_Parms), Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBinding_GetTextValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextBinding);
	UClass* Z_Construct_UClass_UTextBinding_NoRegister()
	{
		return UTextBinding::StaticClass();
	}
	struct Z_Construct_UClass_UTextBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextBinding_GetStringValue, "GetStringValue" }, // 2113219799
		{ &Z_Construct_UFunction_UTextBinding_GetTextValue, "GetTextValue" }, // 484635015
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/TextBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextBinding_Statics::ClassParams = {
		&UTextBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBinding()
	{
		if (!Z_Registration_Info_UClass_UTextBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextBinding.OuterSingleton, Z_Construct_UClass_UTextBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UTextBinding>()
	{
		return UTextBinding::StaticClass();
	}
	UTextBinding::UTextBinding() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBinding);
	UTextBinding::~UTextBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextBinding, UTextBinding::StaticClass, TEXT("UTextBinding"), &Z_Registration_Info_UClass_UTextBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextBinding), 205391599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_2076466445(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
