// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/Translators/MassCapsuleComponentTranslators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCapsuleComponentTranslators() {}
// Cross Module References
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCapsuleTransformToMassTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassTransformToActorCapsuleTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_NoRegister();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References

static_assert(std::is_polymorphic<FCapsuleComponentWrapperFragment>() == std::is_polymorphic<FObjectWrapperFragment>(), "USTRUCT FCapsuleComponentWrapperFragment cannot be polymorphic unless super FObjectWrapperFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment;
class UScriptStruct* FCapsuleComponentWrapperFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("CapsuleComponentWrapperFragment"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FCapsuleComponentWrapperFragment>()
{
	return FCapsuleComponentWrapperFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassCapsuleComponentTranslators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleComponentWrapperFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FObjectWrapperFragment,
		&NewStructOps,
		"CapsuleComponentWrapperFragment",
		sizeof(FCapsuleComponentWrapperFragment),
		alignof(FCapsuleComponentWrapperFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassCapsuleTransformCopyToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCapsuleTransformCopyToMassTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag;
class UScriptStruct* FMassCapsuleTransformCopyToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassCapsuleTransformCopyToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassCapsuleTransformCopyToMassTag>()
{
	return FMassCapsuleTransformCopyToMassTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * @todo TBD\n * I'm a bit on a fence regarding having separate tags per copy direction. My concern is that we can end up with a very \n * dispersed entity population spread across multiple archetypes storing a small number of entities each. An alternative\n * would be to have a property on the Wrapper fragment, but that doesn't sit well with me either, since that data would be \n * essentially static, meaning it will (in most cases) never change for a given entity, and we could waste a lot of time \n * iterating over fragments just to check that specific value.\n */" },
		{ "ModuleRelativePath", "Public/Translators/MassCapsuleComponentTranslators.h" },
		{ "ToolTip", "@todo TBD\nI'm a bit on a fence regarding having separate tags per copy direction. My concern is that we can end up with a very\ndispersed entity population spread across multiple archetypes storing a small number of entities each. An alternative\nwould be to have a property on the Wrapper fragment, but that doesn't sit well with me either, since that data would be\nessentially static, meaning it will (in most cases) never change for a given entity, and we could waste a lot of time\niterating over fragments just to check that specific value." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCapsuleTransformCopyToMassTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCapsuleTransformCopyToMassTag",
		sizeof(FMassCapsuleTransformCopyToMassTag),
		alignof(FMassCapsuleTransformCopyToMassTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag.InnerSingleton;
	}
	void UMassCapsuleTransformToMassTranslator::StaticRegisterNativesUMassCapsuleTransformToMassTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCapsuleTransformToMassTranslator);
	UClass* Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_NoRegister()
	{
		return UMassCapsuleTransformToMassTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassCapsuleComponentTranslators.h" },
		{ "ModuleRelativePath", "Public/Translators/MassCapsuleComponentTranslators.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCapsuleTransformToMassTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics::ClassParams = {
		&UMassCapsuleTransformToMassTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCapsuleTransformToMassTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassCapsuleTransformToMassTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCapsuleTransformToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCapsuleTransformToMassTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassCapsuleTransformToMassTranslator>()
	{
		return UMassCapsuleTransformToMassTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCapsuleTransformToMassTranslator);
	UMassCapsuleTransformToMassTranslator::~UMassCapsuleTransformToMassTranslator() {}

static_assert(std::is_polymorphic<FMassCapsuleTransformCopyToActorTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCapsuleTransformCopyToActorTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag;
class UScriptStruct* FMassCapsuleTransformCopyToActorTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassCapsuleTransformCopyToActorTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassCapsuleTransformCopyToActorTag>()
{
	return FMassCapsuleTransformCopyToActorTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassCapsuleComponentTranslators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCapsuleTransformCopyToActorTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCapsuleTransformCopyToActorTag",
		sizeof(FMassCapsuleTransformCopyToActorTag),
		alignof(FMassCapsuleTransformCopyToActorTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag.InnerSingleton;
	}
	void UMassTransformToActorCapsuleTranslator::StaticRegisterNativesUMassTransformToActorCapsuleTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTransformToActorCapsuleTranslator);
	UClass* Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_NoRegister()
	{
		return UMassTransformToActorCapsuleTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassCapsuleComponentTranslators.h" },
		{ "ModuleRelativePath", "Public/Translators/MassCapsuleComponentTranslators.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTransformToActorCapsuleTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics::ClassParams = {
		&UMassTransformToActorCapsuleTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTransformToActorCapsuleTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassTransformToActorCapsuleTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTransformToActorCapsuleTranslator.OuterSingleton, Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTransformToActorCapsuleTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassTransformToActorCapsuleTranslator>()
	{
		return UMassTransformToActorCapsuleTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTransformToActorCapsuleTranslator);
	UMassTransformToActorCapsuleTranslator::~UMassTransformToActorCapsuleTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_Statics::ScriptStructInfo[] = {
		{ FCapsuleComponentWrapperFragment::StaticStruct, Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics::NewStructOps, TEXT("CapsuleComponentWrapperFragment"), &Z_Registration_Info_UScriptStruct_CapsuleComponentWrapperFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleComponentWrapperFragment), 3898439302U) },
		{ FMassCapsuleTransformCopyToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics::NewStructOps, TEXT("MassCapsuleTransformCopyToMassTag"), &Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCapsuleTransformCopyToMassTag), 2892387591U) },
		{ FMassCapsuleTransformCopyToActorTag::StaticStruct, Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics::NewStructOps, TEXT("MassCapsuleTransformCopyToActorTag"), &Z_Registration_Info_UScriptStruct_MassCapsuleTransformCopyToActorTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCapsuleTransformCopyToActorTag), 4210400745U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCapsuleTransformToMassTranslator, UMassCapsuleTransformToMassTranslator::StaticClass, TEXT("UMassCapsuleTransformToMassTranslator"), &Z_Registration_Info_UClass_UMassCapsuleTransformToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCapsuleTransformToMassTranslator), 3053384889U) },
		{ Z_Construct_UClass_UMassTransformToActorCapsuleTranslator, UMassTransformToActorCapsuleTranslator::StaticClass, TEXT("UMassTransformToActorCapsuleTranslator"), &Z_Registration_Info_UClass_UMassTransformToActorCapsuleTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTransformToActorCapsuleTranslator), 234783562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_3899929170(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
