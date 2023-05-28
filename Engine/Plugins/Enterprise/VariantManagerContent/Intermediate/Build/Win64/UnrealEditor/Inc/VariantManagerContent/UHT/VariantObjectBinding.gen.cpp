// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantObjectBinding.h"
#include "FunctionCaller.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantObjectBinding() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister();
	VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionCaller();
// End Cross Module References
	void UVariantObjectBinding::StaticRegisterNativesUVariantObjectBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariantObjectBinding);
	UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister()
	{
		return UVariantObjectBinding::StaticClass();
	}
	struct Z_Construct_UClass_UVariantObjectBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedActorLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_LazyObjectPtr;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapturedProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapturedProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionCallers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionCallers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionCallers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariantObjectBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VariantObjectBinding.h" },
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
		{ "ScriptName", "UVariantActorBinding" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whenever we resolve, we cache the actor label here so that if we can't\n\x09 * resolve anymore we can better indicate which actor is missing, instead of just\n\x09 * saying 'Unloaded binding'\n\x09 */" },
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
		{ "ToolTip", "Whenever we resolve, we cache the actor label here so that if we can't\nresolve anymore we can better indicate which actor is missing, instead of just\nsaying 'Unloaded binding'" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel = { "CachedActorLabel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantObjectBinding, CachedActorLabel), METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr = { "ObjectPtr", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantObjectBinding, ObjectPtr), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr = { "LazyObjectPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantObjectBinding, LazyObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_Inner = { "CapturedProperties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties = { "CapturedProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantObjectBinding, CapturedProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_Inner = { "FunctionCallers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFunctionCaller, METADATA_PARAMS(nullptr, 0) }; // 3936284012
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers = { "FunctionCallers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantObjectBinding, FunctionCallers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_MetaData)) }; // 3936284012
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariantObjectBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariantObjectBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariantObjectBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariantObjectBinding_Statics::ClassParams = {
		&UVariantObjectBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVariantObjectBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariantObjectBinding()
	{
		if (!Z_Registration_Info_UClass_UVariantObjectBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariantObjectBinding.OuterSingleton, Z_Construct_UClass_UVariantObjectBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVariantObjectBinding.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UVariantObjectBinding>()
	{
		return UVariantObjectBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariantObjectBinding);
	UVariantObjectBinding::~UVariantObjectBinding() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantObjectBinding)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVariantObjectBinding, UVariantObjectBinding::StaticClass, TEXT("UVariantObjectBinding"), &Z_Registration_Info_UClass_UVariantObjectBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariantObjectBinding), 2142787019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_658125181(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
