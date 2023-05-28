// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassStateTreeProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassStateTreeProcessors() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeActivationProcessor();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeActivationProcessor_NoRegister();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeFragmentDestructor();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeFragmentDestructor_NoRegister();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeProcessor();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeProcessor_NoRegister();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeActivatedTag();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassStateTreeFragmentDestructor::StaticRegisterNativesUMassStateTreeFragmentDestructor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStateTreeFragmentDestructor);
	UClass* Z_Construct_UClass_UMassStateTreeFragmentDestructor_NoRegister()
	{
		return UMassStateTreeFragmentDestructor::StaticClass();
	}
	struct Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignalSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SignalSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Processor to stop and uninitialize StateTrees on entities.\n */" },
		{ "IncludePath", "MassStateTreeProcessors.h" },
		{ "ModuleRelativePath", "Public/MassStateTreeProcessors.h" },
		{ "ToolTip", "Processor to stop and uninitialize StateTrees on entities." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::NewProp_SignalSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeProcessors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::NewProp_SignalSubsystem = { "SignalSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassStateTreeFragmentDestructor, SignalSubsystem), Z_Construct_UClass_UMassSignalSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::NewProp_SignalSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::NewProp_SignalSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::NewProp_SignalSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStateTreeFragmentDestructor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::ClassParams = {
		&UMassStateTreeFragmentDestructor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassStateTreeFragmentDestructor()
	{
		if (!Z_Registration_Info_UClass_UMassStateTreeFragmentDestructor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStateTreeFragmentDestructor.OuterSingleton, Z_Construct_UClass_UMassStateTreeFragmentDestructor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStateTreeFragmentDestructor.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassStateTreeFragmentDestructor>()
	{
		return UMassStateTreeFragmentDestructor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStateTreeFragmentDestructor);
	UMassStateTreeFragmentDestructor::~UMassStateTreeFragmentDestructor() {}

static_assert(std::is_polymorphic<FMassStateTreeActivatedTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassStateTreeActivatedTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag;
class UScriptStruct* FMassStateTreeActivatedTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStateTreeActivatedTag, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassStateTreeActivatedTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassStateTreeActivatedTag>()
{
	return FMassStateTreeActivatedTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Special tag to know if the state tree has been activated\n */" },
		{ "ModuleRelativePath", "Public/MassStateTreeProcessors.h" },
		{ "ToolTip", "Special tag to know if the state tree has been activated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStateTreeActivatedTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassStateTreeActivatedTag",
		sizeof(FMassStateTreeActivatedTag),
		alignof(FMassStateTreeActivatedTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeActivatedTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag.InnerSingleton, Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag.InnerSingleton;
	}
	void UMassStateTreeActivationProcessor::StaticRegisterNativesUMassStateTreeActivationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStateTreeActivationProcessor);
	UClass* Z_Construct_UClass_UMassStateTreeActivationProcessor_NoRegister()
	{
		return UMassStateTreeActivationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Processor to send the activation signal to the state tree which will execute the first tick */" },
		{ "IncludePath", "MassStateTreeProcessors.h" },
		{ "ModuleRelativePath", "Public/MassStateTreeProcessors.h" },
		{ "ToolTip", "Processor to send the activation signal to the state tree which will execute the first tick" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStateTreeActivationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics::ClassParams = {
		&UMassStateTreeActivationProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassStateTreeActivationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassStateTreeActivationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStateTreeActivationProcessor.OuterSingleton, Z_Construct_UClass_UMassStateTreeActivationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStateTreeActivationProcessor.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassStateTreeActivationProcessor>()
	{
		return UMassStateTreeActivationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStateTreeActivationProcessor);
	UMassStateTreeActivationProcessor::~UMassStateTreeActivationProcessor() {}
	void UMassStateTreeProcessor::StaticRegisterNativesUMassStateTreeProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStateTreeProcessor);
	UClass* Z_Construct_UClass_UMassStateTreeProcessor_NoRegister()
	{
		return UMassStateTreeProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassStateTreeProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStateTreeProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassSignalProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Processor for executing a StateTree\n */" },
		{ "IncludePath", "MassStateTreeProcessors.h" },
		{ "ModuleRelativePath", "Public/MassStateTreeProcessors.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Processor for executing a StateTree" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStateTreeProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStateTreeProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStateTreeProcessor_Statics::ClassParams = {
		&UMassStateTreeProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassStateTreeProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassStateTreeProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStateTreeProcessor.OuterSingleton, Z_Construct_UClass_UMassStateTreeProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStateTreeProcessor.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassStateTreeProcessor>()
	{
		return UMassStateTreeProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStateTreeProcessor);
	UMassStateTreeProcessor::~UMassStateTreeProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_Statics::ScriptStructInfo[] = {
		{ FMassStateTreeActivatedTag::StaticStruct, Z_Construct_UScriptStruct_FMassStateTreeActivatedTag_Statics::NewStructOps, TEXT("MassStateTreeActivatedTag"), &Z_Registration_Info_UScriptStruct_MassStateTreeActivatedTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStateTreeActivatedTag), 2580343747U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassStateTreeFragmentDestructor, UMassStateTreeFragmentDestructor::StaticClass, TEXT("UMassStateTreeFragmentDestructor"), &Z_Registration_Info_UClass_UMassStateTreeFragmentDestructor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStateTreeFragmentDestructor), 4230659003U) },
		{ Z_Construct_UClass_UMassStateTreeActivationProcessor, UMassStateTreeActivationProcessor::StaticClass, TEXT("UMassStateTreeActivationProcessor"), &Z_Registration_Info_UClass_UMassStateTreeActivationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStateTreeActivationProcessor), 1036663924U) },
		{ Z_Construct_UClass_UMassStateTreeProcessor, UMassStateTreeProcessor::StaticClass, TEXT("UMassStateTreeProcessor"), &Z_Registration_Info_UClass_UMassStateTreeProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStateTreeProcessor), 1390430443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_3538773605(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeProcessors_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
