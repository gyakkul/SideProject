// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ExponentialHeightFog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExponentialHeightFog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog();
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(AExponentialHeightFog::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	void AExponentialHeightFog::StaticRegisterNativesAExponentialHeightFog()
	{
		UClass* Class = AExponentialHeightFog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", &AExponentialHeightFog::execOnRep_bEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExponentialHeightFog, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExponentialHeightFog);
	UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister()
	{
		return AExponentialHeightFog::StaticClass();
	}
	struct Z_Construct_UClass_AExponentialHeightFog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExponentialHeightFog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExponentialHeightFog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled, "OnRep_bEnabled" }, // 264923624
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExponentialHeightFog_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * Implements an Actor for exponential height fog.\n */" },
		{ "HideCategories", "Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Engine/ExponentialHeightFog.h" },
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Implements an Actor for exponential height fog." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExponentialHeightFog" },
		{ "Comment", "/** @todo document */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExponentialHeightFog, Component), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** replicated copy of ExponentialHeightFogComponent's bEnabled property */" },
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ToolTip", "replicated copy of ExponentialHeightFogComponent's bEnabled property" },
	};
#endif
	void Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AExponentialHeightFog*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AExponentialHeightFog), &Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExponentialHeightFog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExponentialHeightFog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExponentialHeightFog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExponentialHeightFog_Statics::ClassParams = {
		&AExponentialHeightFog::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExponentialHeightFog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExponentialHeightFog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExponentialHeightFog()
	{
		if (!Z_Registration_Info_UClass_AExponentialHeightFog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExponentialHeightFog.OuterSingleton, Z_Construct_UClass_AExponentialHeightFog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExponentialHeightFog.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AExponentialHeightFog>()
	{
		return AExponentialHeightFog::StaticClass();
	}

	void AExponentialHeightFog::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AExponentialHeightFog"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExponentialHeightFog);
	AExponentialHeightFog::~AExponentialHeightFog() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExponentialHeightFog, AExponentialHeightFog::StaticClass, TEXT("AExponentialHeightFog"), &Z_Registration_Info_UClass_AExponentialHeightFog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExponentialHeightFog), 917843355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_2085669332(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
