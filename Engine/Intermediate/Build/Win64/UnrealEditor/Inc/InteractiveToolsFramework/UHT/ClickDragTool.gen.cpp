// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/ClickDragTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickDragTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UClickDragToolBuilder::StaticRegisterNativesUClickDragToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClickDragToolBuilder);
	UClass* Z_Construct_UClass_UClickDragToolBuilder_NoRegister()
	{
		return UClickDragToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UClickDragToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClickDragToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UClickDragTool\n */" },
		{ "IncludePath", "BaseTools/ClickDragTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ClickDragTool.h" },
		{ "ToolTip", "Builder for UClickDragTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClickDragToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClickDragToolBuilder_Statics::ClassParams = {
		&UClickDragToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClickDragToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton, Z_Construct_UClass_UClickDragToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragToolBuilder>()
	{
		return UClickDragToolBuilder::StaticClass();
	}
	UClickDragToolBuilder::UClickDragToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragToolBuilder);
	UClickDragToolBuilder::~UClickDragToolBuilder() {}
	void UClickDragTool::StaticRegisterNativesUClickDragTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClickDragTool);
	UClass* Z_Construct_UClass_UClickDragTool_NoRegister()
	{
		return UClickDragTool::StaticClass();
	}
	struct Z_Construct_UClass_UClickDragTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClickDragTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UClickDragTool is a base tool that basically just implements IClickDragBehaviorTarget,\n * and on setup registers a UClickDragInputBehavior. You can subclass this Tool to\n * implement basic click-drag type Tools. If you want to do more advanced things, \n * like handle modifier buttons/keys, you will need to implement IClickDragBehaviorTarget yourself\n */" },
		{ "IncludePath", "BaseTools/ClickDragTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ClickDragTool.h" },
		{ "ToolTip", "UClickDragTool is a base tool that basically just implements IClickDragBehaviorTarget,\nand on setup registers a UClickDragInputBehavior. You can subclass this Tool to\nimplement basic click-drag type Tools. If you want to do more advanced things,\nlike handle modifier buttons/keys, you will need to implement IClickDragBehaviorTarget yourself" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClickDragTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClickDragTool_Statics::ClassParams = {
		&UClickDragTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClickDragTool()
	{
		if (!Z_Registration_Info_UClass_UClickDragTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClickDragTool.OuterSingleton, Z_Construct_UClass_UClickDragTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClickDragTool.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragTool>()
	{
		return UClickDragTool::StaticClass();
	}
	UClickDragTool::UClickDragTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragTool);
	UClickDragTool::~UClickDragTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClickDragToolBuilder, UClickDragToolBuilder::StaticClass, TEXT("UClickDragToolBuilder"), &Z_Registration_Info_UClass_UClickDragToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClickDragToolBuilder), 4129288425U) },
		{ Z_Construct_UClass_UClickDragTool, UClickDragTool::StaticClass, TEXT("UClickDragTool"), &Z_Registration_Info_UClass_UClickDragTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClickDragTool), 200551465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_4156055754(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
