// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UDataLayerAsset::execGetDebugColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetDebugColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerAsset::execIsRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRuntime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerAsset::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	void UDataLayerAsset::StaticRegisterNativesUDataLayerAsset()
	{
		UClass* Class = UDataLayerAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugColor", &UDataLayerAsset::execGetDebugColor },
			{ "GetType", &UDataLayerAsset::execGetType },
			{ "IsRuntime", &UDataLayerAsset::execIsRuntime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics
	{
		struct DataLayerAsset_eventGetDebugColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerAsset_eventGetDebugColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "GetDebugColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::DataLayerAsset_eventGetDebugColor_Parms), Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerAsset_GetDebugColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerAsset_GetType_Statics
	{
		struct DataLayerAsset_eventGetType_Parms
		{
			EDataLayerType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerAsset_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerType, METADATA_PARAMS(nullptr, 0) }; // 3721880825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::DataLayerAsset_eventGetType_Parms), Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerAsset_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics
	{
		struct DataLayerAsset_eventIsRuntime_Parms
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
	void Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerAsset_eventIsRuntime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerAsset_eventIsRuntime_Parms), &Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "IsRuntime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::DataLayerAsset_eventIsRuntime_Parms), Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerAsset_IsRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerAsset);
	UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister()
	{
		return UDataLayerAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataLayerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataLayerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataLayerAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerAsset_GetDebugColor, "GetDebugColor" }, // 1382962127
		{ &Z_Construct_UFunction_UDataLayerAsset_GetType, "GetType" }, // 4150267819
		{ &Z_Construct_UFunction_UDataLayerAsset_IsRuntime, "IsRuntime" }, // 2270845885
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerAsset.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** Whether the Data Layer affects actor runtime loading */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
		{ "ToolTip", "Whether the Data Layer affects actor runtime loading" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType = { "DataLayerType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerAsset, DataLayerType), Z_Construct_UEnum_Engine_EDataLayerType, METADATA_PARAMS(Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType_MetaData)) }; // 3721880825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerAsset, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DebugColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DebugColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerAsset_Statics::ClassParams = {
		&UDataLayerAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataLayerAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerAsset()
	{
		if (!Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton, Z_Construct_UClass_UDataLayerAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataLayerAsset>()
	{
		return UDataLayerAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerAsset);
	UDataLayerAsset::~UDataLayerAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerAsset, UDataLayerAsset::StaticClass, TEXT("UDataLayerAsset"), &Z_Registration_Info_UClass_UDataLayerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerAsset), 2010841119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_247967252(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
