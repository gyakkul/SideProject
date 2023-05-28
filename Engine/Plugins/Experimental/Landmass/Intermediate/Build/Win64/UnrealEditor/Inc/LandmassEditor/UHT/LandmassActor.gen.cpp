// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandmassActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandmassActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDMASSEDITOR_API UClass* Z_Construct_UClass_ALandmassActor();
	LANDMASSEDITOR_API UClass* Z_Construct_UClass_ALandmassActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LandmassEditor();
// End Cross Module References
	DEFINE_FUNCTION(ALandmassActor::execActorSelectionChanged)
	{
		P_GET_UBOOL(Z_Param_bSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorSelectionChanged_Implementation(Z_Param_bSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALandmassActor::execSetEditorTickEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditorTickEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALandmassActor::execCustomTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CustomTick_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	struct LandmassActor_eventActorSelectionChanged_Parms
	{
		bool bSelected;
	};
	struct LandmassActor_eventCustomTick_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_ALandmassActor_ActorSelectionChanged = FName(TEXT("ActorSelectionChanged"));
	void ALandmassActor::ActorSelectionChanged(bool bSelected)
	{
		LandmassActor_eventActorSelectionChanged_Parms Parms;
		Parms.bSelected=bSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALandmassActor_ActorSelectionChanged),&Parms);
	}
	static FName NAME_ALandmassActor_CustomTick = FName(TEXT("CustomTick"));
	void ALandmassActor::CustomTick(float DeltaSeconds)
	{
		LandmassActor_eventCustomTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_ALandmassActor_CustomTick),&Parms);
	}
	void ALandmassActor::StaticRegisterNativesALandmassActor()
	{
		UClass* Class = ALandmassActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorSelectionChanged", &ALandmassActor::execActorSelectionChanged },
			{ "CustomTick", &ALandmassActor::execCustomTick },
			{ "SetEditorTickEnabled", &ALandmassActor::execSetEditorTickEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics
	{
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((LandmassActor_eventActorSelectionChanged_Parms*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandmassActor_eventActorSelectionChanged_Parms), &Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::NewProp_bSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/LandmassActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandmassActor, nullptr, "ActorSelectionChanged", nullptr, nullptr, sizeof(LandmassActor_eventActorSelectionChanged_Parms), Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandmassActor_CustomTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandmassActor_eventCustomTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/LandmassActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandmassActor, nullptr, "CustomTick", nullptr, nullptr, sizeof(LandmassActor_eventCustomTick_Parms), Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandmassActor_CustomTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandmassActor_CustomTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics
	{
		struct LandmassActor_eventSetEditorTickEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LandmassActor_eventSetEditorTickEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandmassActor_eventSetEditorTickEnabled_Parms), &Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LandmassActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandmassActor, nullptr, "SetEditorTickEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::LandmassActor_eventSetEditorTickEnabled_Parms), Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandmassActor);
	UClass* Z_Construct_UClass_ALandmassActor_NoRegister()
	{
		return ALandmassActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandmassActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorTickIsEnabled_MetaData[];
#endif
		static void NewProp_EditorTickIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EditorTickIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandmassActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LandmassEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALandmassActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandmassActor_ActorSelectionChanged, "ActorSelectionChanged" }, // 4080413801
		{ &Z_Construct_UFunction_ALandmassActor_CustomTick, "CustomTick" }, // 2416601894
		{ &Z_Construct_UFunction_ALandmassActor_SetEditorTickEnabled, "SetEditorTickEnabled" }, // 1706973247
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandmassActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Replication Input LOD Actor Cooking Rendering" },
		{ "IncludePath", "LandmassActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LandmassActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandmassActor_Statics::NewProp_EditorTickIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandmassActor.h" },
	};
#endif
	void Z_Construct_UClass_ALandmassActor_Statics::NewProp_EditorTickIsEnabled_SetBit(void* Obj)
	{
		((ALandmassActor*)Obj)->EditorTickIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandmassActor_Statics::NewProp_EditorTickIsEnabled = { "EditorTickIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALandmassActor), &Z_Construct_UClass_ALandmassActor_Statics::NewProp_EditorTickIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandmassActor_Statics::NewProp_EditorTickIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandmassActor_Statics::NewProp_EditorTickIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandmassActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandmassActor_Statics::NewProp_EditorTickIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandmassActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandmassActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandmassActor_Statics::ClassParams = {
		&ALandmassActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALandmassActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandmassActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandmassActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandmassActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandmassActor()
	{
		if (!Z_Registration_Info_UClass_ALandmassActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandmassActor.OuterSingleton, Z_Construct_UClass_ALandmassActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandmassActor.OuterSingleton;
	}
	template<> LANDMASSEDITOR_API UClass* StaticClass<ALandmassActor>()
	{
		return ALandmassActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandmassActor);
	ALandmassActor::~ALandmassActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandmassActor, ALandmassActor::StaticClass, TEXT("ALandmassActor"), &Z_Registration_Info_UClass_ALandmassActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandmassActor), 4229754929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_2635904102(TEXT("/Script/LandmassEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
