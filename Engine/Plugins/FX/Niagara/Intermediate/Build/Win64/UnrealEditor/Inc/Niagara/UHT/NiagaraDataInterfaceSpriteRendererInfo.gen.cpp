// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceSpriteRendererInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSpriteRendererInfo() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceSpriteRendererInfo::StaticRegisterNativesUNiagaraDataInterfaceSpriteRendererInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSpriteRendererInfo);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_NoRegister()
	{
		return UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteRenderer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteRenderer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::Class_MetaDataParams[] = {
		{ "Category", "Sprite Particles" },
		{ "Comment", "/** This Data Interface can be used to query information about the sprite renderers of an emitter */" },
		{ "DisplayName", "Sprite Renderer Info" },
		{ "IncludePath", "NiagaraDataInterfaceSpriteRendererInfo.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpriteRendererInfo.h" },
		{ "ToolTip", "This Data Interface can be used to query information about the sprite renderers of an emitter" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::NewProp_SpriteRenderer_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the sprite renderer */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpriteRendererInfo.h" },
		{ "ToolTip", "The name of the sprite renderer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::NewProp_SpriteRenderer = { "SpriteRenderer", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSpriteRendererInfo, SpriteRenderer), Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::NewProp_SpriteRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::NewProp_SpriteRenderer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::NewProp_SpriteRenderer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSpriteRendererInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::ClassParams = {
		&UNiagaraDataInterfaceSpriteRendererInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSpriteRendererInfo>()
	{
		return UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSpriteRendererInfo);
	UNiagaraDataInterfaceSpriteRendererInfo::~UNiagaraDataInterfaceSpriteRendererInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo, UNiagaraDataInterfaceSpriteRendererInfo::StaticClass, TEXT("UNiagaraDataInterfaceSpriteRendererInfo"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSpriteRendererInfo), 1225176763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_1383761034(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
