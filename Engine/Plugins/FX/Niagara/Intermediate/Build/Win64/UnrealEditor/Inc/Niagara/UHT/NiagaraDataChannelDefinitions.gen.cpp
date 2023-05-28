// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataChannelDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelDefinitions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitions();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataChannelDefinitions::StaticRegisterNativesUNiagaraDataChannelDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelDefinitions);
	UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitions_NoRegister()
	{
		return UNiagaraDataChannelDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataChannels_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Asset class defining a set of data channels that can be used for communications between Niagara Emitters and Systems. */" },
		{ "IncludePath", "NiagaraDataChannelDefinitions.h" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelDefinitions.h" },
		{ "ToolTip", "Asset class defining a set of data channels that can be used for communications between Niagara Emitters and Systems." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_Inner_MetaData[] = {
		{ "Category", "DataChannel" },
		{ "Comment", "//UObject Interface END\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelDefinitions.h" },
		{ "ToolTip", "UObject Interface END" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_Inner = { "DataChannels", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraDataChannel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_MetaData[] = {
		{ "Category", "DataChannel" },
		{ "Comment", "//UObject Interface END\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelDefinitions.h" },
		{ "ToolTip", "UObject Interface END" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels = { "DataChannels", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannelDefinitions, DataChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::NewProp_DataChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::ClassParams = {
		&UNiagaraDataChannelDefinitions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitions()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelDefinitions.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelDefinitions.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelDefinitions>()
	{
		return UNiagaraDataChannelDefinitions::StaticClass();
	}
	UNiagaraDataChannelDefinitions::UNiagaraDataChannelDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelDefinitions);
	UNiagaraDataChannelDefinitions::~UNiagaraDataChannelDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelDefinitions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelDefinitions, UNiagaraDataChannelDefinitions::StaticClass, TEXT("UNiagaraDataChannelDefinitions"), &Z_Registration_Info_UClass_UNiagaraDataChannelDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelDefinitions), 4180504117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelDefinitions_h_2783332441(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelDefinitions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
