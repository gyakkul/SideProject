// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/MassDebuggerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassDebuggerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_AMassDebugVisualizer_NoRegister();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebuggerSubsystem();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebuggerSubsystem_NoRegister();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassGameplayDebug();
// End Cross Module References
	void UMassDebuggerSubsystem::StaticRegisterNativesUMassDebuggerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassDebuggerSubsystem);
	UClass* Z_Construct_UClass_UMassDebuggerSubsystem_NoRegister()
	{
		return UMassDebuggerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassDebuggerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugVisualizer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugVisualizer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassDebuggerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebuggerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassDebuggerSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassDebuggerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_VisualizationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassDebuggerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_VisualizationComponent = { "VisualizationComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassDebuggerSubsystem, VisualizationComponent), Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_VisualizationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_VisualizationComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_DebugVisualizer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassDebuggerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_DebugVisualizer = { "DebugVisualizer", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassDebuggerSubsystem, DebugVisualizer), Z_Construct_UClass_AMassDebugVisualizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_DebugVisualizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_DebugVisualizer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassDebuggerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_VisualizationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebuggerSubsystem_Statics::NewProp_DebugVisualizer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassDebuggerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassDebuggerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassDebuggerSubsystem_Statics::ClassParams = {
		&UMassDebuggerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassDebuggerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebuggerSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassDebuggerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebuggerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassDebuggerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassDebuggerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassDebuggerSubsystem.OuterSingleton, Z_Construct_UClass_UMassDebuggerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassDebuggerSubsystem.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UClass* StaticClass<UMassDebuggerSubsystem>()
	{
		return UMassDebuggerSubsystem::StaticClass();
	}
	UMassDebuggerSubsystem::UMassDebuggerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassDebuggerSubsystem);
	UMassDebuggerSubsystem::~UMassDebuggerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassDebuggerSubsystem, UMassDebuggerSubsystem::StaticClass, TEXT("UMassDebuggerSubsystem"), &Z_Registration_Info_UClass_UMassDebuggerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassDebuggerSubsystem), 1056539889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_295620553(TEXT("/Script/MassGameplayDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
