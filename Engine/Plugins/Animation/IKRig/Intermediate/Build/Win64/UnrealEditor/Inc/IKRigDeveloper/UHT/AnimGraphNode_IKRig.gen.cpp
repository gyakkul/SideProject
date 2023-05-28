// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_IKRig.h"
#include "AnimNodes/AnimNode_IKRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_IKRig() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_IKRig();
	IKRIGDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_IKRig();
	IKRIGDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_IKRig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRigDeveloper();
// End Cross Module References
	void UAnimGraphNode_IKRig::StaticRegisterNativesUAnimGraphNode_IKRig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_IKRig);
	UClass* Z_Construct_UClass_UAnimGraphNode_IKRig_NoRegister()
	{
		return UAnimGraphNode_IKRig::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_IKRig_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_CustomProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Editor node for IKRig \n" },
		{ "IncludePath", "AnimGraphNode_IKRig.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_IKRig.h" },
		{ "ToolTip", "Editor node for IKRig" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_IKRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_IKRig, Node), Z_Construct_UScriptStruct_FAnimNode_IKRig, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::NewProp_Node_MetaData)) }; // 733065193
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_IKRig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::ClassParams = {
		&UAnimGraphNode_IKRig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_IKRig()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_IKRig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_IKRig.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_IKRig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_IKRig.OuterSingleton;
	}
	template<> IKRIGDEVELOPER_API UClass* StaticClass<UAnimGraphNode_IKRig>()
	{
		return UAnimGraphNode_IKRig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_IKRig);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_IKRig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_IKRig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_IKRig, UAnimGraphNode_IKRig::StaticClass, TEXT("UAnimGraphNode_IKRig"), &Z_Registration_Info_UClass_UAnimGraphNode_IKRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_IKRig), 862543625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_IKRig_h_1544027173(TEXT("/Script/IKRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_IKRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_IKRig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
