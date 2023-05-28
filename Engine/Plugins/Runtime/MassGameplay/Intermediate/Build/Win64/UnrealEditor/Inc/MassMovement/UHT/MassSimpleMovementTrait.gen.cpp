// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/Example/MassSimpleMovementTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSimpleMovementTrait() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassSimpleMovementProcessor();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassSimpleMovementProcessor_NoRegister();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassSimpleMovementTrait();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassSimpleMovementTrait_NoRegister();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimpleMovementTag();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassMovement();
// End Cross Module References

static_assert(std::is_polymorphic<FMassSimpleMovementTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassSimpleMovementTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimpleMovementTag;
class UScriptStruct* FMassSimpleMovementTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimpleMovementTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimpleMovementTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimpleMovementTag, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassSimpleMovementTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimpleMovementTag.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassSimpleMovementTag>()
{
	return FMassSimpleMovementTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Example/MassSimpleMovementTrait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimpleMovementTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassSimpleMovementTag",
		sizeof(FMassSimpleMovementTag),
		alignof(FMassSimpleMovementTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimpleMovementTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimpleMovementTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimpleMovementTag.InnerSingleton, Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimpleMovementTag.InnerSingleton;
	}
	void UMassSimpleMovementTrait::StaticRegisterNativesUMassSimpleMovementTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSimpleMovementTrait);
	UClass* Z_Construct_UClass_UMassSimpleMovementTrait_NoRegister()
	{
		return UMassSimpleMovementTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassSimpleMovementTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSimpleMovementTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimpleMovementTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Simple Movement" },
		{ "IncludePath", "Example/MassSimpleMovementTrait.h" },
		{ "ModuleRelativePath", "Public/Example/MassSimpleMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSimpleMovementTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSimpleMovementTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSimpleMovementTrait_Statics::ClassParams = {
		&UMassSimpleMovementTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSimpleMovementTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimpleMovementTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSimpleMovementTrait()
	{
		if (!Z_Registration_Info_UClass_UMassSimpleMovementTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSimpleMovementTrait.OuterSingleton, Z_Construct_UClass_UMassSimpleMovementTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSimpleMovementTrait.OuterSingleton;
	}
	template<> MASSMOVEMENT_API UClass* StaticClass<UMassSimpleMovementTrait>()
	{
		return UMassSimpleMovementTrait::StaticClass();
	}
	UMassSimpleMovementTrait::UMassSimpleMovementTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSimpleMovementTrait);
	UMassSimpleMovementTrait::~UMassSimpleMovementTrait() {}
	void UMassSimpleMovementProcessor::StaticRegisterNativesUMassSimpleMovementProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSimpleMovementProcessor);
	UClass* Z_Construct_UClass_UMassSimpleMovementProcessor_NoRegister()
	{
		return UMassSimpleMovementProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassSimpleMovementProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSimpleMovementProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimpleMovementProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Example/MassSimpleMovementTrait.h" },
		{ "ModuleRelativePath", "Public/Example/MassSimpleMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSimpleMovementProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSimpleMovementProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSimpleMovementProcessor_Statics::ClassParams = {
		&UMassSimpleMovementProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassSimpleMovementProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimpleMovementProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSimpleMovementProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassSimpleMovementProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSimpleMovementProcessor.OuterSingleton, Z_Construct_UClass_UMassSimpleMovementProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSimpleMovementProcessor.OuterSingleton;
	}
	template<> MASSMOVEMENT_API UClass* StaticClass<UMassSimpleMovementProcessor>()
	{
		return UMassSimpleMovementProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSimpleMovementProcessor);
	UMassSimpleMovementProcessor::~UMassSimpleMovementProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_Statics::ScriptStructInfo[] = {
		{ FMassSimpleMovementTag::StaticStruct, Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics::NewStructOps, TEXT("MassSimpleMovementTag"), &Z_Registration_Info_UScriptStruct_MassSimpleMovementTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimpleMovementTag), 1670455287U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSimpleMovementTrait, UMassSimpleMovementTrait::StaticClass, TEXT("UMassSimpleMovementTrait"), &Z_Registration_Info_UClass_UMassSimpleMovementTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSimpleMovementTrait), 357358508U) },
		{ Z_Construct_UClass_UMassSimpleMovementProcessor, UMassSimpleMovementProcessor::StaticClass, TEXT("UMassSimpleMovementProcessor"), &Z_Registration_Info_UClass_UMassSimpleMovementProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSimpleMovementProcessor), 3497020506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_953956261(TEXT("/Script/MassMovement"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
