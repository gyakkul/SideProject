// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IDataSourceFilterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDataSourceFilterInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterInterface();
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterInterface_NoRegister();
	SOURCEFILTERINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataSourceFilterConfiguration();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration;
class UScriptStruct* FDataSourceFilterConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration, (UObject*)Z_Construct_UPackage__Script_SourceFilteringCore(), TEXT("DataSourceFilterConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration.OuterSingleton;
}
template<> SOURCEFILTERINGCORE_API UScriptStruct* StaticStruct<FDataSourceFilterConfiguration>()
{
	return FDataSourceFilterConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyDuringActorSpawn_MetaData[];
#endif
		static void NewProp_bOnlyApplyDuringActorSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyDuringActorSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRunAsynchronously_MetaData[];
#endif
		static void NewProp_bCanRunAsynchronously_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRunAsynchronously;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterApplyingTickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterApplyingTickInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSourceFilterConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bOnlyApplyDuringActorSpawn_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Flag whether or not this filter should only applied once, whenever an actor is spawned */" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterInterface.h" },
		{ "ToolTip", "Flag whether or not this filter should only applied once, whenever an actor is spawned" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bOnlyApplyDuringActorSpawn_SetBit(void* Obj)
	{
		((FDataSourceFilterConfiguration*)Obj)->bOnlyApplyDuringActorSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bOnlyApplyDuringActorSpawn = { "bOnlyApplyDuringActorSpawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDataSourceFilterConfiguration), &Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bOnlyApplyDuringActorSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bOnlyApplyDuringActorSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bOnlyApplyDuringActorSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bCanRunAsynchronously_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Flag whether or not this filter does not rely on gamethread only data, and therefore can work on a differen thread */" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterInterface.h" },
		{ "ToolTip", "Flag whether or not this filter does not rely on gamethread only data, and therefore can work on a differen thread" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bCanRunAsynchronously_SetBit(void* Obj)
	{
		((FDataSourceFilterConfiguration*)Obj)->bCanRunAsynchronously = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bCanRunAsynchronously = { "bCanRunAsynchronously", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDataSourceFilterConfiguration), &Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bCanRunAsynchronously_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bCanRunAsynchronously_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bCanRunAsynchronously_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_FilterApplyingTickInterval_MetaData[] = {
		{ "Category", "Filtering" },
		{ "ClampMax", "255" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Interval, in frames, between applying the filter. The resulting value is cached for intermediate frames. */" },
		{ "EditCondition", "!bOnlyApplyDuringActorSpawn" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterInterface.h" },
		{ "ToolTip", "Interval, in frames, between applying the filter. The resulting value is cached for intermediate frames." },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_FilterApplyingTickInterval = { "FilterApplyingTickInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataSourceFilterConfiguration, FilterApplyingTickInterval), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_FilterApplyingTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_FilterApplyingTickInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bOnlyApplyDuringActorSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_bCanRunAsynchronously,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewProp_FilterApplyingTickInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringCore,
		nullptr,
		&NewStructOps,
		"DataSourceFilterConfiguration",
		sizeof(FDataSourceFilterConfiguration),
		alignof(FDataSourceFilterConfiguration),
		Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataSourceFilterConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration.InnerSingleton;
	}
	DEFINE_FUNCTION(IDataSourceFilterInterface::execGetToolTipText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDisplayText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetToolTipText_Implementation(Z_Param_Out_OutDisplayText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDataSourceFilterInterface::execGetDisplayText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDisplayText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDisplayText_Implementation(Z_Param_Out_OutDisplayText);
		P_NATIVE_END;
	}
	struct DataSourceFilterInterface_eventGetDisplayText_Parms
	{
		FText OutDisplayText;
	};
	struct DataSourceFilterInterface_eventGetToolTipText_Parms
	{
		FText OutDisplayText;
	};
	void IDataSourceFilterInterface::GetDisplayText(FText& OutDisplayText) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDisplayText instead.");
	}
	void IDataSourceFilterInterface::GetToolTipText(FText& OutDisplayText) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetToolTipText instead.");
	}
	void UDataSourceFilterInterface::StaticRegisterNativesUDataSourceFilterInterface()
	{
		UClass* Class = UDataSourceFilterInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayText", &IDataSourceFilterInterface::execGetDisplayText },
			{ "GetToolTipText", &IDataSourceFilterInterface::execGetToolTipText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutDisplayText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::NewProp_OutDisplayText = { "OutDisplayText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataSourceFilterInterface_eventGetDisplayText_Parms, OutDisplayText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::NewProp_OutDisplayText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "TraceSourceFiltering" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSourceFilterInterface, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(DataSourceFilterInterface_eventGetDisplayText_Parms), Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutDisplayText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::NewProp_OutDisplayText = { "OutDisplayText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataSourceFilterInterface_eventGetToolTipText_Parms, OutDisplayText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::NewProp_OutDisplayText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "TraceSourceFiltering" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSourceFilterInterface, nullptr, "GetToolTipText", nullptr, nullptr, sizeof(DataSourceFilterInterface_eventGetToolTipText_Parms), Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataSourceFilterInterface);
	UClass* Z_Construct_UClass_UDataSourceFilterInterface_NoRegister()
	{
		return UDataSourceFilterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDataSourceFilterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataSourceFilterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataSourceFilterInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataSourceFilterInterface_GetDisplayText, "GetDisplayText" }, // 1062541379
		{ &Z_Construct_UFunction_UDataSourceFilterInterface_GetToolTipText, "GetToolTipText" }, // 1634246260
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSourceFilterInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataSourceFilterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataSourceFilterInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataSourceFilterInterface_Statics::ClassParams = {
		&UDataSourceFilterInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataSourceFilterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataSourceFilterInterface()
	{
		if (!Z_Registration_Info_UClass_UDataSourceFilterInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataSourceFilterInterface.OuterSingleton, Z_Construct_UClass_UDataSourceFilterInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataSourceFilterInterface.OuterSingleton;
	}
	template<> SOURCEFILTERINGCORE_API UClass* StaticClass<UDataSourceFilterInterface>()
	{
		return UDataSourceFilterInterface::StaticClass();
	}
	UDataSourceFilterInterface::UDataSourceFilterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataSourceFilterInterface);
	UDataSourceFilterInterface::~UDataSourceFilterInterface() {}
	static FName NAME_UDataSourceFilterInterface_GetDisplayText = FName(TEXT("GetDisplayText"));
	void IDataSourceFilterInterface::Execute_GetDisplayText(const UObject* O, FText& OutDisplayText)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDataSourceFilterInterface::StaticClass()));
		DataSourceFilterInterface_eventGetDisplayText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDataSourceFilterInterface_GetDisplayText);
		if (Func)
		{
			Parms.OutDisplayText=OutDisplayText;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutDisplayText=Parms.OutDisplayText;
		}
		else if (auto I = (const IDataSourceFilterInterface*)(O->GetNativeInterfaceAddress(UDataSourceFilterInterface::StaticClass())))
		{
			I->GetDisplayText_Implementation(OutDisplayText);
		}
	}
	static FName NAME_UDataSourceFilterInterface_GetToolTipText = FName(TEXT("GetToolTipText"));
	void IDataSourceFilterInterface::Execute_GetToolTipText(const UObject* O, FText& OutDisplayText)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDataSourceFilterInterface::StaticClass()));
		DataSourceFilterInterface_eventGetToolTipText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDataSourceFilterInterface_GetToolTipText);
		if (Func)
		{
			Parms.OutDisplayText=OutDisplayText;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutDisplayText=Parms.OutDisplayText;
		}
		else if (auto I = (const IDataSourceFilterInterface*)(O->GetNativeInterfaceAddress(UDataSourceFilterInterface::StaticClass())))
		{
			I->GetToolTipText_Implementation(OutDisplayText);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_Statics::ScriptStructInfo[] = {
		{ FDataSourceFilterConfiguration::StaticStruct, Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics::NewStructOps, TEXT("DataSourceFilterConfiguration"), &Z_Registration_Info_UScriptStruct_DataSourceFilterConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataSourceFilterConfiguration), 2342746466U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataSourceFilterInterface, UDataSourceFilterInterface::StaticClass, TEXT("UDataSourceFilterInterface"), &Z_Registration_Info_UClass_UDataSourceFilterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataSourceFilterInterface), 308420326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_191064570(TEXT("/Script/SourceFilteringCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
