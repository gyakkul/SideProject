// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractiveToolBuilder::StaticRegisterNativesUInteractiveToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolBuilder);
	UClass* Z_Construct_UClass_UInteractiveToolBuilder_NoRegister()
	{
		return UInteractiveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveToolBuilder creates a new instance of an InteractiveTool (basically this is a Factory).\n * These are registered with the InteractiveToolManager, which calls BuildTool() if CanBuildTool() returns true.\n * In addition CanBuildTool() will be queried to (for example) enable/disable UI buttons, etc.\n * This is an abstract base class, you must subclass it in order to create your particular Tool instance\n */" },
		{ "IncludePath", "InteractiveToolBuilder.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolBuilder.h" },
		{ "ToolTip", "A UInteractiveToolBuilder creates a new instance of an InteractiveTool (basically this is a Factory).\nThese are registered with the InteractiveToolManager, which calls BuildTool() if CanBuildTool() returns true.\nIn addition CanBuildTool() will be queried to (for example) enable/disable UI buttons, etc.\nThis is an abstract base class, you must subclass it in order to create your particular Tool instance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolBuilder_Statics::ClassParams = {
		&UInteractiveToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UInteractiveToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolBuilder>()
	{
		return UInteractiveToolBuilder::StaticClass();
	}
	UInteractiveToolBuilder::UInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolBuilder);
	UInteractiveToolBuilder::~UInteractiveToolBuilder() {}
	void UInteractiveToolWithToolTargetsBuilder::StaticRegisterNativesUInteractiveToolWithToolTargetsBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolWithToolTargetsBuilder);
	UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_NoRegister()
	{
		return UInteractiveToolWithToolTargetsBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveToolWithToolTargetsBuilder creates a new instance of an InteractiveTool that uses tool targets.\n * See ToolTarget.h for more information on tool targets and their usage. This class defines the common\n * interface(s) for defining the tool target requirements of the tool it builds.\n * This is an abstract base class, you must subclass it in order to create your particular Tool instance.\n */" },
		{ "IncludePath", "InteractiveToolBuilder.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolBuilder.h" },
		{ "ToolTip", "A UInteractiveToolWithToolTargetsBuilder creates a new instance of an InteractiveTool that uses tool targets.\nSee ToolTarget.h for more information on tool targets and their usage. This class defines the common\ninterface(s) for defining the tool target requirements of the tool it builds.\nThis is an abstract base class, you must subclass it in order to create your particular Tool instance." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolWithToolTargetsBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics::ClassParams = {
		&UInteractiveToolWithToolTargetsBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.OuterSingleton, Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolWithToolTargetsBuilder>()
	{
		return UInteractiveToolWithToolTargetsBuilder::StaticClass();
	}
	UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolWithToolTargetsBuilder);
	UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolBuilder, UInteractiveToolBuilder::StaticClass, TEXT("UInteractiveToolBuilder"), &Z_Registration_Info_UClass_UInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolBuilder), 806600773U) },
		{ Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder, UInteractiveToolWithToolTargetsBuilder::StaticClass, TEXT("UInteractiveToolWithToolTargetsBuilder"), &Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolWithToolTargetsBuilder), 1120200890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_3237546673(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
