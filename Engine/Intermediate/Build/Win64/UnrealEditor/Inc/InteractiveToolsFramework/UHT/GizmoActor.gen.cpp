// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoActor() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void AGizmoActor::StaticRegisterNativesAGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGizmoActor);
	UClass* Z_Construct_UClass_AGizmoActor_NoRegister()
	{
		return AGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_AGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInternalToolFrameworkActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AGizmoActor is a base class for Actors that would be created to represent Gizmos in the scene.\n * Currently this does not involve any special functionality, but a set of static functions\n * are provided to create default Components commonly used in Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoActor.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "AGizmoActor is a base class for Actors that would be created to represent Gizmos in the scene.\nCurrently this does not involve any special functionality, but a set of static functions\nare provided to create default Components commonly used in Gizmos." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGizmoActor_Statics::ClassParams = {
		&AGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x019002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGizmoActor()
	{
		if (!Z_Registration_Info_UClass_AGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGizmoActor.OuterSingleton, Z_Construct_UClass_AGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGizmoActor.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<AGizmoActor>()
	{
		return AGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGizmoActor);
	AGizmoActor::~AGizmoActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGizmoActor, AGizmoActor::StaticClass, TEXT("AGizmoActor"), &Z_Registration_Info_UClass_AGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGizmoActor), 1210310839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_3312675537(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
