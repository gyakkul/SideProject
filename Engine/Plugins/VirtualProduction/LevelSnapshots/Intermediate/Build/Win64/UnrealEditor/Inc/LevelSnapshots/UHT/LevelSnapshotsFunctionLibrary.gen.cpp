// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSnapshotsFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshot_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsFunctionLibrary();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSnapshotsFunctionLibrary::execApplySnapshotToWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ULevelSnapshot,Z_Param_Snapshot);
		P_GET_OBJECT(ULevelSnapshotFilter,Z_Param_OptionalFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSnapshotsFunctionLibrary::ApplySnapshotToWorld(Z_Param_WorldContextObject,Z_Param_Snapshot,Z_Param_OptionalFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotsFunctionLibrary::execTakeLevelSnapshot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewSnapshotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSnapshot**)Z_Param__Result=ULevelSnapshotsFunctionLibrary::TakeLevelSnapshot(Z_Param_WorldContextObject,Z_Param_NewSnapshotName,Z_Param_Description);
		P_NATIVE_END;
	}
	void ULevelSnapshotsFunctionLibrary::StaticRegisterNativesULevelSnapshotsFunctionLibrary()
	{
		UClass* Class = ULevelSnapshotsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySnapshotToWorld", &ULevelSnapshotsFunctionLibrary::execApplySnapshotToWorld },
			{ "TakeLevelSnapshot", &ULevelSnapshotsFunctionLibrary::execTakeLevelSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics
	{
		struct LevelSnapshotsFunctionLibrary_eventApplySnapshotToWorld_Parms
		{
			const UObject* WorldContextObject;
			ULevelSnapshot* Snapshot;
			ULevelSnapshotFilter* OptionalFilter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsFunctionLibrary_eventApplySnapshotToWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsFunctionLibrary_eventApplySnapshotToWorld_Parms, Snapshot), Z_Construct_UClass_ULevelSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_OptionalFilter = { "OptionalFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsFunctionLibrary_eventApplySnapshotToWorld_Parms, OptionalFilter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_Snapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::NewProp_OptionalFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/* Applies the snapshot to the world. If no filter is specified, the entire snapshot is applied. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsFunctionLibrary.h" },
		{ "ToolTip", "Applies the snapshot to the world. If no filter is specified, the entire snapshot is applied." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsFunctionLibrary, nullptr, "ApplySnapshotToWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::LevelSnapshotsFunctionLibrary_eventApplySnapshotToWorld_Parms), Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics
	{
		struct LevelSnapshotsFunctionLibrary_eventTakeLevelSnapshot_Parms
		{
			const UObject* WorldContextObject;
			FName NewSnapshotName;
			FString Description;
			ULevelSnapshot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewSnapshotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsFunctionLibrary_eventTakeLevelSnapshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_NewSnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_NewSnapshotName = { "NewSnapshotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsFunctionLibrary_eventTakeLevelSnapshot_Parms, NewSnapshotName), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_NewSnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_NewSnapshotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsFunctionLibrary_eventTakeLevelSnapshot_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsFunctionLibrary_eventTakeLevelSnapshot_Parms, ReturnValue), Z_Construct_UClass_ULevelSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_NewSnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "CPP_Default_Description", "" },
		{ "CPP_Default_NewSnapshotName", "NewLevelSnapshot" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsFunctionLibrary, nullptr, "TakeLevelSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::LevelSnapshotsFunctionLibrary_eventTakeLevelSnapshot_Parms), Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsFunctionLibrary);
	UClass* Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_NoRegister()
	{
		return ULevelSnapshotsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_ApplySnapshotToWorld, "ApplySnapshotToWorld" }, // 1497172268
		{ &Z_Construct_UFunction_ULevelSnapshotsFunctionLibrary_TakeLevelSnapshot, "TakeLevelSnapshot" }, // 2254448823
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSnapshotsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::ClassParams = {
		&ULevelSnapshotsFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsFunctionLibrary.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshotsFunctionLibrary>()
	{
		return ULevelSnapshotsFunctionLibrary::StaticClass();
	}
	ULevelSnapshotsFunctionLibrary::ULevelSnapshotsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsFunctionLibrary);
	ULevelSnapshotsFunctionLibrary::~ULevelSnapshotsFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsFunctionLibrary, ULevelSnapshotsFunctionLibrary::StaticClass, TEXT("ULevelSnapshotsFunctionLibrary"), &Z_Registration_Info_UClass_ULevelSnapshotsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsFunctionLibrary), 1281095516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_3495280476(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
