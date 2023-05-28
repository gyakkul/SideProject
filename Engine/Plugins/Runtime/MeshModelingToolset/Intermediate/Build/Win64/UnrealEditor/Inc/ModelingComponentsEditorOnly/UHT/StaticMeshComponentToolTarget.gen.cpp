// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolTargets/StaticMeshComponentToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshComponentToolTarget() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMaterialProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPhysicsDataSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshComponentToolTarget();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshComponentToolTarget_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshComponentToolTargetFactory();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponentsEditorOnly();
// End Cross Module References
	void UStaticMeshComponentToolTarget::StaticRegisterNativesUStaticMeshComponentToolTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshComponentToolTarget);
	UClass* Z_Construct_UClass_UStaticMeshComponentToolTarget_NoRegister()
	{
		return UStaticMeshComponentToolTarget::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponentToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool target backed by a static mesh component that can provide and take a mesh\n * description.\n */" },
		{ "IncludePath", "ToolTargets/StaticMeshComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/StaticMeshComponentToolTarget.h" },
		{ "ToolTip", "A tool target backed by a static mesh component that can provide and take a mesh\ndescription." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshComponentToolTarget, IMeshDescriptionCommitter), false },  // 78481201
			{ Z_Construct_UClass_UMeshDescriptionProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshComponentToolTarget, IMeshDescriptionProvider), false },  // 578635468
			{ Z_Construct_UClass_UMaterialProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshComponentToolTarget, IMaterialProvider), false },  // 2807395048
			{ Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshComponentToolTarget, IStaticMeshBackedTarget), false },  // 311638602
			{ Z_Construct_UClass_UDynamicMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshComponentToolTarget, IDynamicMeshProvider), false },  // 2204008170
			{ Z_Construct_UClass_UDynamicMeshCommitter_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshComponentToolTarget, IDynamicMeshCommitter), false },  // 2086184049
			{ Z_Construct_UClass_UPhysicsDataSource_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshComponentToolTarget, IPhysicsDataSource), false },  // 977009738
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshComponentToolTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::ClassParams = {
		&UStaticMeshComponentToolTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshComponentToolTarget()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshComponentToolTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshComponentToolTarget.OuterSingleton, Z_Construct_UClass_UStaticMeshComponentToolTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshComponentToolTarget.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UStaticMeshComponentToolTarget>()
	{
		return UStaticMeshComponentToolTarget::StaticClass();
	}
	UStaticMeshComponentToolTarget::UStaticMeshComponentToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshComponentToolTarget);
	UStaticMeshComponentToolTarget::~UStaticMeshComponentToolTarget() {}
	void UStaticMeshComponentToolTargetFactory::StaticRegisterNativesUStaticMeshComponentToolTargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshComponentToolTargetFactory);
	UClass* Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_NoRegister()
	{
		return UStaticMeshComponentToolTargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for UStaticMeshComponentToolTarget to be used by the target manager. */" },
		{ "IncludePath", "ToolTargets/StaticMeshComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/StaticMeshComponentToolTarget.h" },
		{ "ToolTip", "Factory for UStaticMeshComponentToolTarget to be used by the target manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshComponentToolTargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics::ClassParams = {
		&UStaticMeshComponentToolTargetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshComponentToolTargetFactory()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshComponentToolTargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshComponentToolTargetFactory.OuterSingleton, Z_Construct_UClass_UStaticMeshComponentToolTargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshComponentToolTargetFactory.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UStaticMeshComponentToolTargetFactory>()
	{
		return UStaticMeshComponentToolTargetFactory::StaticClass();
	}
	UStaticMeshComponentToolTargetFactory::UStaticMeshComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshComponentToolTargetFactory);
	UStaticMeshComponentToolTargetFactory::~UStaticMeshComponentToolTargetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshComponentToolTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshComponentToolTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshComponentToolTarget, UStaticMeshComponentToolTarget::StaticClass, TEXT("UStaticMeshComponentToolTarget"), &Z_Registration_Info_UClass_UStaticMeshComponentToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshComponentToolTarget), 648634523U) },
		{ Z_Construct_UClass_UStaticMeshComponentToolTargetFactory, UStaticMeshComponentToolTargetFactory::StaticClass, TEXT("UStaticMeshComponentToolTargetFactory"), &Z_Registration_Info_UClass_UStaticMeshComponentToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshComponentToolTargetFactory), 1896001876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshComponentToolTarget_h_1737596927(TEXT("/Script/ModelingComponentsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshComponentToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_StaticMeshComponentToolTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
