// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVPBookmarkProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVPBookmarkProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VPBookmark();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmarkProvider();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmarkProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVPBookmarkProvider::execGenerateBookmarkName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateBookmarkName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVPBookmarkProvider::execHideBookmarkSplineMeshIndicator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBookmarkSplineMeshIndicator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVPBookmarkProvider::execUpdateBookmarkSplineMeshIndicator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBookmarkSplineMeshIndicator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVPBookmarkProvider::execOnBookmarkChanged)
	{
		P_GET_OBJECT(UVPBookmark,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBookmarkChanged_Implementation(Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVPBookmarkProvider::execOnBookmarkActivation)
	{
		P_GET_OBJECT(UVPBookmark,Z_Param_Bookmark);
		P_GET_UBOOL(Z_Param_bActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBookmarkActivation_Implementation(Z_Param_Bookmark,Z_Param_bActivate);
		P_NATIVE_END;
	}
	struct VPBookmarkProvider_eventOnBookmarkActivation_Parms
	{
		UVPBookmark* Bookmark;
		bool bActivate;
	};
	struct VPBookmarkProvider_eventOnBookmarkChanged_Parms
	{
		UVPBookmark* Bookmark;
	};
	void IVPBookmarkProvider::GenerateBookmarkName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GenerateBookmarkName instead.");
	}
	void IVPBookmarkProvider::HideBookmarkSplineMeshIndicator()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideBookmarkSplineMeshIndicator instead.");
	}
	void IVPBookmarkProvider::OnBookmarkActivation(UVPBookmark* Bookmark, bool bActivate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBookmarkActivation instead.");
	}
	void IVPBookmarkProvider::OnBookmarkChanged(UVPBookmark* Bookmark)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBookmarkChanged instead.");
	}
	void IVPBookmarkProvider::UpdateBookmarkSplineMeshIndicator()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateBookmarkSplineMeshIndicator instead.");
	}
	void UVPBookmarkProvider::StaticRegisterNativesUVPBookmarkProvider()
	{
		UClass* Class = UVPBookmarkProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateBookmarkName", &IVPBookmarkProvider::execGenerateBookmarkName },
			{ "HideBookmarkSplineMeshIndicator", &IVPBookmarkProvider::execHideBookmarkSplineMeshIndicator },
			{ "OnBookmarkActivation", &IVPBookmarkProvider::execOnBookmarkActivation },
			{ "OnBookmarkChanged", &IVPBookmarkProvider::execOnBookmarkChanged },
			{ "UpdateBookmarkSplineMeshIndicator", &IVPBookmarkProvider::execUpdateBookmarkSplineMeshIndicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/IVPBookmarkProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkProvider, nullptr, "GenerateBookmarkName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/IVPBookmarkProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkProvider, nullptr, "HideBookmarkSplineMeshIndicator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bookmark;
		static void NewProp_bActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkProvider_eventOnBookmarkActivation_Parms, Bookmark), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::NewProp_bActivate_SetBit(void* Obj)
	{
		((VPBookmarkProvider_eventOnBookmarkActivation_Parms*)Obj)->bActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPBookmarkProvider_eventOnBookmarkActivation_Parms), &Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::NewProp_bActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/IVPBookmarkProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkProvider, nullptr, "OnBookmarkActivation", nullptr, nullptr, sizeof(VPBookmarkProvider_eventOnBookmarkActivation_Parms), Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkProvider_eventOnBookmarkChanged_Parms, Bookmark), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::NewProp_Bookmark,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/IVPBookmarkProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkProvider, nullptr, "OnBookmarkChanged", nullptr, nullptr, sizeof(VPBookmarkProvider_eventOnBookmarkChanged_Parms), Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/IVPBookmarkProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkProvider, nullptr, "UpdateBookmarkSplineMeshIndicator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPBookmarkProvider);
	UClass* Z_Construct_UClass_UVPBookmarkProvider_NoRegister()
	{
		return UVPBookmarkProvider::StaticClass();
	}
	struct Z_Construct_UClass_UVPBookmarkProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPBookmarkProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VPBookmark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPBookmarkProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPBookmarkProvider_GenerateBookmarkName, "GenerateBookmarkName" }, // 3444537447
		{ &Z_Construct_UFunction_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator, "HideBookmarkSplineMeshIndicator" }, // 2754701665
		{ &Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkActivation, "OnBookmarkActivation" }, // 4109199235
		{ &Z_Construct_UFunction_UVPBookmarkProvider_OnBookmarkChanged, "OnBookmarkChanged" }, // 1298985944
		{ &Z_Construct_UFunction_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator, "UpdateBookmarkSplineMeshIndicator" }, // 1232671702
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IVPBookmarkProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPBookmarkProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVPBookmarkProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPBookmarkProvider_Statics::ClassParams = {
		&UVPBookmarkProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPBookmarkProvider()
	{
		if (!Z_Registration_Info_UClass_UVPBookmarkProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPBookmarkProvider.OuterSingleton, Z_Construct_UClass_UVPBookmarkProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPBookmarkProvider.OuterSingleton;
	}
	template<> VPBOOKMARK_API UClass* StaticClass<UVPBookmarkProvider>()
	{
		return UVPBookmarkProvider::StaticClass();
	}
	UVPBookmarkProvider::UVPBookmarkProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPBookmarkProvider);
	UVPBookmarkProvider::~UVPBookmarkProvider() {}
	static FName NAME_UVPBookmarkProvider_GenerateBookmarkName = FName(TEXT("GenerateBookmarkName"));
	void IVPBookmarkProvider::Execute_GenerateBookmarkName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPBookmarkProvider::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVPBookmarkProvider_GenerateBookmarkName);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVPBookmarkProvider*)(O->GetNativeInterfaceAddress(UVPBookmarkProvider::StaticClass())))
		{
			I->GenerateBookmarkName_Implementation();
		}
	}
	static FName NAME_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator = FName(TEXT("HideBookmarkSplineMeshIndicator"));
	void IVPBookmarkProvider::Execute_HideBookmarkSplineMeshIndicator(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPBookmarkProvider::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVPBookmarkProvider_HideBookmarkSplineMeshIndicator);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVPBookmarkProvider*)(O->GetNativeInterfaceAddress(UVPBookmarkProvider::StaticClass())))
		{
			I->HideBookmarkSplineMeshIndicator_Implementation();
		}
	}
	static FName NAME_UVPBookmarkProvider_OnBookmarkActivation = FName(TEXT("OnBookmarkActivation"));
	void IVPBookmarkProvider::Execute_OnBookmarkActivation(UObject* O, UVPBookmark* Bookmark, bool bActivate)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPBookmarkProvider::StaticClass()));
		VPBookmarkProvider_eventOnBookmarkActivation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVPBookmarkProvider_OnBookmarkActivation);
		if (Func)
		{
			Parms.Bookmark=Bookmark;
			Parms.bActivate=bActivate;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVPBookmarkProvider*)(O->GetNativeInterfaceAddress(UVPBookmarkProvider::StaticClass())))
		{
			I->OnBookmarkActivation_Implementation(Bookmark,bActivate);
		}
	}
	static FName NAME_UVPBookmarkProvider_OnBookmarkChanged = FName(TEXT("OnBookmarkChanged"));
	void IVPBookmarkProvider::Execute_OnBookmarkChanged(UObject* O, UVPBookmark* Bookmark)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPBookmarkProvider::StaticClass()));
		VPBookmarkProvider_eventOnBookmarkChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVPBookmarkProvider_OnBookmarkChanged);
		if (Func)
		{
			Parms.Bookmark=Bookmark;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVPBookmarkProvider*)(O->GetNativeInterfaceAddress(UVPBookmarkProvider::StaticClass())))
		{
			I->OnBookmarkChanged_Implementation(Bookmark);
		}
	}
	static FName NAME_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator = FName(TEXT("UpdateBookmarkSplineMeshIndicator"));
	void IVPBookmarkProvider::Execute_UpdateBookmarkSplineMeshIndicator(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPBookmarkProvider::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVPBookmarkProvider_UpdateBookmarkSplineMeshIndicator);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVPBookmarkProvider*)(O->GetNativeInterfaceAddress(UVPBookmarkProvider::StaticClass())))
		{
			I->UpdateBookmarkSplineMeshIndicator_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPBookmarkProvider, UVPBookmarkProvider::StaticClass, TEXT("UVPBookmarkProvider"), &Z_Registration_Info_UClass_UVPBookmarkProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPBookmarkProvider), 1004424634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_2204942806(TEXT("/Script/VPBookmark"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
