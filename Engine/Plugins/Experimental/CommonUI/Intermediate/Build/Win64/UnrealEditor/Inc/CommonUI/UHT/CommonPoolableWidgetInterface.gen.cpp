// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonPoolableWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonPoolableWidgetInterface() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(ICommonPoolableWidgetInterface::execOnReleaseToPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReleaseToPool_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICommonPoolableWidgetInterface::execOnAcquireFromPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcquireFromPool_Implementation();
		P_NATIVE_END;
	}
	void ICommonPoolableWidgetInterface::OnAcquireFromPool()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAcquireFromPool instead.");
	}
	void ICommonPoolableWidgetInterface::OnReleaseToPool()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReleaseToPool instead.");
	}
	void UCommonPoolableWidgetInterface::StaticRegisterNativesUCommonPoolableWidgetInterface()
	{
		UClass* Class = UCommonPoolableWidgetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAcquireFromPool", &ICommonPoolableWidgetInterface::execOnAcquireFromPool },
			{ "OnReleaseToPool", &ICommonPoolableWidgetInterface::execOnReleaseToPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Poolable Widget" },
		{ "ModuleRelativePath", "Public/CommonPoolableWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPoolableWidgetInterface, nullptr, "OnAcquireFromPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Poolable Widget" },
		{ "ModuleRelativePath", "Public/CommonPoolableWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPoolableWidgetInterface, nullptr, "OnReleaseToPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonPoolableWidgetInterface);
	UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface_NoRegister()
	{
		return UCommonPoolableWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool, "OnAcquireFromPool" }, // 252254292
		{ &Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool, "OnReleaseToPool" }, // 1874480487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPoolableWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICommonPoolableWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::ClassParams = {
		&UCommonPoolableWidgetInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.OuterSingleton, Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonPoolableWidgetInterface>()
	{
		return UCommonPoolableWidgetInterface::StaticClass();
	}
	UCommonPoolableWidgetInterface::UCommonPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonPoolableWidgetInterface);
	UCommonPoolableWidgetInterface::~UCommonPoolableWidgetInterface() {}
	static FName NAME_UCommonPoolableWidgetInterface_OnAcquireFromPool = FName(TEXT("OnAcquireFromPool"));
	void ICommonPoolableWidgetInterface::Execute_OnAcquireFromPool(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCommonPoolableWidgetInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCommonPoolableWidgetInterface_OnAcquireFromPool);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICommonPoolableWidgetInterface*)(O->GetNativeInterfaceAddress(UCommonPoolableWidgetInterface::StaticClass())))
		{
			I->OnAcquireFromPool_Implementation();
		}
	}
	static FName NAME_UCommonPoolableWidgetInterface_OnReleaseToPool = FName(TEXT("OnReleaseToPool"));
	void ICommonPoolableWidgetInterface::Execute_OnReleaseToPool(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCommonPoolableWidgetInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCommonPoolableWidgetInterface_OnReleaseToPool);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICommonPoolableWidgetInterface*)(O->GetNativeInterfaceAddress(UCommonPoolableWidgetInterface::StaticClass())))
		{
			I->OnReleaseToPool_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonPoolableWidgetInterface, UCommonPoolableWidgetInterface::StaticClass, TEXT("UCommonPoolableWidgetInterface"), &Z_Registration_Info_UClass_UCommonPoolableWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonPoolableWidgetInterface), 1624329321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_3139410924(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
