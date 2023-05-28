// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LocationVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationVolume() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_ALocationVolume();
	ENGINE_API UClass* Z_Construct_UClass_ALocationVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ALocationVolume::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALocationVolume::execUnload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALocationVolume::execLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load();
		P_NATIVE_END;
	}
	void ALocationVolume::StaticRegisterNativesALocationVolume()
	{
		UClass* Class = ALocationVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoaded", &ALocationVolume::execIsLoaded },
			{ "Load", &ALocationVolume::execLoad },
			{ "Unload", &ALocationVolume::execUnload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics
	{
		struct LocationVolume_eventIsLoaded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocationVolume_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LocationVolume_eventIsLoaded_Parms), &Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Return if this location volume is loaded */" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ToolTip", "Return if this location volume is loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocationVolume, nullptr, "IsLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::LocationVolume_eventIsLoaded_Parms), Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALocationVolume_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALocationVolume_Load_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALocationVolume_Load_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Load this location volume */" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ToolTip", "Load this location volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocationVolume_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocationVolume, nullptr, "Load", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALocationVolume_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALocationVolume_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocationVolume_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALocationVolume_Unload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALocationVolume_Unload_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Unload this location volume */" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ToolTip", "Unload this location volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocationVolume_Unload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocationVolume, nullptr, "Unload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALocationVolume_Unload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocationVolume_Unload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALocationVolume_Unload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocationVolume_Unload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALocationVolume);
	UClass* Z_Construct_UClass_ALocationVolume_NoRegister()
	{
		return ALocationVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALocationVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRuntime_MetaData[];
#endif
		static void NewProp_bIsRuntime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRuntime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALocationVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALocationVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALocationVolume_IsLoaded, "IsLoaded" }, // 1940875823
		{ &Z_Construct_UFunction_ALocationVolume_Load, "Load" }, // 1804391206
		{ &Z_Construct_UFunction_ALocationVolume_Unload, "Unload" }, // 1476029445
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALocationVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A volume representing a location in the world\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "LocationVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A volume representing a location in the world" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALocationVolume_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "LocationVolume" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALocationVolume_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALocationVolume, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ALocationVolume_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALocationVolume_Statics::NewProp_bIsRuntime_MetaData[] = {
		{ "Category", "LocationVolume" },
		{ "ModuleRelativePath", "Public/LocationVolume.h" },
	};
#endif
	void Z_Construct_UClass_ALocationVolume_Statics::NewProp_bIsRuntime_SetBit(void* Obj)
	{
		((ALocationVolume*)Obj)->bIsRuntime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALocationVolume_Statics::NewProp_bIsRuntime = { "bIsRuntime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ALocationVolume), &Z_Construct_UClass_ALocationVolume_Statics::NewProp_bIsRuntime_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALocationVolume_Statics::NewProp_bIsRuntime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::NewProp_bIsRuntime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALocationVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocationVolume_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocationVolume_Statics::NewProp_bIsRuntime,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALocationVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister, (int32)VTABLE_OFFSET(ALocationVolume, IWorldPartitionActorLoaderInterface), false },  // 2588401415
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALocationVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocationVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALocationVolume_Statics::ClassParams = {
		&ALocationVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALocationVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALocationVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALocationVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALocationVolume()
	{
		if (!Z_Registration_Info_UClass_ALocationVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALocationVolume.OuterSingleton, Z_Construct_UClass_ALocationVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALocationVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALocationVolume>()
	{
		return ALocationVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALocationVolume);
	ALocationVolume::~ALocationVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALocationVolume, ALocationVolume::StaticClass, TEXT("ALocationVolume"), &Z_Registration_Info_UClass_ALocationVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocationVolume), 1889305256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_3609567028(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
