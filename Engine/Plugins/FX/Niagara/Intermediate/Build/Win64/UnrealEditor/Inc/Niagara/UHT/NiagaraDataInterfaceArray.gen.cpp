// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArray() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceArray::StaticRegisterNativesUNiagaraDataInterfaceArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArray);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister()
	{
		return UNiagaraDataInterfaceArray::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxElements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceArray.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode_MetaData[] = {
		{ "Category", "Array" },
		{ "Comment", "/** How to do we want to synchronize modifications to the array data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
		{ "ToolTip", "How to do we want to synchronize modifications to the array data." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode = { "GpuSyncMode", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArray, GpuSyncMode), Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode_MetaData)) }; // 1841721869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements_MetaData[] = {
		{ "Category", "Array" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When greater than 0 sets the maximum number of elements the array can hold, only relevant when using operations that modify the array size. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
		{ "ToolTip", "When greater than 0 sets the maximum number of elements the array can hold, only relevant when using operations that modify the array size." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements = { "MaxElements", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArray, MaxElements), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::ClassParams = {
		&UNiagaraDataInterfaceArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArray>()
	{
		return UNiagaraDataInterfaceArray::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArray);
	UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceArray, UNiagaraDataInterfaceArray::StaticClass, TEXT("UNiagaraDataInterfaceArray"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArray), 1629656239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_307805298(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
