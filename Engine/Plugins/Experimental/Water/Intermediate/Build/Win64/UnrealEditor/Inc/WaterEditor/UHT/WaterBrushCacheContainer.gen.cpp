// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterBrushCacheContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBrushCacheContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyBrushCacheContainer();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyBrushCacheContainer_NoRegister();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyBrushCache();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyBrushCache;
class UScriptStruct* FWaterBodyBrushCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyBrushCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyBrushCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyBrushCache, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBodyBrushCache"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyBrushCache.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBodyBrushCache>()
{
	return FWaterBodyBrushCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CacheRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheIsValid_MetaData[];
#endif
		static void NewProp_CacheIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CacheIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO [jonathan.bard] : rename : this is not a WaterBodyBrushCache, this a simple RenderTarget with a boolean to force an update on it\n//  This is also used for caching curves...\n" },
		{ "ModuleRelativePath", "Private/WaterBrushCacheContainer.h" },
		{ "ToolTip", "TODO [jonathan.bard] : rename : this is not a WaterBodyBrushCache, this a simple RenderTarget with a boolean to force an update on it\n This is also used for caching curves..." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyBrushCache>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheRenderTarget_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Private/WaterBrushCacheContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheRenderTarget = { "CacheRenderTarget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyBrushCache, CacheRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheIsValid_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Private/WaterBrushCacheContainer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheIsValid_SetBit(void* Obj)
	{
		((FWaterBodyBrushCache*)Obj)->CacheIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheIsValid = { "CacheIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWaterBodyBrushCache), &Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheIsValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewProp_CacheIsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		nullptr,
		&NewStructOps,
		"WaterBodyBrushCache",
		sizeof(FWaterBodyBrushCache),
		alignof(FWaterBodyBrushCache),
		Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyBrushCache()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyBrushCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyBrushCache.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyBrushCache.InnerSingleton;
	}
	void UWaterBodyBrushCacheContainer::StaticRegisterNativesUWaterBodyBrushCacheContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyBrushCacheContainer);
	UClass* Z_Construct_UClass_UWaterBodyBrushCacheContainer_NoRegister()
	{
		return UWaterBodyBrushCacheContainer::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WaterBrushCacheContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/WaterBrushCacheContainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::NewProp_Cache_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cache" },
		{ "ModuleRelativePath", "Private/WaterBrushCacheContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyBrushCacheContainer, Cache), Z_Construct_UScriptStruct_FWaterBodyBrushCache, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::NewProp_Cache_MetaData)) }; // 2741504481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::NewProp_Cache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyBrushCacheContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::ClassParams = {
		&UWaterBodyBrushCacheContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyBrushCacheContainer()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyBrushCacheContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyBrushCacheContainer.OuterSingleton, Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyBrushCacheContainer.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBodyBrushCacheContainer>()
	{
		return UWaterBodyBrushCacheContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyBrushCacheContainer);
	UWaterBodyBrushCacheContainer::~UWaterBodyBrushCacheContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_Statics::ScriptStructInfo[] = {
		{ FWaterBodyBrushCache::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics::NewStructOps, TEXT("WaterBodyBrushCache"), &Z_Registration_Info_UScriptStruct_WaterBodyBrushCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyBrushCache), 2741504481U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyBrushCacheContainer, UWaterBodyBrushCacheContainer::StaticClass, TEXT("UWaterBodyBrushCacheContainer"), &Z_Registration_Info_UClass_UWaterBodyBrushCacheContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyBrushCacheContainer), 3672481793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_1904360402(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
