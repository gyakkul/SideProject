// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/MouseCursorBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseCursorBinding() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
	UMG_API UClass* Z_Construct_UClass_UMouseCursorBinding();
	UMG_API UClass* Z_Construct_UClass_UMouseCursorBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UMouseCursorBinding::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EMouseCursor::Type>*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UMouseCursorBinding::StaticRegisterNativesUMouseCursorBinding()
	{
		UClass* Class = UMouseCursorBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UMouseCursorBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics
	{
		struct MouseCursorBinding_eventGetValue_Parms
		{
			TEnumAsByte<EMouseCursor::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MouseCursorBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) }; // 396763658
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/MouseCursorBinding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMouseCursorBinding, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::MouseCursorBinding_eventGetValue_Parms), Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMouseCursorBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMouseCursorBinding);
	UClass* Z_Construct_UClass_UMouseCursorBinding_NoRegister()
	{
		return UMouseCursorBinding::StaticClass();
	}
	struct Z_Construct_UClass_UMouseCursorBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMouseCursorBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMouseCursorBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMouseCursorBinding_GetValue, "GetValue" }, // 2000260640
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMouseCursorBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/MouseCursorBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/MouseCursorBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMouseCursorBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseCursorBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMouseCursorBinding_Statics::ClassParams = {
		&UMouseCursorBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMouseCursorBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMouseCursorBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMouseCursorBinding()
	{
		if (!Z_Registration_Info_UClass_UMouseCursorBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMouseCursorBinding.OuterSingleton, Z_Construct_UClass_UMouseCursorBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMouseCursorBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMouseCursorBinding>()
	{
		return UMouseCursorBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseCursorBinding);
	UMouseCursorBinding::~UMouseCursorBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMouseCursorBinding, UMouseCursorBinding::StaticClass, TEXT("UMouseCursorBinding"), &Z_Registration_Info_UClass_UMouseCursorBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMouseCursorBinding), 4122067057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_4000850451(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
