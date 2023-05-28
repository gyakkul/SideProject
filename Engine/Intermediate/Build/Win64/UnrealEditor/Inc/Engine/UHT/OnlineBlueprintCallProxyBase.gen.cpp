// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBlueprintCallProxyBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Net/OnlineBlueprintCallProxyBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "EmptyOnlineDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEmptyOnlineDelegate_DelegateWrapper(const FMulticastScriptDelegate& EmptyOnlineDelegate)
{
	EmptyOnlineDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	void UOnlineBlueprintCallProxyBase::StaticRegisterNativesUOnlineBlueprintCallProxyBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineBlueprintCallProxyBase);
	UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister()
	{
		return UOnlineBlueprintCallProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/OnlineBlueprintCallProxyBase.h" },
		{ "ModuleRelativePath", "Public/Net/OnlineBlueprintCallProxyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBlueprintCallProxyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::ClassParams = {
		&UOnlineBlueprintCallProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase()
	{
		if (!Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.OuterSingleton, Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UOnlineBlueprintCallProxyBase>()
	{
		return UOnlineBlueprintCallProxyBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBlueprintCallProxyBase);
	UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineBlueprintCallProxyBase, UOnlineBlueprintCallProxyBase::StaticClass, TEXT("UOnlineBlueprintCallProxyBase"), &Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineBlueprintCallProxyBase), 356064170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_586216346(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
