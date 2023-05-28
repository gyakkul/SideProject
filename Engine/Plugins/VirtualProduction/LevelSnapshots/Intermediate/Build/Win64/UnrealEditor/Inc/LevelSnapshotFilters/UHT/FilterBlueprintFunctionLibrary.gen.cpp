// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FilterBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterBlueprintFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UFilterBlueprintFunctionLibrary();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UFilterBlueprintFunctionLibrary_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	DEFINE_FUNCTION(UFilterBlueprintFunctionLibrary::execCreateFilterByClass)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<ULevelSnapshotFilter> ,Z_Param_Out_Class);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSnapshotFilter**)Z_Param__Result=UFilterBlueprintFunctionLibrary::CreateFilterByClass(Z_Param_Out_Class,Z_Param_Name,Z_Param_Outer);
		P_NATIVE_END;
	}
	void UFilterBlueprintFunctionLibrary::StaticRegisterNativesUFilterBlueprintFunctionLibrary()
	{
		UClass* Class = UFilterBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFilterByClass", &UFilterBlueprintFunctionLibrary::execCreateFilterByClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics
	{
		struct FilterBlueprintFunctionLibrary_eventCreateFilterByClass_Parms
		{
			const TSubclassOf<ULevelSnapshotFilter>  Class;
			FName Name;
			UObject* Outer;
			ULevelSnapshotFilter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterBlueprintFunctionLibrary_eventCreateFilterByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterBlueprintFunctionLibrary_eventCreateFilterByClass_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterBlueprintFunctionLibrary_eventCreateFilterByClass_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterBlueprintFunctionLibrary_eventCreateFilterByClass_Parms, ReturnValue), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Outer", "None" },
		{ "ModuleRelativePath", "Public/FilterBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilterBlueprintFunctionLibrary, nullptr, "CreateFilterByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::FilterBlueprintFunctionLibrary_eventCreateFilterByClass_Parms), Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UFilterBlueprintFunctionLibrary_NoRegister()
	{
		return UFilterBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFilterBlueprintFunctionLibrary_CreateFilterByClass, "CreateFilterByClass" }, // 4120825194
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FilterBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/FilterBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::ClassParams = {
		&UFilterBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilterBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UFilterBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilterBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UFilterBlueprintFunctionLibrary>()
	{
		return UFilterBlueprintFunctionLibrary::StaticClass();
	}
	UFilterBlueprintFunctionLibrary::UFilterBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterBlueprintFunctionLibrary);
	UFilterBlueprintFunctionLibrary::~UFilterBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilterBlueprintFunctionLibrary, UFilterBlueprintFunctionLibrary::StaticClass, TEXT("UFilterBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UFilterBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterBlueprintFunctionLibrary), 3511911027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_16965282(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
