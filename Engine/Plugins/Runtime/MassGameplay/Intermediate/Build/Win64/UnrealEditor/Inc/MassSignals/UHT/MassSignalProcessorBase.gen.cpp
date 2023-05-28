// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSignals/Public/MassSignalProcessorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSignalProcessorBase() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSignals();
// End Cross Module References
	void UMassSignalProcessorBase::StaticRegisterNativesUMassSignalProcessorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSignalProcessorBase);
	UClass* Z_Construct_UClass_UMassSignalProcessorBase_NoRegister()
	{
		return UMassSignalProcessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassSignalProcessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSignalProcessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSignals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSignalProcessorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Processor for executing signals on each targeted entities\n * The derived classes only need to implement the method SignalEntities to actually received the raised signals for the entities they subscribed to \n */" },
		{ "IncludePath", "MassSignalProcessorBase.h" },
		{ "ModuleRelativePath", "Public/MassSignalProcessorBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Processor for executing signals on each targeted entities\nThe derived classes only need to implement the method SignalEntities to actually received the raised signals for the entities they subscribed to" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSignalProcessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSignalProcessorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSignalProcessorBase_Statics::ClassParams = {
		&UMassSignalProcessorBase::StaticClass,
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
		0x401030A7u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSignalProcessorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSignalProcessorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSignalProcessorBase()
	{
		if (!Z_Registration_Info_UClass_UMassSignalProcessorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSignalProcessorBase.OuterSingleton, Z_Construct_UClass_UMassSignalProcessorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSignalProcessorBase.OuterSingleton;
	}
	template<> MASSSIGNALS_API UClass* StaticClass<UMassSignalProcessorBase>()
	{
		return UMassSignalProcessorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSignalProcessorBase);
	UMassSignalProcessorBase::~UMassSignalProcessorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSignalProcessorBase, UMassSignalProcessorBase::StaticClass, TEXT("UMassSignalProcessorBase"), &Z_Registration_Info_UClass_UMassSignalProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSignalProcessorBase), 267883477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_4054247354(TEXT("/Script/MassSignals"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
