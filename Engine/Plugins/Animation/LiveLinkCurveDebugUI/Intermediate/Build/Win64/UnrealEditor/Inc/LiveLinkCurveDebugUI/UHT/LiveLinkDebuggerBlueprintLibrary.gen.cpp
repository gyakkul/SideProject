// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkDebuggerBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkDebuggerBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LIVELINKCURVEDEBUGUI_API UClass* Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary();
	LIVELINKCURVEDEBUGUI_API UClass* Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkCurveDebugUI();
// End Cross Module References
	DEFINE_FUNCTION(ULiveLinkDebuggerBlueprintLibrary::execHideLiveLinkDebugger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULiveLinkDebuggerBlueprintLibrary::HideLiveLinkDebugger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkDebuggerBlueprintLibrary::execDisplayLiveLinkDebugger)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULiveLinkDebuggerBlueprintLibrary::DisplayLiveLinkDebugger(Z_Param_SubjectName);
		P_NATIVE_END;
	}
	void ULiveLinkDebuggerBlueprintLibrary::StaticRegisterNativesULiveLinkDebuggerBlueprintLibrary()
	{
		UClass* Class = ULiveLinkDebuggerBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayLiveLinkDebugger", &ULiveLinkDebuggerBlueprintLibrary::execDisplayLiveLinkDebugger },
			{ "HideLiveLinkDebugger", &ULiveLinkDebuggerBlueprintLibrary::execHideLiveLinkDebugger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics
	{
		struct LiveLinkDebuggerBlueprintLibrary_eventDisplayLiveLinkDebugger_Parms
		{
			FString SubjectName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkDebuggerBlueprintLibrary_eventDisplayLiveLinkDebugger_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLinkDebug" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary, nullptr, "DisplayLiveLinkDebugger", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::LiveLinkDebuggerBlueprintLibrary_eventDisplayLiveLinkDebugger_Parms), Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLinkDebug" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary, nullptr, "HideLiveLinkDebugger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkDebuggerBlueprintLibrary);
	UClass* Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_NoRegister()
	{
		return ULiveLinkDebuggerBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkCurveDebugUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger, "DisplayLiveLinkDebugger" }, // 2305165612
		{ &Z_Construct_UFunction_ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger, "HideLiveLinkDebugger" }, // 3661384705
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkDebuggerBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkDebuggerBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::ClassParams = {
		&ULiveLinkDebuggerBlueprintLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkDebuggerBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkDebuggerBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkDebuggerBlueprintLibrary.OuterSingleton;
	}
	template<> LIVELINKCURVEDEBUGUI_API UClass* StaticClass<ULiveLinkDebuggerBlueprintLibrary>()
	{
		return ULiveLinkDebuggerBlueprintLibrary::StaticClass();
	}
	ULiveLinkDebuggerBlueprintLibrary::ULiveLinkDebuggerBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkDebuggerBlueprintLibrary);
	ULiveLinkDebuggerBlueprintLibrary::~ULiveLinkDebuggerBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkDebuggerBlueprintLibrary, ULiveLinkDebuggerBlueprintLibrary::StaticClass, TEXT("ULiveLinkDebuggerBlueprintLibrary"), &Z_Registration_Info_UClass_ULiveLinkDebuggerBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkDebuggerBlueprintLibrary), 2034020120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerBlueprintLibrary_h_2918768543(TEXT("/Script/LiveLinkCurveDebugUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
