// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColorCorrectRegionsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorCorrectRegionsSubsystem() {}
// Cross Module References
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_UColorCorrectRegionsSubsystem();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_UColorCorrectRegionsSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_ColorCorrectRegions();
// End Cross Module References
	DEFINE_FUNCTION(UColorCorrectRegionsSubsystem::execRefreshStenciIdAssignmentForAllCCR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshStenciIdAssignmentForAllCCR();
		P_NATIVE_END;
	}
	void UColorCorrectRegionsSubsystem::StaticRegisterNativesUColorCorrectRegionsSubsystem()
	{
		UClass* Class = UColorCorrectRegionsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshStenciIdAssignmentForAllCCR", &UColorCorrectRegionsSubsystem::execRefreshStenciIdAssignmentForAllCCR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Correct Regions" },
		{ "Comment", "/** Resets all stencils and re-assigns for each CCR in the scene. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegionsSubsystem.h" },
		{ "ToolTip", "Resets all stencils and re-assigns for each CCR in the scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorCorrectRegionsSubsystem, nullptr, "RefreshStenciIdAssignmentForAllCCR", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorCorrectRegionsSubsystem);
	UClass* Z_Construct_UClass_UColorCorrectRegionsSubsystem_NoRegister()
	{
		return UColorCorrectRegionsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorCorrectRegionsSubsystem_RefreshStenciIdAssignmentForAllCCR, "RefreshStenciIdAssignmentForAllCCR" }, // 171400277
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World Subsystem responsible for managing AColorCorrectRegion classes in level.\n * This subsystem handles:\n *\x09\x09Level Loaded, Undo/Redo, Added to level, Removed from level events.\n * Unfortunately AActor class itself is not aware of when it is added/removed, Undo/Redo etc in the level.\n * \n * This is the only way (that we found) that was handling all region aggregation cases in more or less efficient way.\n *\x09\x09""Covered cases: Region added to a level, deleted from level, level loaded, undo, redo, level closed, editor closed:\n *\x09\x09World subsystem keeps track of all Regions in a level via three events OnLevelActorAdded, OnLevelActorDeleted, OnLevelActorListChanged.\n *\x09\x09""Actor classes are unaware of when they are added/deleted/undo/redo etc in the level, therefore this is the best place to manage this.\n * Alternative strategies (All tested):\n *\x09\x09World's AddOnActorSpawnedHandler. Flawed. Invoked in some cases we don't need, but does not get called during UNDO/REDO\n *\x09\x09""AActor's PostSpawnInitialize, PostActorCreated  and OnConstruction are also flawed.\n *\x09\x09""AActor does not have an internal event for when its deleted (EndPlay is the closest we have).\n */" },
		{ "IncludePath", "ColorCorrectRegionsSubsystem.h" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegionsSubsystem.h" },
		{ "ToolTip", "World Subsystem responsible for managing AColorCorrectRegion classes in level.\nThis subsystem handles:\n            Level Loaded, Undo/Redo, Added to level, Removed from level events.\nUnfortunately AActor class itself is not aware of when it is added/removed, Undo/Redo etc in the level.\n\nThis is the only way (that we found) that was handling all region aggregation cases in more or less efficient way.\n            Covered cases: Region added to a level, deleted from level, level loaded, undo, redo, level closed, editor closed:\n            World subsystem keeps track of all Regions in a level via three events OnLevelActorAdded, OnLevelActorDeleted, OnLevelActorListChanged.\n            Actor classes are unaware of when they are added/deleted/undo/redo etc in the level, therefore this is the best place to manage this.\nAlternative strategies (All tested):\n            World's AddOnActorSpawnedHandler. Flawed. Invoked in some cases we don't need, but does not get called during UNDO/REDO\n            AActor's PostSpawnInitialize, PostActorCreated  and OnConstruction are also flawed.\n            AActor does not have an internal event for when its deleted (EndPlay is the closest we have)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorCorrectRegionsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::ClassParams = {
		&UColorCorrectRegionsSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorCorrectRegionsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UColorCorrectRegionsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorCorrectRegionsSubsystem.OuterSingleton, Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorCorrectRegionsSubsystem.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UClass* StaticClass<UColorCorrectRegionsSubsystem>()
	{
		return UColorCorrectRegionsSubsystem::StaticClass();
	}
	UColorCorrectRegionsSubsystem::UColorCorrectRegionsSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorCorrectRegionsSubsystem);
	UColorCorrectRegionsSubsystem::~UColorCorrectRegionsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UColorCorrectRegionsSubsystem, UColorCorrectRegionsSubsystem::StaticClass, TEXT("UColorCorrectRegionsSubsystem"), &Z_Registration_Info_UClass_UColorCorrectRegionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorCorrectRegionsSubsystem), 3243947768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_1246218896(TEXT("/Script/ColorCorrectRegions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
