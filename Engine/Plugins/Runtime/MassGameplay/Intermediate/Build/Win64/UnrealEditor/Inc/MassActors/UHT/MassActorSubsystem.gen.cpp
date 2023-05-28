// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/MassActorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassActorSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSubsystem();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSubsystem_NoRegister();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassActorFragment();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References

static_assert(std::is_polymorphic<FMassActorFragment>() == std::is_polymorphic<FObjectWrapperFragment>(), "USTRUCT FMassActorFragment cannot be polymorphic unless super FObjectWrapperFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassActorFragment;
class UScriptStruct* FMassActorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassActorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassActorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassActorFragment, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassActorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassActorFragment.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassActorFragment>()
{
	return FMassActorFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassActorFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassActorFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Fragment to save the actor pointer of a mass entity if it exist\n */" },
		{ "ModuleRelativePath", "Public/MassActorSubsystem.h" },
		{ "ToolTip", "Fragment to save the actor pointer of a mass entity if it exist" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassActorFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassActorFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassActorFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FObjectWrapperFragment,
		&NewStructOps,
		"MassActorFragment",
		sizeof(FMassActorFragment),
		alignof(FMassActorFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassActorFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassActorFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassActorFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassActorFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassActorFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassActorFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassActorFragment.InnerSingleton;
	}
	void UMassActorSubsystem::StaticRegisterNativesUMassActorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassActorSubsystem);
	UClass* Z_Construct_UClass_UMassActorSubsystem_NoRegister()
	{
		return UMassActorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassActorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassActorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassActorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem managing communication between Actors and Mass\n */" },
		{ "IncludePath", "MassActorSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassActorSubsystem.h" },
		{ "ToolTip", "A subsystem managing communication between Actors and Mass" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassActorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassActorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassActorSubsystem_Statics::ClassParams = {
		&UMassActorSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassActorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassActorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassActorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassActorSubsystem.OuterSingleton, Z_Construct_UClass_UMassActorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassActorSubsystem.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassActorSubsystem>()
	{
		return UMassActorSubsystem::StaticClass();
	}
	UMassActorSubsystem::UMassActorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassActorSubsystem);
	UMassActorSubsystem::~UMassActorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMassActorFragment::StaticStruct, Z_Construct_UScriptStruct_FMassActorFragment_Statics::NewStructOps, TEXT("MassActorFragment"), &Z_Registration_Info_UScriptStruct_MassActorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassActorFragment), 1698987622U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassActorSubsystem, UMassActorSubsystem::StaticClass, TEXT("UMassActorSubsystem"), &Z_Registration_Info_UClass_UMassActorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassActorSubsystem), 505855808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_2588952045(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
