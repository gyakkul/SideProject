// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterPlayerInput.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterPlayerInput() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPlayerInput();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPlayerInput_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterPlayerInput::StaticRegisterNativesUDisplayClusterPlayerInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterPlayerInput);
	UClass* Z_Construct_UClass_UDisplayClusterPlayerInput_NoRegister()
	{
		return UDisplayClusterPlayerInput::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterPlayerInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterPlayerInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedPlayerInput,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPlayerInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An object within PlayerController that processes player input.\n *\n * This one is nDisplay specific implementation. It's responsible for replication\n * of UE native input within a cluster to support simulation determinism. Various\n * input sync policies might be implemented here.\n */" },
		{ "IncludePath", "DisplayClusterPlayerInput.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterPlayerInput.h" },
		{ "ToolTip", "An object within PlayerController that processes player input.\n\nThis one is nDisplay specific implementation. It's responsible for replication\nof UE native input within a cluster to support simulation determinism. Various\ninput sync policies might be implemented here." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterPlayerInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterPlayerInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterPlayerInput_Statics::ClassParams = {
		&UDisplayClusterPlayerInput::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPlayerInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPlayerInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterPlayerInput()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterPlayerInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterPlayerInput.OuterSingleton, Z_Construct_UClass_UDisplayClusterPlayerInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterPlayerInput.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterPlayerInput>()
	{
		return UDisplayClusterPlayerInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterPlayerInput);
	UDisplayClusterPlayerInput::~UDisplayClusterPlayerInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterPlayerInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterPlayerInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterPlayerInput, UDisplayClusterPlayerInput::StaticClass, TEXT("UDisplayClusterPlayerInput"), &Z_Registration_Info_UClass_UDisplayClusterPlayerInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterPlayerInput), 200893166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterPlayerInput_h_659766509(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterPlayerInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterPlayerInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
