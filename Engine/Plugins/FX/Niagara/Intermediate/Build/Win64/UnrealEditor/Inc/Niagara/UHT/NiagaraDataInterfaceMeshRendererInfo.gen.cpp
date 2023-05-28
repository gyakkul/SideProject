// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceMeshRendererInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshRendererInfo() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceMeshRendererInfo::StaticRegisterNativesUNiagaraDataInterfaceMeshRendererInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceMeshRendererInfo);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_NoRegister()
	{
		return UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshRenderer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshRenderer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::Class_MetaDataParams[] = {
		{ "Category", "Mesh Particles" },
		{ "Comment", "/** This Data Interface can be used to query information about the mesh renderers of an emitter */" },
		{ "DisplayName", "Mesh Renderer Info" },
		{ "IncludePath", "NiagaraDataInterfaceMeshRendererInfo.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshRendererInfo.h" },
		{ "ToolTip", "This Data Interface can be used to query information about the mesh renderers of an emitter" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the mesh renderer */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshRendererInfo.h" },
		{ "ToolTip", "The name of the mesh renderer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer = { "MeshRenderer", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceMeshRendererInfo, MeshRenderer), Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceMeshRendererInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::ClassParams = {
		&UNiagaraDataInterfaceMeshRendererInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceMeshRendererInfo>()
	{
		return UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceMeshRendererInfo);
	UNiagaraDataInterfaceMeshRendererInfo::~UNiagaraDataInterfaceMeshRendererInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo, UNiagaraDataInterfaceMeshRendererInfo::StaticClass, TEXT("UNiagaraDataInterfaceMeshRendererInfo"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceMeshRendererInfo), 1526674837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h_4251473123(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
