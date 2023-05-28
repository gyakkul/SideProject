// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/Translators/MassSceneComponentLocationTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSceneComponentLocationTranslator() {}
// Cross Module References
	MASSACTORS_API UClass* Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_NoRegister();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References

static_assert(std::is_polymorphic<FMassSceneComponentWrapperFragment>() == std::is_polymorphic<FObjectWrapperFragment>(), "USTRUCT FMassSceneComponentWrapperFragment cannot be polymorphic unless super FObjectWrapperFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment;
class UScriptStruct* FMassSceneComponentWrapperFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassSceneComponentWrapperFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassSceneComponentWrapperFragment>()
{
	return FMassSceneComponentWrapperFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassSceneComponentLocationTranslator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSceneComponentWrapperFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FObjectWrapperFragment,
		&NewStructOps,
		"MassSceneComponentWrapperFragment",
		sizeof(FMassSceneComponentWrapperFragment),
		alignof(FMassSceneComponentWrapperFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSceneComponentLocationCopyToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassSceneComponentLocationCopyToMassTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag;
class UScriptStruct* FMassSceneComponentLocationCopyToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassSceneComponentLocationCopyToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassSceneComponentLocationCopyToMassTag>()
{
	return FMassSceneComponentLocationCopyToMassTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassSceneComponentLocationTranslator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSceneComponentLocationCopyToMassTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassSceneComponentLocationCopyToMassTag",
		sizeof(FMassSceneComponentLocationCopyToMassTag),
		alignof(FMassSceneComponentLocationCopyToMassTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag.InnerSingleton;
	}
	void UMassSceneComponentLocationToMassTranslator::StaticRegisterNativesUMassSceneComponentLocationToMassTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSceneComponentLocationToMassTranslator);
	UClass* Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_NoRegister()
	{
		return UMassSceneComponentLocationToMassTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassSceneComponentLocationTranslator.h" },
		{ "ModuleRelativePath", "Public/Translators/MassSceneComponentLocationTranslator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSceneComponentLocationToMassTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics::ClassParams = {
		&UMassSceneComponentLocationToMassTranslator::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassSceneComponentLocationToMassTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSceneComponentLocationToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSceneComponentLocationToMassTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassSceneComponentLocationToMassTranslator>()
	{
		return UMassSceneComponentLocationToMassTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSceneComponentLocationToMassTranslator);
	UMassSceneComponentLocationToMassTranslator::~UMassSceneComponentLocationToMassTranslator() {}

static_assert(std::is_polymorphic<FMassSceneComponentLocationCopyToActorTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassSceneComponentLocationCopyToActorTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag;
class UScriptStruct* FMassSceneComponentLocationCopyToActorTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassSceneComponentLocationCopyToActorTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassSceneComponentLocationCopyToActorTag>()
{
	return FMassSceneComponentLocationCopyToActorTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassSceneComponentLocationTranslator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSceneComponentLocationCopyToActorTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassSceneComponentLocationCopyToActorTag",
		sizeof(FMassSceneComponentLocationCopyToActorTag),
		alignof(FMassSceneComponentLocationCopyToActorTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag.InnerSingleton, Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag.InnerSingleton;
	}
	void UMassSceneComponentLocationToActorTranslator::StaticRegisterNativesUMassSceneComponentLocationToActorTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSceneComponentLocationToActorTranslator);
	UClass* Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_NoRegister()
	{
		return UMassSceneComponentLocationToActorTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassSceneComponentLocationTranslator.h" },
		{ "ModuleRelativePath", "Public/Translators/MassSceneComponentLocationTranslator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSceneComponentLocationToActorTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics::ClassParams = {
		&UMassSceneComponentLocationToActorTranslator::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassSceneComponentLocationToActorTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSceneComponentLocationToActorTranslator.OuterSingleton, Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSceneComponentLocationToActorTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassSceneComponentLocationToActorTranslator>()
	{
		return UMassSceneComponentLocationToActorTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSceneComponentLocationToActorTranslator);
	UMassSceneComponentLocationToActorTranslator::~UMassSceneComponentLocationToActorTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_Statics::ScriptStructInfo[] = {
		{ FMassSceneComponentWrapperFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSceneComponentWrapperFragment_Statics::NewStructOps, TEXT("MassSceneComponentWrapperFragment"), &Z_Registration_Info_UScriptStruct_MassSceneComponentWrapperFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSceneComponentWrapperFragment), 4226346515U) },
		{ FMassSceneComponentLocationCopyToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToMassTag_Statics::NewStructOps, TEXT("MassSceneComponentLocationCopyToMassTag"), &Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSceneComponentLocationCopyToMassTag), 1854479970U) },
		{ FMassSceneComponentLocationCopyToActorTag::StaticStruct, Z_Construct_UScriptStruct_FMassSceneComponentLocationCopyToActorTag_Statics::NewStructOps, TEXT("MassSceneComponentLocationCopyToActorTag"), &Z_Registration_Info_UScriptStruct_MassSceneComponentLocationCopyToActorTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSceneComponentLocationCopyToActorTag), 651524636U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSceneComponentLocationToMassTranslator, UMassSceneComponentLocationToMassTranslator::StaticClass, TEXT("UMassSceneComponentLocationToMassTranslator"), &Z_Registration_Info_UClass_UMassSceneComponentLocationToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSceneComponentLocationToMassTranslator), 507086477U) },
		{ Z_Construct_UClass_UMassSceneComponentLocationToActorTranslator, UMassSceneComponentLocationToActorTranslator::StaticClass, TEXT("UMassSceneComponentLocationToActorTranslator"), &Z_Registration_Info_UClass_UMassSceneComponentLocationToActorTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSceneComponentLocationToActorTranslator), 26681179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_3830331016(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentLocationTranslator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
