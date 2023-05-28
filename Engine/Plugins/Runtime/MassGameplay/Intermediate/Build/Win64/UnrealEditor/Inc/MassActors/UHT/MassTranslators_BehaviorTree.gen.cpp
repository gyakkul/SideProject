// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/Translators/MassTranslators_BehaviorTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTranslators_BehaviorTree() {}
// Cross Module References
	MASSACTORS_API UClass* Z_Construct_UClass_UMassTranslator_BehaviorTree();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassTranslator_BehaviorTree_NoRegister();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References

static_assert(std::is_polymorphic<FDataFragment_BehaviorTreeComponentWrapper>() == std::is_polymorphic<FObjectWrapperFragment>(), "USTRUCT FDataFragment_BehaviorTreeComponentWrapper cannot be polymorphic unless super FObjectWrapperFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper;
class UScriptStruct* FDataFragment_BehaviorTreeComponentWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("DataFragment_BehaviorTreeComponentWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FDataFragment_BehaviorTreeComponentWrapper>()
{
	return FDataFragment_BehaviorTreeComponentWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Translators/MassTranslators_BehaviorTree.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFragment_BehaviorTreeComponentWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FObjectWrapperFragment,
		&NewStructOps,
		"DataFragment_BehaviorTreeComponentWrapper",
		sizeof(FDataFragment_BehaviorTreeComponentWrapper),
		alignof(FDataFragment_BehaviorTreeComponentWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper.InnerSingleton, Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper.InnerSingleton;
	}
	void UMassTranslator_BehaviorTree::StaticRegisterNativesUMassTranslator_BehaviorTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTranslator_BehaviorTree);
	UClass* Z_Construct_UClass_UMassTranslator_BehaviorTree_NoRegister()
	{
		return UMassTranslator_BehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Translators/MassTranslators_BehaviorTree.h" },
		{ "ModuleRelativePath", "Public/Translators/MassTranslators_BehaviorTree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTranslator_BehaviorTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics::ClassParams = {
		&UMassTranslator_BehaviorTree::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTranslator_BehaviorTree()
	{
		if (!Z_Registration_Info_UClass_UMassTranslator_BehaviorTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTranslator_BehaviorTree.OuterSingleton, Z_Construct_UClass_UMassTranslator_BehaviorTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTranslator_BehaviorTree.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassTranslator_BehaviorTree>()
	{
		return UMassTranslator_BehaviorTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTranslator_BehaviorTree);
	UMassTranslator_BehaviorTree::~UMassTranslator_BehaviorTree() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_Statics::ScriptStructInfo[] = {
		{ FDataFragment_BehaviorTreeComponentWrapper::StaticStruct, Z_Construct_UScriptStruct_FDataFragment_BehaviorTreeComponentWrapper_Statics::NewStructOps, TEXT("DataFragment_BehaviorTreeComponentWrapper"), &Z_Registration_Info_UScriptStruct_DataFragment_BehaviorTreeComponentWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataFragment_BehaviorTreeComponentWrapper), 2342759242U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTranslator_BehaviorTree, UMassTranslator_BehaviorTree::StaticClass, TEXT("UMassTranslator_BehaviorTree"), &Z_Registration_Info_UClass_UMassTranslator_BehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTranslator_BehaviorTree), 1019147538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_411928295(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassTranslators_BehaviorTree_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
