// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GameplayCueEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GameplayCueEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent();
	GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References
	void UK2Node_GameplayCueEvent::StaticRegisterNativesUK2Node_GameplayCueEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GameplayCueEvent);
	UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent_NoRegister()
	{
		return UK2Node_GameplayCueEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GameplayCueEvent.h" },
		{ "ModuleRelativePath", "Public/K2Node_GameplayCueEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GameplayCueEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::ClassParams = {
		&UK2Node_GameplayCueEvent::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GameplayCueEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GameplayCueEvent.OuterSingleton, Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GameplayCueEvent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIESEDITOR_API UClass* StaticClass<UK2Node_GameplayCueEvent>()
	{
		return UK2Node_GameplayCueEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GameplayCueEvent);
	UK2Node_GameplayCueEvent::~UK2Node_GameplayCueEvent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_GameplayCueEvent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GameplayCueEvent, UK2Node_GameplayCueEvent::StaticClass, TEXT("UK2Node_GameplayCueEvent"), &Z_Registration_Info_UClass_UK2Node_GameplayCueEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GameplayCueEvent), 3070137271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_781740413(TEXT("/Script/GameplayAbilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
