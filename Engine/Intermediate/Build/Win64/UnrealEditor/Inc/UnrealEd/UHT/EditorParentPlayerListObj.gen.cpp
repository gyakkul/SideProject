// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Animation/EditorParentPlayerListObj.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorParentPlayerListObj() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride();
	UNREALED_API UClass* Z_Construct_UClass_UEditorParentPlayerListObj();
	UNREALED_API UClass* Z_Construct_UClass_UEditorParentPlayerListObj_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorParentPlayerListObj::StaticRegisterNativesUEditorParentPlayerListObj()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorParentPlayerListObj);
	UClass* Z_Construct_UClass_UEditorParentPlayerListObj_NoRegister()
	{
		return UEditorParentPlayerListObj::StaticClass();
	}
	struct Z_Construct_UClass_UEditorParentPlayerListObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Overrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorParentPlayerListObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorParentPlayerListObj_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/EditorParentPlayerListObj.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorParentPlayerListObj.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorParentPlayerListObj_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, METADATA_PARAMS(nullptr, 0) }; // 2930241301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorParentPlayerListObj_Statics::NewProp_Overrides_MetaData[] = {
		{ "Category", "AnimationGraphOverrides" },
		{ "Comment", "// List of possible overrides to display.\n" },
		{ "ModuleRelativePath", "Classes/Animation/EditorParentPlayerListObj.h" },
		{ "ToolTip", "List of possible overrides to display." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorParentPlayerListObj_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorParentPlayerListObj, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorParentPlayerListObj_Statics::NewProp_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorParentPlayerListObj_Statics::NewProp_Overrides_MetaData)) }; // 2930241301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorParentPlayerListObj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorParentPlayerListObj_Statics::NewProp_Overrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorParentPlayerListObj_Statics::NewProp_Overrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorParentPlayerListObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorParentPlayerListObj>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorParentPlayerListObj_Statics::ClassParams = {
		&UEditorParentPlayerListObj::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorParentPlayerListObj_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorParentPlayerListObj_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorParentPlayerListObj_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorParentPlayerListObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorParentPlayerListObj()
	{
		if (!Z_Registration_Info_UClass_UEditorParentPlayerListObj.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorParentPlayerListObj.OuterSingleton, Z_Construct_UClass_UEditorParentPlayerListObj_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorParentPlayerListObj.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorParentPlayerListObj>()
	{
		return UEditorParentPlayerListObj::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorParentPlayerListObj);
	UEditorParentPlayerListObj::~UEditorParentPlayerListObj() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorParentPlayerListObj, UEditorParentPlayerListObj::StaticClass, TEXT("UEditorParentPlayerListObj"), &Z_Registration_Info_UClass_UEditorParentPlayerListObj, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorParentPlayerListObj), 765604542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_365582543(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
