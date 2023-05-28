// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HLODProxy.h"
#include "../../Source/Runtime/Engine/Public/HLOD/HLODProxyMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHLODProxy::StaticRegisterNativesUHLODProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODProxy);
	UClass* Z_Construct_UClass_UHLODProxy_NoRegister()
	{
		return UHLODProxy::StaticClass();
	}
	struct Z_Construct_UClass_UHLODProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningMap_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OwningMap;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProxyMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HLODActors_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HLODActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HLODActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This asset acts as a proxy to a static mesh for ALODActors to display */" },
		{ "IncludePath", "Engine/HLODProxy.h" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "This asset acts as a proxy to a static mesh for ALODActors to display" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** Keep hold of the level in the editor to allow for package cleaning etc. */" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "Keep hold of the level in the editor to allow for package cleaning etc." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap = { "OwningMap", nullptr, (EPropertyFlags)0x0044000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxy, OwningMap), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHLODProxyMesh, METADATA_PARAMS(nullptr, 0) }; // 2793890692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** All the mesh proxies we contain */" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "All the mesh proxies we contain" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxy, ProxyMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData)) }; // 2793890692
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_ValueProp = { "HLODActors", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHLODProxyMesh, METADATA_PARAMS(nullptr, 0) }; // 2793890692
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_Key_KeyProp = { "HLODActors_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHLODProxyDesc_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors = { "HLODActors", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxy, HLODActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_MetaData)) }; // 2793890692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODProxy_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODProxy_Statics::ClassParams = {
		&UHLODProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLODProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODProxy()
	{
		if (!Z_Registration_Info_UClass_UHLODProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODProxy.OuterSingleton, Z_Construct_UClass_UHLODProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODProxy.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHLODProxy>()
	{
		return UHLODProxy::StaticClass();
	}
	UHLODProxy::UHLODProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODProxy);
	UHLODProxy::~UHLODProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODProxy, UHLODProxy::StaticClass, TEXT("UHLODProxy"), &Z_Registration_Info_UClass_UHLODProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODProxy), 1747349013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_1960759219(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
