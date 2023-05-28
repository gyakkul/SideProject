// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveGizmoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmoBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractiveGizmoBuilder::StaticRegisterNativesUInteractiveGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveGizmoBuilder);
	UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister()
	{
		return UInteractiveGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveGizmoBuilder creates a new instance of an InteractiveGizmo (basically this is a Factory).\n * These are registered with the InteractiveGizmoManager, which calls BuildGizmo().\n * This is an abstract base class, you must subclass it in order to create your particular Gizmo instance\n */" },
		{ "IncludePath", "InteractiveGizmoBuilder.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoBuilder.h" },
		{ "ToolTip", "A UInteractiveGizmoBuilder creates a new instance of an InteractiveGizmo (basically this is a Factory).\nThese are registered with the InteractiveGizmoManager, which calls BuildGizmo().\nThis is an abstract base class, you must subclass it in order to create your particular Gizmo instance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::ClassParams = {
		&UInteractiveGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UInteractiveGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveGizmoBuilder.OuterSingleton, Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveGizmoBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmoBuilder>()
	{
		return UInteractiveGizmoBuilder::StaticClass();
	}
	UInteractiveGizmoBuilder::UInteractiveGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmoBuilder);
	UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveGizmoBuilder, UInteractiveGizmoBuilder::StaticClass, TEXT("UInteractiveGizmoBuilder"), &Z_Registration_Info_UClass_UInteractiveGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveGizmoBuilder), 2749854195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_1283767312(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
