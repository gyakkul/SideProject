// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraCullProxyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCullProxyComponent() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraCullProxyComponent();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo;
class UScriptStruct* FNiagaraCulledComponentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCulledComponentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCulledComponentInfo>()
{
	return FNiagaraCulledComponentInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Info on a culled Niagara Component for use by it's cull proxy. */" },
		{ "ModuleRelativePath", "Public/NiagaraCullProxyComponent.h" },
		{ "ToolTip", "Info on a culled Niagara Component for use by it's cull proxy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCulledComponentInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCulledComponentInfo",
		sizeof(FNiagaraCulledComponentInfo),
		alignof(FNiagaraCulledComponentInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.InnerSingleton;
	}
	void UNiagaraCullProxyComponent::StaticRegisterNativesUNiagaraCullProxyComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraCullProxyComponent);
	UClass* Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister()
	{
		return UNiagaraCullProxyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraCullProxyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nA specialization of UNiagaraComponent that can act as a proxy for many other NiagaraComponents that have been culled by scalability. \n*/" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "NiagaraCullProxyComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NiagaraCullProxyComponent.h" },
		{ "ToolTip", "A specialization of UNiagaraComponent that can act as a proxy for many other NiagaraComponents that have been culled by scalability." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo, METADATA_PARAMS(nullptr, 0) }; // 375531948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Array of additional instance transforms. This component will be rendered at it's own transform and additionally at each of these transforms. */" },
		{ "ModuleRelativePath", "Public/NiagaraCullProxyComponent.h" },
		{ "ToolTip", "Array of additional instance transforms. This component will be rendered at it's own transform and additionally at each of these transforms." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraCullProxyComponent, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances_MetaData)) }; // 375531948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraCullProxyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::ClassParams = {
		&UNiagaraCullProxyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraCullProxyComponent()
	{
		if (!Z_Registration_Info_UClass_UNiagaraCullProxyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraCullProxyComponent.OuterSingleton, Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraCullProxyComponent.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraCullProxyComponent>()
	{
		return UNiagaraCullProxyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraCullProxyComponent);
	UNiagaraCullProxyComponent::~UNiagaraCullProxyComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraCulledComponentInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::NewStructOps, TEXT("NiagaraCulledComponentInfo"), &Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCulledComponentInfo), 375531948U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraCullProxyComponent, UNiagaraCullProxyComponent::StaticClass, TEXT("UNiagaraCullProxyComponent"), &Z_Registration_Info_UClass_UNiagaraCullProxyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraCullProxyComponent), 511907379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_200094963(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
