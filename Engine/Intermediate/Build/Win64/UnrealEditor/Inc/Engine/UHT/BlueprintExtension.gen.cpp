// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintExtension() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlueprintExtension::StaticRegisterNativesUBlueprintExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintExtension);
	UClass* Z_Construct_UClass_UBlueprintExtension_NoRegister()
	{
		return UBlueprintExtension::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Per-instance extension object that can be added to UBlueprint::Extensions in order to augment built-in blueprint functionality\n * Ideally this would be an editor-only class, but such classes are not permitted within Engine modules (even inside WITH_EDITORONLY_DATA blocks)\n */" },
		{ "IncludePath", "Blueprint/BlueprintExtension.h" },
		{ "ModuleRelativePath", "Public/Blueprint/BlueprintExtension.h" },
		{ "ToolTip", "Per-instance extension object that can be added to UBlueprint::Extensions in order to augment built-in blueprint functionality\nIdeally this would be an editor-only class, but such classes are not permitted within Engine modules (even inside WITH_EDITORONLY_DATA blocks)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintExtension_Statics::ClassParams = {
		&UBlueprintExtension::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintExtension()
	{
		if (!Z_Registration_Info_UClass_UBlueprintExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintExtension.OuterSingleton, Z_Construct_UClass_UBlueprintExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintExtension.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlueprintExtension>()
	{
		return UBlueprintExtension::StaticClass();
	}
	UBlueprintExtension::UBlueprintExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintExtension);
	UBlueprintExtension::~UBlueprintExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintExtension, UBlueprintExtension::StaticClass, TEXT("UBlueprintExtension"), &Z_Registration_Info_UClass_UBlueprintExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintExtension), 2619000781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_736201729(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
