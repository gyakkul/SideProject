// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryNode::StaticRegisterNativesUEnvQueryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryNode);
	UClass* Z_Construct_UClass_UEnvQueryNode_NoRegister()
	{
		return UEnvQueryNode::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VerNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryNode.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum_MetaData[] = {
		{ "Comment", "/** Versioning for updating deprecated properties */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryNode.h" },
		{ "ToolTip", "Versioning for updating deprecated properties" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum = { "VerNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryNode, VerNum), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryNode_Statics::ClassParams = {
		&UEnvQueryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryNode()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryNode.OuterSingleton, Z_Construct_UClass_UEnvQueryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryNode.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryNode>()
	{
		return UEnvQueryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryNode);
	UEnvQueryNode::~UEnvQueryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryNode, UEnvQueryNode::StaticClass, TEXT("UEnvQueryNode"), &Z_Registration_Info_UClass_UEnvQueryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryNode), 1428581180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_440563627(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
