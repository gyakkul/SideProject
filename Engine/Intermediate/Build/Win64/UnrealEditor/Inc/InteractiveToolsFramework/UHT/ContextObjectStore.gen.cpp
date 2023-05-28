// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextObjectStore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextObjectStore() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UContextObjectStore();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UContextObjectStore_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UContextObjectStore::StaticRegisterNativesUContextObjectStore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextObjectStore);
	UClass* Z_Construct_UClass_UContextObjectStore_NoRegister()
	{
		return UContextObjectStore::StaticClass();
	}
	struct Z_Construct_UClass_UContextObjectStore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContextObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextObjectStore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextObjectStore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A context object store allows tools to get access to arbitrary objects which expose data or APIs to enable additional functionality.\n  * Some example use cases of context objects: \n  *   - A tool builder may disallow a particular tool if a needed API object is not present in the context store.\n  *   - A tool may allow extra actions if it has access to a particular API object in the context store.\n  *   - A tool may choose to initialize itself differently based on the presence of a selection-holding data object in the context store.\n */" },
		{ "IncludePath", "ContextObjectStore.h" },
		{ "ModuleRelativePath", "Public/ContextObjectStore.h" },
		{ "ToolTip", "A context object store allows tools to get access to arbitrary objects which expose data or APIs to enable additional functionality.\nSome example use cases of context objects:\n  - A tool builder may disallow a particular tool if a needed API object is not present in the context store.\n  - A tool may allow extra actions if it has access to a particular API object in the context store.\n  - A tool may choose to initialize itself differently based on the presence of a selection-holding data object in the context store." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContextObjectStore_Statics::NewProp_ContextObjects_Inner = { "ContextObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextObjectStore_Statics::NewProp_ContextObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjectStore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextObjectStore_Statics::NewProp_ContextObjects = { "ContextObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextObjectStore, ContextObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextObjectStore_Statics::NewProp_ContextObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextObjectStore_Statics::NewProp_ContextObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextObjectStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextObjectStore_Statics::NewProp_ContextObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextObjectStore_Statics::NewProp_ContextObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextObjectStore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextObjectStore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextObjectStore_Statics::ClassParams = {
		&UContextObjectStore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextObjectStore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextObjectStore_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UContextObjectStore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextObjectStore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextObjectStore()
	{
		if (!Z_Registration_Info_UClass_UContextObjectStore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextObjectStore.OuterSingleton, Z_Construct_UClass_UContextObjectStore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextObjectStore.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UContextObjectStore>()
	{
		return UContextObjectStore::StaticClass();
	}
	UContextObjectStore::UContextObjectStore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextObjectStore);
	UContextObjectStore::~UContextObjectStore() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextObjectStore, UContextObjectStore::StaticClass, TEXT("UContextObjectStore"), &Z_Registration_Info_UClass_UContextObjectStore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextObjectStore), 451965586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_793083852(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
