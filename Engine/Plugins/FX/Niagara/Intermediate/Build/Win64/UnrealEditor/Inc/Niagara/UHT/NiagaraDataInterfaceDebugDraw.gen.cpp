// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceDebugDraw.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDebugDraw() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceDebugDraw::StaticRegisterNativesUNiagaraDataInterfaceDebugDraw()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDebugDraw);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_NoRegister()
	{
		return UNiagaraDataInterfaceDebugDraw::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaxLineInstances_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_OverrideMaxLineInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::Class_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "DisplayName", "DebugDraw" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDebugDraw.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDebugDraw.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::NewProp_OverrideMaxLineInstances_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "// Number of debug lines is set as the max of OverrideMaxLineInstances and fx.Niagara.GpuComputeDebug.MaxLineInstances\n" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Number of debug lines is set as the max of OverrideMaxLineInstances and fx.Niagara.GpuComputeDebug.MaxLineInstances" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::NewProp_OverrideMaxLineInstances = { "OverrideMaxLineInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDebugDraw, OverrideMaxLineInstances), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::NewProp_OverrideMaxLineInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::NewProp_OverrideMaxLineInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::NewProp_OverrideMaxLineInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDebugDraw>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::ClassParams = {
		&UNiagaraDataInterfaceDebugDraw::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDebugDraw.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDebugDraw.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceDebugDraw.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDebugDraw>()
	{
		return UNiagaraDataInterfaceDebugDraw::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDebugDraw);
	UNiagaraDataInterfaceDebugDraw::~UNiagaraDataInterfaceDebugDraw() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw, UNiagaraDataInterfaceDebugDraw::StaticClass, TEXT("UNiagaraDataInterfaceDebugDraw"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDebugDraw, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDebugDraw), 3753879582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_1470674516(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
