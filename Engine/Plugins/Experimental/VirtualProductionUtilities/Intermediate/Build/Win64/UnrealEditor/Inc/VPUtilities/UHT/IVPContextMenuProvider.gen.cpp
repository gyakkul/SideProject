// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVPContextMenuProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVPContextMenuProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPContextMenuProvider();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPContextMenuProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVPContextMenuProvider::execOnCreateContextMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateContextMenu_Implementation();
		P_NATIVE_END;
	}
	void IVPContextMenuProvider::OnCreateContextMenu()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCreateContextMenu instead.");
	}
	void UVPContextMenuProvider::StaticRegisterNativesUVPContextMenuProvider()
	{
		UClass* Class = UVPContextMenuProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCreateContextMenu", &IVPContextMenuProvider::execOnCreateContextMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/IVPContextMenuProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPContextMenuProvider, nullptr, "OnCreateContextMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPContextMenuProvider);
	UClass* Z_Construct_UClass_UVPContextMenuProvider_NoRegister()
	{
		return UVPContextMenuProvider::StaticClass();
	}
	struct Z_Construct_UClass_UVPContextMenuProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPContextMenuProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPContextMenuProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPContextMenuProvider_OnCreateContextMenu, "OnCreateContextMenu" }, // 2348064064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPContextMenuProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IVPContextMenuProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPContextMenuProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVPContextMenuProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPContextMenuProvider_Statics::ClassParams = {
		&UVPContextMenuProvider::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVPContextMenuProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPContextMenuProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPContextMenuProvider()
	{
		if (!Z_Registration_Info_UClass_UVPContextMenuProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPContextMenuProvider.OuterSingleton, Z_Construct_UClass_UVPContextMenuProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPContextMenuProvider.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPContextMenuProvider>()
	{
		return UVPContextMenuProvider::StaticClass();
	}
	UVPContextMenuProvider::UVPContextMenuProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPContextMenuProvider);
	UVPContextMenuProvider::~UVPContextMenuProvider() {}
	static FName NAME_UVPContextMenuProvider_OnCreateContextMenu = FName(TEXT("OnCreateContextMenu"));
	void IVPContextMenuProvider::Execute_OnCreateContextMenu(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPContextMenuProvider::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVPContextMenuProvider_OnCreateContextMenu);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVPContextMenuProvider*)(O->GetNativeInterfaceAddress(UVPContextMenuProvider::StaticClass())))
		{
			I->OnCreateContextMenu_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPContextMenuProvider, UVPContextMenuProvider::StaticClass, TEXT("UVPContextMenuProvider"), &Z_Registration_Info_UClass_UVPContextMenuProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPContextMenuProvider), 1746647550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_2262126226(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPContextMenuProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
