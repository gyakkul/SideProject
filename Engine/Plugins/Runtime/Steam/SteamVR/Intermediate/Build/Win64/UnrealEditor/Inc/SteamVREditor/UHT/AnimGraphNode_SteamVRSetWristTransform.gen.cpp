// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_SteamVRSetWristTransform.h"
#include "AnimNode_SteamVRSetWristTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SteamVRSetWristTransform() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	STEAMVREDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform();
	STEAMVREDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_NoRegister();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform();
	UPackage* Z_Construct_UPackage__Script_SteamVREditor();
// End Cross Module References
	void UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform::StaticRegisterNativesUDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform);
	UClass* Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_NoRegister()
	{
		return UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics
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
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "SteamVR plugin is deprecated; please use the OpenXR plugin." },
		{ "IncludePath", "AnimGraphNode_SteamVRSetWristTransform.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SteamVRSetWristTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SteamVRSetWristTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform, Node), Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::NewProp_Node_MetaData)) }; // 3721113466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::ClassParams = {
		&UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::PropPointers),
		0,
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform.OuterSingleton;
	}
	template<> STEAMVREDITOR_API UClass* StaticClass<UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform>()
	{
		return UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform);
	UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform::~UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_AnimGraphNode_SteamVRSetWristTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_AnimGraphNode_SteamVRSetWristTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform, UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform::StaticClass, TEXT("UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform"), &Z_Registration_Info_UClass_UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UAnimGraphNode_SteamVRSetWristTransform), 1724614783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_AnimGraphNode_SteamVRSetWristTransform_h_771591093(TEXT("/Script/SteamVREditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_AnimGraphNode_SteamVRSetWristTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_AnimGraphNode_SteamVRSetWristTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
