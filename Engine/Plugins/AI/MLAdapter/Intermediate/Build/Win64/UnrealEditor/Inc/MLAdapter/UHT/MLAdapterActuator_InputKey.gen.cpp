// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Actuators/MLAdapterActuator_InputKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterActuator_InputKey() {}
// Cross Module References
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_InputKey();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_InputKey_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterActuator_InputKey::StaticRegisterNativesUMLAdapterActuator_InputKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterActuator_InputKey);
	UClass* Z_Construct_UClass_UMLAdapterActuator_InputKey_NoRegister()
	{
		return UMLAdapterActuator_InputKey::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterActuator,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows an agent to directly inject key presses into its avatar's input component. */" },
		{ "IncludePath", "Actuators/MLAdapterActuator_InputKey.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_InputKey.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows an agent to directly inject key presses into its avatar's input component." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterActuator_InputKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics::ClassParams = {
		&UMLAdapterActuator_InputKey::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterActuator_InputKey()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterActuator_InputKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterActuator_InputKey.OuterSingleton, Z_Construct_UClass_UMLAdapterActuator_InputKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterActuator_InputKey.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterActuator_InputKey>()
	{
		return UMLAdapterActuator_InputKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterActuator_InputKey);
	UMLAdapterActuator_InputKey::~UMLAdapterActuator_InputKey() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_InputKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_InputKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterActuator_InputKey, UMLAdapterActuator_InputKey::StaticClass, TEXT("UMLAdapterActuator_InputKey"), &Z_Registration_Info_UClass_UMLAdapterActuator_InputKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterActuator_InputKey), 4224762614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_InputKey_h_3173724575(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_InputKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_InputKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
