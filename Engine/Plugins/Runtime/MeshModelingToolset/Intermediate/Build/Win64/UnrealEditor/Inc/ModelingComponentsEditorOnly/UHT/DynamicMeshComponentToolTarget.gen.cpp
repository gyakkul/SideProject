// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolTargets/DynamicMeshComponentToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshComponentToolTarget() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMaterialProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPhysicsDataSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPersistentDynamicMeshSource_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UDynamicMeshComponentToolTarget();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UDynamicMeshComponentToolTarget_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponentsEditorOnly();
// End Cross Module References
	void UDynamicMeshComponentToolTarget::StaticRegisterNativesUDynamicMeshComponentToolTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshComponentToolTarget);
	UClass* Z_Construct_UClass_UDynamicMeshComponentToolTarget_NoRegister()
	{
		return UDynamicMeshComponentToolTarget::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponentToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A ToolTarget backed by a DynamicMeshComponent\n */" },
		{ "IncludePath", "ToolTargets/DynamicMeshComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/DynamicMeshComponentToolTarget.h" },
		{ "ToolTip", "A ToolTarget backed by a DynamicMeshComponent" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponentToolTarget, IMeshDescriptionCommitter), false },  // 78481201
			{ Z_Construct_UClass_UMeshDescriptionProvider_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponentToolTarget, IMeshDescriptionProvider), false },  // 578635468
			{ Z_Construct_UClass_UDynamicMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponentToolTarget, IDynamicMeshProvider), false },  // 2204008170
			{ Z_Construct_UClass_UDynamicMeshCommitter_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponentToolTarget, IDynamicMeshCommitter), false },  // 2086184049
			{ Z_Construct_UClass_UMaterialProvider_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponentToolTarget, IMaterialProvider), false },  // 2807395048
			{ Z_Construct_UClass_UPersistentDynamicMeshSource_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponentToolTarget, IPersistentDynamicMeshSource), false },  // 3396513207
			{ Z_Construct_UClass_UPhysicsDataSource_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponentToolTarget, IPhysicsDataSource), false },  // 977009738
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshComponentToolTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::ClassParams = {
		&UDynamicMeshComponentToolTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshComponentToolTarget()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshComponentToolTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshComponentToolTarget.OuterSingleton, Z_Construct_UClass_UDynamicMeshComponentToolTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshComponentToolTarget.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UDynamicMeshComponentToolTarget>()
	{
		return UDynamicMeshComponentToolTarget::StaticClass();
	}
	UDynamicMeshComponentToolTarget::UDynamicMeshComponentToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshComponentToolTarget);
	UDynamicMeshComponentToolTarget::~UDynamicMeshComponentToolTarget() {}
	void UDynamicMeshComponentToolTargetFactory::StaticRegisterNativesUDynamicMeshComponentToolTargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshComponentToolTargetFactory);
	UClass* Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_NoRegister()
	{
		return UDynamicMeshComponentToolTargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for UDynamicMeshComponentToolTarget to be used by the target manager. */" },
		{ "IncludePath", "ToolTargets/DynamicMeshComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/DynamicMeshComponentToolTarget.h" },
		{ "ToolTip", "Factory for UDynamicMeshComponentToolTarget to be used by the target manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshComponentToolTargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics::ClassParams = {
		&UDynamicMeshComponentToolTargetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshComponentToolTargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshComponentToolTargetFactory.OuterSingleton, Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshComponentToolTargetFactory.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UDynamicMeshComponentToolTargetFactory>()
	{
		return UDynamicMeshComponentToolTargetFactory::StaticClass();
	}
	UDynamicMeshComponentToolTargetFactory::UDynamicMeshComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshComponentToolTargetFactory);
	UDynamicMeshComponentToolTargetFactory::~UDynamicMeshComponentToolTargetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_DynamicMeshComponentToolTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_DynamicMeshComponentToolTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshComponentToolTarget, UDynamicMeshComponentToolTarget::StaticClass, TEXT("UDynamicMeshComponentToolTarget"), &Z_Registration_Info_UClass_UDynamicMeshComponentToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshComponentToolTarget), 2666790499U) },
		{ Z_Construct_UClass_UDynamicMeshComponentToolTargetFactory, UDynamicMeshComponentToolTargetFactory::StaticClass, TEXT("UDynamicMeshComponentToolTargetFactory"), &Z_Registration_Info_UClass_UDynamicMeshComponentToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshComponentToolTargetFactory), 3113300637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_DynamicMeshComponentToolTarget_h_2312760904(TEXT("/Script/ModelingComponentsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_DynamicMeshComponentToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_DynamicMeshComponentToolTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
