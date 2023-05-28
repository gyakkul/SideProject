// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_RigLogic.h"
#include "AnimNode_RigLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RigLogic() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	RIGLOGICDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_RigLogic();
	RIGLOGICDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_RigLogic_NoRegister();
	RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigLogic();
	UPackage* Z_Construct_UPackage__Script_RigLogicDeveloper();
// End Cross Module References
	void UAnimGraphNode_RigLogic::StaticRegisterNativesUAnimGraphNode_RigLogic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_RigLogic);
	UClass* Z_Construct_UClass_UAnimGraphNode_RigLogic_NoRegister()
	{
		return UAnimGraphNode_RigLogic::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_RigLogic.h" },
		{ "Keywords", "Rig Logic Animation Node" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RigLogic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RigLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_RigLogic, Node), Z_Construct_UScriptStruct_FAnimNode_RigLogic, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::NewProp_Node_MetaData)) }; // 1529471048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RigLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::ClassParams = {
		&UAnimGraphNode_RigLogic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_RigLogic()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_RigLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_RigLogic.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_RigLogic.OuterSingleton;
	}
	template<> RIGLOGICDEVELOPER_API UClass* StaticClass<UAnimGraphNode_RigLogic>()
	{
		return UAnimGraphNode_RigLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RigLogic);
	UAnimGraphNode_RigLogic::~UAnimGraphNode_RigLogic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_RigLogic, UAnimGraphNode_RigLogic::StaticClass, TEXT("UAnimGraphNode_RigLogic"), &Z_Registration_Info_UClass_UAnimGraphNode_RigLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_RigLogic), 4192535089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_2706704049(TEXT("/Script/RigLogicDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
