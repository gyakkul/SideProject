// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/UserWidgetPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetPool() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserWidgetPool;
class UScriptStruct* FUserWidgetPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserWidgetPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserWidgetPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserWidgetPool, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("UserWidgetPool"));
	}
	return Z_Registration_Info_UScriptStruct_UserWidgetPool.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FUserWidgetPool>()
{
	return FUserWidgetPool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserWidgetPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveWidgets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InactiveWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InactiveWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pools UUserWidget instances to minimize UObject and SWidget allocations for UMG elements with dynamic entries.\n *\n * Note that if underlying Slate instances are released when a UserWidget instance becomes inactive, NativeConstruct & NativeDestruct will be called when UUserWidget\n * instances are made active or inactive, respectively, provided the widget isn't actively referenced in the Slate hierarchy (i.e. if the shared reference count on the widget goes from/to 0).\n *\n * WARNING: Be sure to release the pool's Slate widgets within the owning widget's ReleaseSlateResources call to prevent leaking due to circular references\n *\x09\x09Otherwise the cached references to SObjectWidgets will keep the UUserWidgets - and all that they reference - alive\n *\n * @see UListView\n * @see UDynamicEntryBox\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
		{ "ToolTip", "Pools UUserWidget instances to minimize UObject and SWidget allocations for UMG elements with dynamic entries.\n\nNote that if underlying Slate instances are released when a UserWidget instance becomes inactive, NativeConstruct & NativeDestruct will be called when UUserWidget\ninstances are made active or inactive, respectively, provided the widget isn't actively referenced in the Slate hierarchy (i.e. if the shared reference count on the widget goes from/to 0).\n\nWARNING: Be sure to release the pool's Slate widgets within the owning widget's ReleaseSlateResources call to prevent leaking due to circular references\n            Otherwise the cached references to SObjectWidgets will keep the UUserWidgets - and all that they reference - alive\n\n@see UListView\n@see UDynamicEntryBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserWidgetPool>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_Inner = { "ActiveWidgets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets = { "ActiveWidgets", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserWidgetPool, ActiveWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_Inner = { "InactiveWidgets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets = { "InactiveWidgets", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserWidgetPool, InactiveWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"UserWidgetPool",
		sizeof(FUserWidgetPool),
		alignof(FUserWidgetPool),
		Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool()
	{
		if (!Z_Registration_Info_UScriptStruct_UserWidgetPool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserWidgetPool.InnerSingleton, Z_Construct_UScriptStruct_FUserWidgetPool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserWidgetPool.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_Statics::ScriptStructInfo[] = {
		{ FUserWidgetPool::StaticStruct, Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewStructOps, TEXT("UserWidgetPool"), &Z_Registration_Info_UScriptStruct_UserWidgetPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserWidgetPool), 3158109562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_2345559970(TEXT("/Script/UMG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
