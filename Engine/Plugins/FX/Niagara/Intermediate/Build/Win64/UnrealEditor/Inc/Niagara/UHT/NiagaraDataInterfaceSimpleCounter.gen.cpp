// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceSimpleCounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSimpleCounter() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceSimpleCounter::StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSimpleCounter);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_NoRegister()
	{
		return UNiagaraDataInterfaceSimpleCounter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GpuSyncMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuSyncMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuSyncMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams[] = {
		{ "Category", "Counting" },
		{ "Comment", "/**\nThread safe counter starts at the initial value on start / reset.\nWhen operating between CPU & GPU ensure you set the appropriate sync mode.\n*/" },
		{ "DisplayName", "Simple Counter" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ToolTip", "Thread safe counter starts at the initial value on start / reset.\nWhen operating between CPU & GPU ensure you set the appropriate sync mode." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode_MetaData[] = {
		{ "Category", "Simple Counter" },
		{ "Comment", "/** Select how we should synchronize the counter between Cpu & Gpu */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ToolTip", "Select how we should synchronize the counter between Cpu & Gpu" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode = { "GpuSyncMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSimpleCounter, GpuSyncMode), Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode_MetaData)) }; // 1841721869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Simple Counter" },
		{ "Comment", "/** This is the value the counter will have when the instance is reset / created. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ToolTip", "This is the value the counter will have when the instance is reset / created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSimpleCounter, InitialValue), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_InitialValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_InitialValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSimpleCounter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::ClassParams = {
		&UNiagaraDataInterfaceSimpleCounter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSimpleCounter>()
	{
		return UNiagaraDataInterfaceSimpleCounter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSimpleCounter);
	UNiagaraDataInterfaceSimpleCounter::~UNiagaraDataInterfaceSimpleCounter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter, UNiagaraDataInterfaceSimpleCounter::StaticClass, TEXT("UNiagaraDataInterfaceSimpleCounter"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSimpleCounter), 2767185680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_1209443271(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
