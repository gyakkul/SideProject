// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Tools/DefaultEdMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultEdMode() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UNREALED_API UClass* Z_Construct_UClass_UEdModeDefault();
	UNREALED_API UClass* Z_Construct_UClass_UEdModeDefault_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEdModeDefault::StaticRegisterNativesUEdModeDefault()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdModeDefault);
	UClass* Z_Construct_UClass_UEdModeDefault_NoRegister()
	{
		return UEdModeDefault::StaticClass();
	}
	struct Z_Construct_UClass_UEdModeDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdModeDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdModeDefault_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/DefaultEdMode.h" },
		{ "ModuleRelativePath", "Public/Tools/DefaultEdMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdModeDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdModeDefault>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdModeDefault_Statics::ClassParams = {
		&UEdModeDefault::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEdModeDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdModeDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdModeDefault()
	{
		if (!Z_Registration_Info_UClass_UEdModeDefault.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdModeDefault.OuterSingleton, Z_Construct_UClass_UEdModeDefault_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdModeDefault.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEdModeDefault>()
	{
		return UEdModeDefault::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdModeDefault);
	UEdModeDefault::~UEdModeDefault() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_DefaultEdMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_DefaultEdMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdModeDefault, UEdModeDefault::StaticClass, TEXT("UEdModeDefault"), &Z_Registration_Info_UClass_UEdModeDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdModeDefault), 644650890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_DefaultEdMode_h_1012174084(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_DefaultEdMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_DefaultEdMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
