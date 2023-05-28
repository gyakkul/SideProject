// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Animation/EditorAnimCurveBoneLinks.h"
#include "../../Source/Runtime/Engine/Classes/Animation/SmartName.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimCurveBoneLinks() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorAnimCurveBoneLinks::StaticRegisterNativesUEditorAnimCurveBoneLinks()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorAnimCurveBoneLinks);
	UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks_NoRegister()
	{
		return UEditorAnimCurveBoneLinks::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/EditorAnimCurveBoneLinks.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "CurveName" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorAnimCurveBoneLinks, CurveName), Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName_MetaData)) }; // 1281775015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_Inner = { "ConnectedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_MetaData[] = {
		{ "Category", "Bones" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones = { "ConnectedBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorAnimCurveBoneLinks, ConnectedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Max (Lowest) LOD to evaluate to curve. \n\x09 *  Since LOD goes from 0 to high number, we call it Max. \n\x09 *  For example, if you have 3 LODs (0, 1, 2), and if you want this to work until LOD 1, type 1.  \n\x09 *  Then the curve will be evaluated until LOD1, but not for LOD 2\n\x09 *  Default value is 255 */" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
		{ "ToolTip", "Max (Lowest) LOD to evaluate to curve.\nSince LOD goes from 0 to high number, we call it Max.\nFor example, if you have 3 LODs (0, 1, 2), and if you want this to work until LOD 1, type 1.\nThen the curve will be evaluated until LOD1, but not for LOD 2\nDefault value is 255" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorAnimCurveBoneLinks, MaxLOD), nullptr, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAnimCurveBoneLinks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::ClassParams = {
		&UEditorAnimCurveBoneLinks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks()
	{
		if (!Z_Registration_Info_UClass_UEditorAnimCurveBoneLinks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorAnimCurveBoneLinks.OuterSingleton, Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorAnimCurveBoneLinks.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorAnimCurveBoneLinks>()
	{
		return UEditorAnimCurveBoneLinks::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAnimCurveBoneLinks);
	UEditorAnimCurveBoneLinks::~UEditorAnimCurveBoneLinks() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCurveBoneLinks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCurveBoneLinks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorAnimCurveBoneLinks, UEditorAnimCurveBoneLinks::StaticClass, TEXT("UEditorAnimCurveBoneLinks"), &Z_Registration_Info_UClass_UEditorAnimCurveBoneLinks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorAnimCurveBoneLinks), 2520575685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCurveBoneLinks_h_387128357(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCurveBoneLinks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCurveBoneLinks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
