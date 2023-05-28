// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/MassDebugVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassDebugVisualizer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_AMassDebugVisualizer();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_AMassDebugVisualizer_NoRegister();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassGameplayDebug();
// End Cross Module References
	void AMassDebugVisualizer::StaticRegisterNativesAMassDebugVisualizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassDebugVisualizer);
	UClass* Z_Construct_UClass_AMassDebugVisualizer_NoRegister()
	{
		return AMassDebugVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_AMassDebugVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugVisComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugVisComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassDebugVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassDebugVisualizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassDebugVisualizer.h" },
		{ "ModuleRelativePath", "Public/MassDebugVisualizer.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassDebugVisualizer_Statics::NewProp_DebugVisComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassDebugVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassDebugVisualizer_Statics::NewProp_DebugVisComponent = { "DebugVisComponent", nullptr, (EPropertyFlags)0x0024080800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassDebugVisualizer, DebugVisComponent), Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMassDebugVisualizer_Statics::NewProp_DebugVisComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassDebugVisualizer_Statics::NewProp_DebugVisComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassDebugVisualizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassDebugVisualizer_Statics::NewProp_DebugVisComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassDebugVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassDebugVisualizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassDebugVisualizer_Statics::ClassParams = {
		&AMassDebugVisualizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AMassDebugVisualizer_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AMassDebugVisualizer_Statics::PropPointers), 0),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMassDebugVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMassDebugVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMassDebugVisualizer()
	{
		if (!Z_Registration_Info_UClass_AMassDebugVisualizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassDebugVisualizer.OuterSingleton, Z_Construct_UClass_AMassDebugVisualizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassDebugVisualizer.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UClass* StaticClass<AMassDebugVisualizer>()
	{
		return AMassDebugVisualizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassDebugVisualizer);
	AMassDebugVisualizer::~AMassDebugVisualizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassDebugVisualizer, AMassDebugVisualizer::StaticClass, TEXT("AMassDebugVisualizer"), &Z_Registration_Info_UClass_AMassDebugVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassDebugVisualizer), 3663656377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_2767190367(TEXT("/Script/MassGameplayDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
