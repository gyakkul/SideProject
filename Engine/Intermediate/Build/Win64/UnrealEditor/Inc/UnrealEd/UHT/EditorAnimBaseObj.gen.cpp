// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Animation/EditorAnimBaseObj.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimBaseObj() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorAnimBaseObj::StaticRegisterNativesUEditorAnimBaseObj()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorAnimBaseObj);
	UClass* Z_Construct_UClass_UEditorAnimBaseObj_NoRegister()
	{
		return UEditorAnimBaseObj::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAnimBaseObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAnimBaseObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimBaseObj_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/EditorAnimBaseObj.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimBaseObj.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAnimBaseObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAnimBaseObj>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorAnimBaseObj_Statics::ClassParams = {
		&UEditorAnimBaseObj::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorAnimBaseObj_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimBaseObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAnimBaseObj()
	{
		if (!Z_Registration_Info_UClass_UEditorAnimBaseObj.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorAnimBaseObj.OuterSingleton, Z_Construct_UClass_UEditorAnimBaseObj_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorAnimBaseObj.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorAnimBaseObj>()
	{
		return UEditorAnimBaseObj::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAnimBaseObj);
	UEditorAnimBaseObj::~UEditorAnimBaseObj() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorAnimBaseObj, UEditorAnimBaseObj::StaticClass, TEXT("UEditorAnimBaseObj"), &Z_Registration_Info_UClass_UEditorAnimBaseObj, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorAnimBaseObj), 1554482012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_571657824(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
