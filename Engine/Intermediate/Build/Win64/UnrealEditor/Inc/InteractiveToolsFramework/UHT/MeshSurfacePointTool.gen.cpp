// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/MeshSurfacePointTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSurfacePointTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UMeshSurfacePointToolBuilder::StaticRegisterNativesUMeshSurfacePointToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSurfacePointToolBuilder);
	UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister()
	{
		return UMeshSurfacePointToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseTools/MeshSurfacePointTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSurfacePointToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::ClassParams = {
		&UMeshSurfacePointToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSurfacePointToolBuilder>()
	{
		return UMeshSurfacePointToolBuilder::StaticClass();
	}
	UMeshSurfacePointToolBuilder::UMeshSurfacePointToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSurfacePointToolBuilder);
	UMeshSurfacePointToolBuilder::~UMeshSurfacePointToolBuilder() {}
	void UMeshSurfacePointTool::StaticRegisterNativesUMeshSurfacePointTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSurfacePointTool);
	UClass* Z_Construct_UClass_UMeshSurfacePointTool_NoRegister()
	{
		return UMeshSurfacePointTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSurfacePointTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSurfacePointTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshSurfacePointTool is a base Tool implementation that can be used to implement various\n * \"point on surface\" interactions. The tool acts on an input IMeshDescriptionSource object,\n * which the standard Builder can extract from the current selection (eg Editor selection).\n * \n * Subclasses override the OnBeginDrag/OnUpdateDrag/OnEndDrag and OnUpdateHover functions\n * to implement custom behavior.\n */" },
		{ "IncludePath", "BaseTools/MeshSurfacePointTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
		{ "ToolTip", "UMeshSurfacePointTool is a base Tool implementation that can be used to implement various\n\"point on surface\" interactions. The tool acts on an input IMeshDescriptionSource object,\nwhich the standard Builder can extract from the current selection (eg Editor selection).\n\nSubclasses override the OnBeginDrag/OnUpdateDrag/OnEndDrag and OnUpdateHover functions\nto implement custom behavior." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSurfacePointTool_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMeshSurfacePointTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSurfacePointTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSurfacePointTool_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::NewProp_TargetWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSurfacePointTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSurfacePointTool_Statics::NewProp_TargetWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSurfacePointTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSurfacePointTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSurfacePointTool_Statics::ClassParams = {
		&UMeshSurfacePointTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSurfacePointTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSurfacePointTool()
	{
		if (!Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton, Z_Construct_UClass_UMeshSurfacePointTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSurfacePointTool>()
	{
		return UMeshSurfacePointTool::StaticClass();
	}
	UMeshSurfacePointTool::UMeshSurfacePointTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSurfacePointTool);
	UMeshSurfacePointTool::~UMeshSurfacePointTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSurfacePointToolBuilder, UMeshSurfacePointToolBuilder::StaticClass, TEXT("UMeshSurfacePointToolBuilder"), &Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSurfacePointToolBuilder), 3805475545U) },
		{ Z_Construct_UClass_UMeshSurfacePointTool, UMeshSurfacePointTool::StaticClass, TEXT("UMeshSurfacePointTool"), &Z_Registration_Info_UClass_UMeshSurfacePointTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSurfacePointTool), 4224046448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_584985204(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
