// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_ControlRig.h"
#include "AnimNode_ControlRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ControlRig() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRig();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_ControlRig();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_ControlRig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigDeveloper();
// End Cross Module References
	void UAnimGraphNode_ControlRig::StaticRegisterNativesUAnimGraphNode_ControlRig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_ControlRig);
	UClass* Z_Construct_UClass_UAnimGraphNode_ControlRig_NoRegister()
	{
		return UAnimGraphNode_ControlRig::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_CustomProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_ControlRig.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ControlRig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_ControlRig, Node), Z_Construct_UScriptStruct_FAnimNode_ControlRig, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::NewProp_Node_MetaData)) }; // 3330671004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ControlRig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::ClassParams = {
		&UAnimGraphNode_ControlRig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ControlRig()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_ControlRig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_ControlRig.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_ControlRig.OuterSingleton;
	}
	template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<UAnimGraphNode_ControlRig>()
	{
		return UAnimGraphNode_ControlRig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ControlRig);
	UAnimGraphNode_ControlRig::~UAnimGraphNode_ControlRig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_ControlRig, UAnimGraphNode_ControlRig::StaticClass, TEXT("UAnimGraphNode_ControlRig"), &Z_Registration_Info_UClass_UAnimGraphNode_ControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_ControlRig), 852713164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_477739732(TEXT("/Script/ControlRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
