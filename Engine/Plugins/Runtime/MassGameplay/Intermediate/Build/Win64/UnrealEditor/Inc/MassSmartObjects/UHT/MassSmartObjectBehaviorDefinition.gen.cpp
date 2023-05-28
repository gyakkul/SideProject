// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectBehaviorDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectBehaviorDefinition() {}
// Cross Module References
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectMassBehaviorDefinition();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectMassBehaviorDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
// End Cross Module References
	void USmartObjectMassBehaviorDefinition::StaticRegisterNativesUSmartObjectMassBehaviorDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectMassBehaviorDefinition);
	UClass* Z_Construct_UClass_USmartObjectMassBehaviorDefinition_NoRegister()
	{
		return USmartObjectMassBehaviorDefinition::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectBehaviorDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for MassAIBehavior definitions. This is the type of definitions that MassEntity queries will look for.\n * Definition subclass can parameterized its associated behavior by overriding method Activate.\n */" },
		{ "IncludePath", "MassSmartObjectBehaviorDefinition.h" },
		{ "ModuleRelativePath", "Public/MassSmartObjectBehaviorDefinition.h" },
		{ "ToolTip", "Base class for MassAIBehavior definitions. This is the type of definitions that MassEntity queries will look for.\nDefinition subclass can parameterized its associated behavior by overriding method Activate." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::NewProp_UseTime_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Indicates the amount of time the Massentity\n\x09 * will execute its behavior when reaching the smart object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectBehaviorDefinition.h" },
		{ "ToolTip", "Indicates the amount of time the Massentity\nwill execute its behavior when reaching the smart object." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::NewProp_UseTime = { "UseTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectMassBehaviorDefinition, UseTime), METADATA_PARAMS(Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::NewProp_UseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::NewProp_UseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::NewProp_UseTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectMassBehaviorDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::ClassParams = {
		&USmartObjectMassBehaviorDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectMassBehaviorDefinition()
	{
		if (!Z_Registration_Info_UClass_USmartObjectMassBehaviorDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectMassBehaviorDefinition.OuterSingleton, Z_Construct_UClass_USmartObjectMassBehaviorDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectMassBehaviorDefinition.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UClass* StaticClass<USmartObjectMassBehaviorDefinition>()
	{
		return USmartObjectMassBehaviorDefinition::StaticClass();
	}
	USmartObjectMassBehaviorDefinition::USmartObjectMassBehaviorDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectMassBehaviorDefinition);
	USmartObjectMassBehaviorDefinition::~USmartObjectMassBehaviorDefinition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectMassBehaviorDefinition, USmartObjectMassBehaviorDefinition::StaticClass, TEXT("USmartObjectMassBehaviorDefinition"), &Z_Registration_Info_UClass_USmartObjectMassBehaviorDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectMassBehaviorDefinition), 2654631006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_2376759177(TEXT("/Script/MassSmartObjects"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectBehaviorDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
