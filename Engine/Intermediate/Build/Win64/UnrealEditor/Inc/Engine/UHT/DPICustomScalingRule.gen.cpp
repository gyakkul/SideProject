// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DPICustomScalingRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPICustomScalingRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDPICustomScalingRule::StaticRegisterNativesUDPICustomScalingRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDPICustomScalingRule);
	UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister()
	{
		return UDPICustomScalingRule::StaticClass();
	}
	struct Z_Construct_UClass_UDPICustomScalingRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDPICustomScalingRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom Scaling Rules for Slate and UMG Widgets can be implemented by sub-classing from this class\n * and setting this rule to be used in your project settings.\n */" },
		{ "IncludePath", "Engine/DPICustomScalingRule.h" },
		{ "ModuleRelativePath", "Classes/Engine/DPICustomScalingRule.h" },
		{ "ToolTip", "Custom Scaling Rules for Slate and UMG Widgets can be implemented by sub-classing from this class\nand setting this rule to be used in your project settings." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDPICustomScalingRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDPICustomScalingRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDPICustomScalingRule_Statics::ClassParams = {
		&UDPICustomScalingRule::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDPICustomScalingRule()
	{
		if (!Z_Registration_Info_UClass_UDPICustomScalingRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDPICustomScalingRule.OuterSingleton, Z_Construct_UClass_UDPICustomScalingRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDPICustomScalingRule.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDPICustomScalingRule>()
	{
		return UDPICustomScalingRule::StaticClass();
	}
	UDPICustomScalingRule::UDPICustomScalingRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDPICustomScalingRule);
	UDPICustomScalingRule::~UDPICustomScalingRule() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDPICustomScalingRule, UDPICustomScalingRule::StaticClass, TEXT("UDPICustomScalingRule"), &Z_Registration_Info_UClass_UDPICustomScalingRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDPICustomScalingRule), 2219921772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_1246277450(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
