// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/Translators/MassCharacterMovementTranslators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCharacterMovementTranslators() {}
// Cross Module References
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterMovementToActorTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterMovementToActorTranslator_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterMovementToMassTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterMovementToMassTranslator_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterOrientationToActorTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterOrientationToMassTranslator();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_NoRegister();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacterMovementComponentWrapperFragment>() == std::is_polymorphic<FObjectWrapperFragment>(), "USTRUCT FCharacterMovementComponentWrapperFragment cannot be polymorphic unless super FObjectWrapperFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment;
class UScriptStruct* FCharacterMovementComponentWrapperFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("CharacterMovementComponentWrapperFragment"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FCharacterMovementComponentWrapperFragment>()
{
	return FCharacterMovementComponentWrapperFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementComponentWrapperFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FObjectWrapperFragment,
		&NewStructOps,
		"CharacterMovementComponentWrapperFragment",
		sizeof(FCharacterMovementComponentWrapperFragment),
		alignof(FCharacterMovementComponentWrapperFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassCharacterMovementCopyToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCharacterMovementCopyToMassTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag;
class UScriptStruct* FMassCharacterMovementCopyToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassCharacterMovementCopyToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassCharacterMovementCopyToMassTag>()
{
	return FMassCharacterMovementCopyToMassTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCharacterMovementCopyToMassTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCharacterMovementCopyToMassTag",
		sizeof(FMassCharacterMovementCopyToMassTag),
		alignof(FMassCharacterMovementCopyToMassTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag.InnerSingleton;
	}
	void UMassCharacterMovementToMassTranslator::StaticRegisterNativesUMassCharacterMovementToMassTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCharacterMovementToMassTranslator);
	UClass* Z_Construct_UClass_UMassCharacterMovementToMassTranslator_NoRegister()
	{
		return UMassCharacterMovementToMassTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassCharacterMovementTranslators.h" },
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCharacterMovementToMassTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics::ClassParams = {
		&UMassCharacterMovementToMassTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCharacterMovementToMassTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassCharacterMovementToMassTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCharacterMovementToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCharacterMovementToMassTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassCharacterMovementToMassTranslator>()
	{
		return UMassCharacterMovementToMassTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCharacterMovementToMassTranslator);
	UMassCharacterMovementToMassTranslator::~UMassCharacterMovementToMassTranslator() {}

static_assert(std::is_polymorphic<FMassCharacterMovementCopyToActorTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCharacterMovementCopyToActorTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag;
class UScriptStruct* FMassCharacterMovementCopyToActorTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassCharacterMovementCopyToActorTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassCharacterMovementCopyToActorTag>()
{
	return FMassCharacterMovementCopyToActorTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCharacterMovementCopyToActorTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCharacterMovementCopyToActorTag",
		sizeof(FMassCharacterMovementCopyToActorTag),
		alignof(FMassCharacterMovementCopyToActorTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag.InnerSingleton;
	}
	void UMassCharacterMovementToActorTranslator::StaticRegisterNativesUMassCharacterMovementToActorTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCharacterMovementToActorTranslator);
	UClass* Z_Construct_UClass_UMassCharacterMovementToActorTranslator_NoRegister()
	{
		return UMassCharacterMovementToActorTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassCharacterMovementTranslators.h" },
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCharacterMovementToActorTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics::ClassParams = {
		&UMassCharacterMovementToActorTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCharacterMovementToActorTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassCharacterMovementToActorTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCharacterMovementToActorTranslator.OuterSingleton, Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCharacterMovementToActorTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassCharacterMovementToActorTranslator>()
	{
		return UMassCharacterMovementToActorTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCharacterMovementToActorTranslator);
	UMassCharacterMovementToActorTranslator::~UMassCharacterMovementToActorTranslator() {}

static_assert(std::is_polymorphic<FMassCharacterOrientationCopyToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCharacterOrientationCopyToMassTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag;
class UScriptStruct* FMassCharacterOrientationCopyToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassCharacterOrientationCopyToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassCharacterOrientationCopyToMassTag>()
{
	return FMassCharacterOrientationCopyToMassTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCharacterOrientationCopyToMassTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCharacterOrientationCopyToMassTag",
		sizeof(FMassCharacterOrientationCopyToMassTag),
		alignof(FMassCharacterOrientationCopyToMassTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag.InnerSingleton;
	}
	void UMassCharacterOrientationToMassTranslator::StaticRegisterNativesUMassCharacterOrientationToMassTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCharacterOrientationToMassTranslator);
	UClass* Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_NoRegister()
	{
		return UMassCharacterOrientationToMassTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassCharacterMovementTranslators.h" },
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCharacterOrientationToMassTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics::ClassParams = {
		&UMassCharacterOrientationToMassTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCharacterOrientationToMassTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassCharacterOrientationToMassTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCharacterOrientationToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCharacterOrientationToMassTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassCharacterOrientationToMassTranslator>()
	{
		return UMassCharacterOrientationToMassTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCharacterOrientationToMassTranslator);
	UMassCharacterOrientationToMassTranslator::~UMassCharacterOrientationToMassTranslator() {}

static_assert(std::is_polymorphic<FMassCharacterOrientationCopyToActorTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCharacterOrientationCopyToActorTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag;
class UScriptStruct* FMassCharacterOrientationCopyToActorTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassCharacterOrientationCopyToActorTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassCharacterOrientationCopyToActorTag>()
{
	return FMassCharacterOrientationCopyToActorTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCharacterOrientationCopyToActorTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCharacterOrientationCopyToActorTag",
		sizeof(FMassCharacterOrientationCopyToActorTag),
		alignof(FMassCharacterOrientationCopyToActorTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag.InnerSingleton;
	}
	void UMassCharacterOrientationToActorTranslator::StaticRegisterNativesUMassCharacterOrientationToActorTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCharacterOrientationToActorTranslator);
	UClass* Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_NoRegister()
	{
		return UMassCharacterOrientationToActorTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassCharacterMovementTranslators.h" },
		{ "ModuleRelativePath", "Public/Translators/MassCharacterMovementTranslators.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCharacterOrientationToActorTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics::ClassParams = {
		&UMassCharacterOrientationToActorTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCharacterOrientationToActorTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassCharacterOrientationToActorTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCharacterOrientationToActorTranslator.OuterSingleton, Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCharacterOrientationToActorTranslator.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassCharacterOrientationToActorTranslator>()
	{
		return UMassCharacterOrientationToActorTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCharacterOrientationToActorTranslator);
	UMassCharacterOrientationToActorTranslator::~UMassCharacterOrientationToActorTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_Statics::ScriptStructInfo[] = {
		{ FCharacterMovementComponentWrapperFragment::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics::NewStructOps, TEXT("CharacterMovementComponentWrapperFragment"), &Z_Registration_Info_UScriptStruct_CharacterMovementComponentWrapperFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementComponentWrapperFragment), 1818087183U) },
		{ FMassCharacterMovementCopyToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics::NewStructOps, TEXT("MassCharacterMovementCopyToMassTag"), &Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCharacterMovementCopyToMassTag), 2506185208U) },
		{ FMassCharacterMovementCopyToActorTag::StaticStruct, Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics::NewStructOps, TEXT("MassCharacterMovementCopyToActorTag"), &Z_Registration_Info_UScriptStruct_MassCharacterMovementCopyToActorTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCharacterMovementCopyToActorTag), 456152553U) },
		{ FMassCharacterOrientationCopyToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics::NewStructOps, TEXT("MassCharacterOrientationCopyToMassTag"), &Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCharacterOrientationCopyToMassTag), 1233133268U) },
		{ FMassCharacterOrientationCopyToActorTag::StaticStruct, Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics::NewStructOps, TEXT("MassCharacterOrientationCopyToActorTag"), &Z_Registration_Info_UScriptStruct_MassCharacterOrientationCopyToActorTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCharacterOrientationCopyToActorTag), 1638979329U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCharacterMovementToMassTranslator, UMassCharacterMovementToMassTranslator::StaticClass, TEXT("UMassCharacterMovementToMassTranslator"), &Z_Registration_Info_UClass_UMassCharacterMovementToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCharacterMovementToMassTranslator), 3402070570U) },
		{ Z_Construct_UClass_UMassCharacterMovementToActorTranslator, UMassCharacterMovementToActorTranslator::StaticClass, TEXT("UMassCharacterMovementToActorTranslator"), &Z_Registration_Info_UClass_UMassCharacterMovementToActorTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCharacterMovementToActorTranslator), 2013185101U) },
		{ Z_Construct_UClass_UMassCharacterOrientationToMassTranslator, UMassCharacterOrientationToMassTranslator::StaticClass, TEXT("UMassCharacterOrientationToMassTranslator"), &Z_Registration_Info_UClass_UMassCharacterOrientationToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCharacterOrientationToMassTranslator), 1792969163U) },
		{ Z_Construct_UClass_UMassCharacterOrientationToActorTranslator, UMassCharacterOrientationToActorTranslator::StaticClass, TEXT("UMassCharacterOrientationToActorTranslator"), &Z_Registration_Info_UClass_UMassCharacterOrientationToActorTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCharacterOrientationToActorTranslator), 357977110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_3871344803(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
