// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSourceFilter.h"
#include "IDataSourceFilterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataSourceFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterInterface_NoRegister();
	SOURCEFILTERINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataSourceFilterConfiguration();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringTrace();
// End Cross Module References
	DEFINE_FUNCTION(UDataSourceFilter::execDoesActorPassFilter)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesActorPassFilter_Implementation(Z_Param_InActor);
		P_NATIVE_END;
	}
	struct DataSourceFilter_eventDoesActorPassFilter_Parms
	{
		const AActor* InActor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DataSourceFilter_eventDoesActorPassFilter_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UDataSourceFilter_DoesActorPassFilter = FName(TEXT("DoesActorPassFilter"));
	bool UDataSourceFilter::DoesActorPassFilter(const AActor* InActor) const
	{
		DataSourceFilter_eventDoesActorPassFilter_Parms Parms;
		Parms.InActor=InActor;
		const_cast<UDataSourceFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataSourceFilter_DoesActorPassFilter),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDataSourceFilter::StaticRegisterNativesUDataSourceFilter()
	{
		UClass* Class = UDataSourceFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesActorPassFilter", &UDataSourceFilter::execDoesActorPassFilter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataSourceFilter_eventDoesActorPassFilter_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_InActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_InActor_MetaData)) };
	void Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataSourceFilter_eventDoesActorPassFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataSourceFilter_eventDoesActorPassFilter_Parms), &Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "TraceSourceFiltering" },
		{ "ModuleRelativePath", "Public/DataSourceFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSourceFilter, nullptr, "DoesActorPassFilter", nullptr, nullptr, sizeof(DataSourceFilter_eventDoesActorPassFilter_Parms), Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataSourceFilter);
	UClass* Z_Construct_UClass_UDataSourceFilter_NoRegister()
	{
		return UDataSourceFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDataSourceFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataSourceFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringTrace,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataSourceFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataSourceFilter_DoesActorPassFilter, "DoesActorPassFilter" }, // 568175012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSourceFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataSourceFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataSourceFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSourceFilter_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Filter specific settings */" },
		{ "ModuleRelativePath", "Public/DataSourceFilter.h" },
		{ "ToolTip", "Filter specific settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataSourceFilter_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataSourceFilter, Configuration), Z_Construct_UScriptStruct_FDataSourceFilterConfiguration, METADATA_PARAMS(Z_Construct_UClass_UDataSourceFilter_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilter_Statics::NewProp_Configuration_MetaData)) }; // 2342746466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataSourceFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataSourceFilter_Statics::NewProp_Configuration,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDataSourceFilter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDataSourceFilterInterface_NoRegister, (int32)VTABLE_OFFSET(UDataSourceFilter, IDataSourceFilterInterface), false },  // 308420326
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataSourceFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataSourceFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataSourceFilter_Statics::ClassParams = {
		&UDataSourceFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataSourceFilter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataSourceFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataSourceFilter()
	{
		if (!Z_Registration_Info_UClass_UDataSourceFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataSourceFilter.OuterSingleton, Z_Construct_UClass_UDataSourceFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataSourceFilter.OuterSingleton;
	}
	template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<UDataSourceFilter>()
	{
		return UDataSourceFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataSourceFilter);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataSourceFilter, UDataSourceFilter::StaticClass, TEXT("UDataSourceFilter"), &Z_Registration_Info_UClass_UDataSourceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataSourceFilter), 3100213953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_2508252158(TEXT("/Script/SourceFilteringTrace"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
