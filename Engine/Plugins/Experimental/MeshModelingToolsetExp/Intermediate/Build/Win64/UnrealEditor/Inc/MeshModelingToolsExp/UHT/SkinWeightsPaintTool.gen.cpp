// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkinWeightsPaintTool.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinWeightsPaintTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsPaintTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsPaintTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsPaintToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsPaintToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsPaintToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsPaintToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void USkinWeightsPaintToolBuilder::StaticRegisterNativesUSkinWeightsPaintToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinWeightsPaintToolBuilder);
	UClass* Z_Construct_UClass_USkinWeightsPaintToolBuilder_NoRegister()
	{
		return USkinWeightsPaintToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SkinWeightsPaintTool.h" },
		{ "ModuleRelativePath", "Public/SkinWeightsPaintTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinWeightsPaintToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics::ClassParams = {
		&USkinWeightsPaintToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinWeightsPaintToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USkinWeightsPaintToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinWeightsPaintToolBuilder.OuterSingleton, Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinWeightsPaintToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USkinWeightsPaintToolBuilder>()
	{
		return USkinWeightsPaintToolBuilder::StaticClass();
	}
	USkinWeightsPaintToolBuilder::USkinWeightsPaintToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinWeightsPaintToolBuilder);
	USkinWeightsPaintToolBuilder::~USkinWeightsPaintToolBuilder() {}
	void USkinWeightsPaintToolProperties::StaticRegisterNativesUSkinWeightsPaintToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinWeightsPaintToolProperties);
	UClass* Z_Construct_UClass_USkinWeightsPaintToolProperties_NoRegister()
	{
		return USkinWeightsPaintToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkinWeightsPaintTool.h" },
		{ "ModuleRelativePath", "Public/SkinWeightsPaintTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::NewProp_CurrentBone_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/SkinWeightsPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::NewProp_CurrentBone = { "CurrentBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsPaintToolProperties, CurrentBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::NewProp_CurrentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::NewProp_CurrentBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::NewProp_CurrentBone,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(USkinWeightsPaintToolProperties, IBoneReferenceSkeletonProvider), false },  // 3827725125
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinWeightsPaintToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::ClassParams = {
		&USkinWeightsPaintToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinWeightsPaintToolProperties()
	{
		if (!Z_Registration_Info_UClass_USkinWeightsPaintToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinWeightsPaintToolProperties.OuterSingleton, Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinWeightsPaintToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USkinWeightsPaintToolProperties>()
	{
		return USkinWeightsPaintToolProperties::StaticClass();
	}
	USkinWeightsPaintToolProperties::USkinWeightsPaintToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinWeightsPaintToolProperties);
	USkinWeightsPaintToolProperties::~USkinWeightsPaintToolProperties() {}
	void USkinWeightsPaintTool::StaticRegisterNativesUSkinWeightsPaintTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinWeightsPaintTool);
	UClass* Z_Construct_UClass_USkinWeightsPaintTool_NoRegister()
	{
		return USkinWeightsPaintTool::StaticClass();
	}
	struct Z_Construct_UClass_USkinWeightsPaintTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolProps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinWeightsPaintTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicMeshBrushTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsPaintTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SkinWeightsPaintTool.h" },
		{ "ModuleRelativePath", "Public/SkinWeightsPaintTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsPaintTool_Statics::NewProp_ToolProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkinWeightsPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinWeightsPaintTool_Statics::NewProp_ToolProps = { "ToolProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsPaintTool, ToolProps), Z_Construct_UClass_USkinWeightsPaintToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinWeightsPaintTool_Statics::NewProp_ToolProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsPaintTool_Statics::NewProp_ToolProps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinWeightsPaintTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsPaintTool_Statics::NewProp_ToolProps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinWeightsPaintTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinWeightsPaintTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinWeightsPaintTool_Statics::ClassParams = {
		&USkinWeightsPaintTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkinWeightsPaintTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsPaintTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USkinWeightsPaintTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsPaintTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinWeightsPaintTool()
	{
		if (!Z_Registration_Info_UClass_USkinWeightsPaintTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinWeightsPaintTool.OuterSingleton, Z_Construct_UClass_USkinWeightsPaintTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinWeightsPaintTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USkinWeightsPaintTool>()
	{
		return USkinWeightsPaintTool::StaticClass();
	}
	USkinWeightsPaintTool::USkinWeightsPaintTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinWeightsPaintTool);
	USkinWeightsPaintTool::~USkinWeightsPaintTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsPaintTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsPaintTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkinWeightsPaintToolBuilder, USkinWeightsPaintToolBuilder::StaticClass, TEXT("USkinWeightsPaintToolBuilder"), &Z_Registration_Info_UClass_USkinWeightsPaintToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinWeightsPaintToolBuilder), 861966089U) },
		{ Z_Construct_UClass_USkinWeightsPaintToolProperties, USkinWeightsPaintToolProperties::StaticClass, TEXT("USkinWeightsPaintToolProperties"), &Z_Registration_Info_UClass_USkinWeightsPaintToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinWeightsPaintToolProperties), 4289780706U) },
		{ Z_Construct_UClass_USkinWeightsPaintTool, USkinWeightsPaintTool::StaticClass, TEXT("USkinWeightsPaintTool"), &Z_Registration_Info_UClass_USkinWeightsPaintTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinWeightsPaintTool), 2874955953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsPaintTool_h_1161259850(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsPaintTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsPaintTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
