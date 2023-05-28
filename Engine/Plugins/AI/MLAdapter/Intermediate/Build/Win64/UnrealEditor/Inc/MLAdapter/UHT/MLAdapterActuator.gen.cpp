// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Actuators/MLAdapterActuator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterActuator() {}
// Cross Module References
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgentElement();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterActuator::StaticRegisterNativesUMLAdapterActuator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterActuator);
	UClass* Z_Construct_UClass_UMLAdapterActuator_NoRegister()
	{
		return UMLAdapterActuator::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterActuator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterActuator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterAgentElement,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows an agent to take an action in the game world. */" },
		{ "IncludePath", "Actuators/MLAdapterActuator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows an agent to take an action in the game world." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterActuator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterActuator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterActuator_Statics::ClassParams = {
		&UMLAdapterActuator::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterActuator()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterActuator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterActuator.OuterSingleton, Z_Construct_UClass_UMLAdapterActuator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterActuator.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterActuator>()
	{
		return UMLAdapterActuator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterActuator);
	UMLAdapterActuator::~UMLAdapterActuator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterActuator, UMLAdapterActuator::StaticClass, TEXT("UMLAdapterActuator"), &Z_Registration_Info_UClass_UMLAdapterActuator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterActuator), 2935632667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_1732043558(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
