// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolTargets/StaticMeshToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshToolTarget() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMaterialProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshToolTarget();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshToolTarget_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshToolTargetFactory();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshToolTargetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponentsEditorOnly();
// End Cross Module References
	void UStaticMeshToolTarget::StaticRegisterNativesUStaticMeshToolTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshToolTarget);
	UClass* Z_Construct_UClass_UStaticMeshToolTarget_NoRegister()
	{
		return UStaticMeshToolTarget::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshToolTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshToolTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshToolTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool target backed by a static mesh asset that can provide and take a mesh\n * description.\n * \n * This is a special tool target that refers to the underlying asset (in this case a static mesh), rather than indirectly through a component.\n * This type of target is used in cases, such as opening an asset through the content browser, when there is no component available.\n */" },
		{ "IncludePath", "ToolTargets/StaticMeshToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/StaticMeshToolTarget.h" },
		{ "ToolTip", "A tool target backed by a static mesh asset that can provide and take a mesh\ndescription.\n\nThis is a special tool target that refers to the underlying asset (in this case a static mesh), rather than indirectly through a component.\nThis type of target is used in cases, such as opening an asset through the content browser, when there is no component available." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStaticMeshToolTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshToolTarget, IMeshDescriptionCommitter), false },  // 78481201
			{ Z_Construct_UClass_UMeshDescriptionProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshToolTarget, IMeshDescriptionProvider), false },  // 578635468
			{ Z_Construct_UClass_UMaterialProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshToolTarget, IMaterialProvider), false },  // 2807395048
			{ Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshToolTarget, IStaticMeshBackedTarget), false },  // 311638602
			{ Z_Construct_UClass_UDynamicMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshToolTarget, IDynamicMeshProvider), false },  // 2204008170
			{ Z_Construct_UClass_UDynamicMeshCommitter_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshToolTarget, IDynamicMeshCommitter), false },  // 2086184049
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshToolTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshToolTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshToolTarget_Statics::ClassParams = {
		&UStaticMeshToolTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshToolTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToolTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshToolTarget()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshToolTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshToolTarget.OuterSingleton, Z_Construct_UClass_UStaticMeshToolTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshToolTarget.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UStaticMeshToolTarget>()
	{
		return UStaticMeshToolTarget::StaticClass();
	}
	UStaticMeshToolTarget::UStaticMeshToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshToolTarget);
	UStaticMeshToolTarget::~UStaticMeshToolTarget() {}
	void UStaticMeshToolTargetFactory::StaticRegisterNativesUStaticMeshToolTargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshToolTargetFactory);
	UClass* Z_Construct_UClass_UStaticMeshToolTargetFactory_NoRegister()
	{
		return UStaticMeshToolTargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for UStaticMeshToolTarget to be used by the target manager. */" },
		{ "IncludePath", "ToolTargets/StaticMeshToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/StaticMeshToolTarget.h" },
		{ "ToolTip", "Factory for UStaticMeshToolTarget to be used by the target manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshToolTargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics::ClassParams = {
		&UStaticMeshToolTargetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshToolTargetFactory()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshToolTargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshToolTargetFactory.OuterSingleton, Z_Construct_UClass_UStaticMeshToolTargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshToolTargetFactory.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UStaticMeshToolTargetFactory>()
	{
		return UStaticMeshToolTargetFactory::StaticClass();
	}
	UStaticMeshToolTargetFactory::UStaticMeshToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshToolTargetFactory);
	UStaticMeshToolTargetFactory::~UStaticMeshToolTargetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshToolTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshToolTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshToolTarget, UStaticMeshToolTarget::StaticClass, TEXT("UStaticMeshToolTarget"), &Z_Registration_Info_UClass_UStaticMeshToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshToolTarget), 3741789824U) },
		{ Z_Construct_UClass_UStaticMeshToolTargetFactory, UStaticMeshToolTargetFactory::StaticClass, TEXT("UStaticMeshToolTargetFactory"), &Z_Registration_Info_UClass_UStaticMeshToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshToolTargetFactory), 3601118105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshToolTarget_h_1448131489(TEXT("/Script/ModelingComponentsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshToolTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
