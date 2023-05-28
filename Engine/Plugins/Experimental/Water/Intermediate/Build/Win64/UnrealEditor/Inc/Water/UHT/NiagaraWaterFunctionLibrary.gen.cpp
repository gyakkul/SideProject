// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraWaterFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraWaterFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UNiagaraWaterFunctionLibrary();
	WATER_API UClass* Z_Construct_UClass_UNiagaraWaterFunctionLibrary_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraWaterFunctionLibrary::execSetWaterBodyComponent)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UWaterBodyComponent,Z_Param_WaterBodyComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraWaterFunctionLibrary::SetWaterBodyComponent(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_WaterBodyComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraWaterFunctionLibrary::execSetWaterBody)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(AWaterBody,Z_Param_WaterBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraWaterFunctionLibrary::SetWaterBody(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_WaterBody);
		P_NATIVE_END;
	}
	void UNiagaraWaterFunctionLibrary::StaticRegisterNativesUNiagaraWaterFunctionLibrary()
	{
		UClass* Class = UNiagaraWaterFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWaterBody", &UNiagaraWaterFunctionLibrary::execSetWaterBody },
			{ "SetWaterBodyComponent", &UNiagaraWaterFunctionLibrary::execSetWaterBodyComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics
	{
		struct NiagaraWaterFunctionLibrary_eventSetWaterBody_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			AWaterBody* WaterBody;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraWaterFunctionLibrary_eventSetWaterBody_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraWaterFunctionLibrary_eventSetWaterBody_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_WaterBody = { "WaterBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraWaterFunctionLibrary_eventSetWaterBody_Parms, WaterBody), Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NewProp_WaterBody,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetWaterBodyComponent instead" },
		{ "DisplayName", "Set Water Body" },
		{ "ModuleRelativePath", "Public/NiagaraWaterFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraWaterFunctionLibrary, nullptr, "SetWaterBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::NiagaraWaterFunctionLibrary_eventSetWaterBody_Parms), Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics
	{
		struct NiagaraWaterFunctionLibrary_eventSetWaterBodyComponent_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UWaterBodyComponent* WaterBodyComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterBodyComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraWaterFunctionLibrary_eventSetWaterBodyComponent_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraWaterFunctionLibrary_eventSetWaterBodyComponent_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_WaterBodyComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_WaterBodyComponent = { "WaterBodyComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraWaterFunctionLibrary_eventSetWaterBodyComponent_Parms, WaterBodyComponent), Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_WaterBodyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_WaterBodyComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NewProp_WaterBodyComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Sets the water body component on the Niagra water data interface on a Niagara particle system*/" },
		{ "ModuleRelativePath", "Public/NiagaraWaterFunctionLibrary.h" },
		{ "ToolTip", "Sets the water body component on the Niagra water data interface on a Niagara particle system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraWaterFunctionLibrary, nullptr, "SetWaterBodyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::NiagaraWaterFunctionLibrary_eventSetWaterBodyComponent_Parms), Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraWaterFunctionLibrary);
	UClass* Z_Construct_UClass_UNiagaraWaterFunctionLibrary_NoRegister()
	{
		return UNiagaraWaterFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBody, "SetWaterBody" }, // 1785990399
		{ &Z_Construct_UFunction_UNiagaraWaterFunctionLibrary_SetWaterBodyComponent, "SetWaterBodyComponent" }, // 682578841
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraWaterFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NiagaraWaterFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraWaterFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::ClassParams = {
		&UNiagaraWaterFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraWaterFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UNiagaraWaterFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraWaterFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraWaterFunctionLibrary.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UNiagaraWaterFunctionLibrary>()
	{
		return UNiagaraWaterFunctionLibrary::StaticClass();
	}
	UNiagaraWaterFunctionLibrary::UNiagaraWaterFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraWaterFunctionLibrary);
	UNiagaraWaterFunctionLibrary::~UNiagaraWaterFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraWaterFunctionLibrary, UNiagaraWaterFunctionLibrary::StaticClass, TEXT("UNiagaraWaterFunctionLibrary"), &Z_Registration_Info_UClass_UNiagaraWaterFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraWaterFunctionLibrary), 222318579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_4168145187(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
