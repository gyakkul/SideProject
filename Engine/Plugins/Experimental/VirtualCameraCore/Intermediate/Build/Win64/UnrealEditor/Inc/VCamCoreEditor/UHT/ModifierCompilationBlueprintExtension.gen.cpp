// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Compilation/ModifierCompilationBlueprintExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierCompilationBlueprintExtension() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension();
	UPackage* Z_Construct_UPackage__Script_VCamCoreEditor();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UModifierCompilationBlueprintExtension();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UModifierCompilationBlueprintExtension_NoRegister();
// End Cross Module References
	void UModifierCompilationBlueprintExtension::StaticRegisterNativesUModifierCompilationBlueprintExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierCompilationBlueprintExtension);
	UClass* Z_Construct_UClass_UModifierCompilationBlueprintExtension_NoRegister()
	{
		return UModifierCompilationBlueprintExtension::StaticClass();
	}
	struct Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Validates modifier Blueprint when compiled.\n * \n * Actions:\n * - Add a warning to every input action node that is not found in the MappingContext in the class defaults.\n */" },
		{ "IncludePath", "Compilation/ModifierCompilationBlueprintExtension.h" },
		{ "ModuleRelativePath", "Private/Compilation/ModifierCompilationBlueprintExtension.h" },
		{ "ToolTip", "Validates modifier Blueprint when compiled.\n\nActions:\n- Add a warning to every input action node that is not found in the MappingContext in the class defaults." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierCompilationBlueprintExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics::ClassParams = {
		&UModifierCompilationBlueprintExtension::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierCompilationBlueprintExtension()
	{
		if (!Z_Registration_Info_UClass_UModifierCompilationBlueprintExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierCompilationBlueprintExtension.OuterSingleton, Z_Construct_UClass_UModifierCompilationBlueprintExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModifierCompilationBlueprintExtension.OuterSingleton;
	}
	template<> VCAMCOREEDITOR_API UClass* StaticClass<UModifierCompilationBlueprintExtension>()
	{
		return UModifierCompilationBlueprintExtension::StaticClass();
	}
	UModifierCompilationBlueprintExtension::UModifierCompilationBlueprintExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierCompilationBlueprintExtension);
	UModifierCompilationBlueprintExtension::~UModifierCompilationBlueprintExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Compilation_ModifierCompilationBlueprintExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Compilation_ModifierCompilationBlueprintExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModifierCompilationBlueprintExtension, UModifierCompilationBlueprintExtension::StaticClass, TEXT("UModifierCompilationBlueprintExtension"), &Z_Registration_Info_UClass_UModifierCompilationBlueprintExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierCompilationBlueprintExtension), 590361430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Compilation_ModifierCompilationBlueprintExtension_h_1187723211(TEXT("/Script/VCamCoreEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Compilation_ModifierCompilationBlueprintExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Compilation_ModifierCompilationBlueprintExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
