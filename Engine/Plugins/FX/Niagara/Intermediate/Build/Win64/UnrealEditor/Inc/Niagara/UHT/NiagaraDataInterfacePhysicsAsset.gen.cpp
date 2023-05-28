// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataInterfacePhysicsAsset.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePhysicsAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfacePhysicsAsset::StaticRegisterNativesUNiagaraDataInterfacePhysicsAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfacePhysicsAsset);
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_NoRegister()
	{
		return UNiagaraDataInterfacePhysicsAsset::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSourceActor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceActor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshUserParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Data Interface for interacting with PhysicsAssets */" },
		{ "DisplayName", "Physics Asset" },
		{ "IncludePath", "NiagaraDataInterfacePhysicsAsset.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "Data Interface for interacting with PhysicsAssets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_DefaultSource_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Skeletal Mesh from which the Physics Asset will be found. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "Skeletal Mesh from which the Physics Asset will be found." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_DefaultSource = { "DefaultSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, DefaultSource), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_DefaultSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_DefaultSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SoftSourceActor_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The source actor from which to sample */" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "The source actor from which to sample" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SoftSourceActor = { "SoftSourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, SoftSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SoftSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SoftSourceActor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SourceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, SourceActor_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SourceActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_MeshUserParameter_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_MeshUserParameter = { "MeshUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, MeshUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_MeshUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_MeshUserParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_DefaultSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SoftSourceActor,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SourceActor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_MeshUserParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfacePhysicsAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::ClassParams = {
		&UNiagaraDataInterfacePhysicsAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfacePhysicsAsset>()
	{
		return UNiagaraDataInterfacePhysicsAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfacePhysicsAsset);
	UNiagaraDataInterfacePhysicsAsset::~UNiagaraDataInterfacePhysicsAsset() {}
	void UNiagaraPhysicsAssetDICollectorInterface::StaticRegisterNativesUNiagaraPhysicsAssetDICollectorInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPhysicsAssetDICollectorInterface);
	UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister()
	{
		return UNiagaraPhysicsAssetDICollectorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INiagaraPhysicsAssetDICollectorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::ClassParams = {
		&UNiagaraPhysicsAssetDICollectorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface()
	{
		if (!Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.OuterSingleton, Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPhysicsAssetDICollectorInterface>()
	{
		return UNiagaraPhysicsAssetDICollectorInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPhysicsAssetDICollectorInterface);
	UNiagaraPhysicsAssetDICollectorInterface::~UNiagaraPhysicsAssetDICollectorInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset, UNiagaraDataInterfacePhysicsAsset::StaticClass, TEXT("UNiagaraDataInterfacePhysicsAsset"), &Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfacePhysicsAsset), 751627585U) },
		{ Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface, UNiagaraPhysicsAssetDICollectorInterface::StaticClass, TEXT("UNiagaraPhysicsAssetDICollectorInterface"), &Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPhysicsAssetDICollectorInterface), 566731540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_1674169089(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
