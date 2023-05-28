// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/IEditorUtilityExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEditorUtilityExtension() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityExtension();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityExtension_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityExtension::StaticRegisterNativesUEditorUtilityExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityExtension);
	UClass* Z_Construct_UClass_UEditorUtilityExtension_NoRegister()
	{
		return UEditorUtilityExtension::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/IEditorUtilityExtension.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEditorUtilityExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityExtension_Statics::ClassParams = {
		&UEditorUtilityExtension::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityExtension()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityExtension.OuterSingleton, Z_Construct_UClass_UEditorUtilityExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityExtension.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityExtension>()
	{
		return UEditorUtilityExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityExtension);
	UEditorUtilityExtension::~UEditorUtilityExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_IEditorUtilityExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_IEditorUtilityExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityExtension, UEditorUtilityExtension::StaticClass, TEXT("UEditorUtilityExtension"), &Z_Registration_Info_UClass_UEditorUtilityExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityExtension), 2471005674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_IEditorUtilityExtension_h_4027502798(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_IEditorUtilityExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_IEditorUtilityExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
