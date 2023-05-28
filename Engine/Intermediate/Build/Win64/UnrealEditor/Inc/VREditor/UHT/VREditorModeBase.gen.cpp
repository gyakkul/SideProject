// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/VREditorModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorModeBase() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorModeBase();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorModeBase_NoRegister();
// End Cross Module References
	void UVREditorModeBase::StaticRegisterNativesUVREditorModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorModeBase);
	UClass* Z_Construct_UClass_UVREditorModeBase_NoRegister()
	{
		return UVREditorModeBase::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWorldExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n */" },
		{ "IncludePath", "VREditorModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VREditorModeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorModeBase_Statics::ClassParams = {
		&UVREditorModeBase::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorModeBase()
	{
		if (!Z_Registration_Info_UClass_UVREditorModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorModeBase.OuterSingleton, Z_Construct_UClass_UVREditorModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorModeBase.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorModeBase>()
	{
		return UVREditorModeBase::StaticClass();
	}
	UVREditorModeBase::UVREditorModeBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorModeBase);
	UVREditorModeBase::~UVREditorModeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorModeBase, UVREditorModeBase::StaticClass, TEXT("UVREditorModeBase"), &Z_Registration_Info_UClass_UVREditorModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorModeBase), 516592707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_4220219159(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
