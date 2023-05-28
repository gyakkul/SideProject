// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolTargets/VolumeComponentToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeComponentToolTarget() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMaterialProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPhysicsDataSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UVolumeComponentToolTarget();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UVolumeComponentToolTarget_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UVolumeComponentToolTargetFactory();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UVolumeComponentToolTargetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponentsEditorOnly();
// End Cross Module References
	void UVolumeComponentToolTarget::StaticRegisterNativesUVolumeComponentToolTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeComponentToolTarget);
	UClass* Z_Construct_UClass_UVolumeComponentToolTarget_NoRegister()
	{
		return UVolumeComponentToolTarget::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeComponentToolTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeComponentToolTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponentToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeComponentToolTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool target backed by AVolume\n */" },
		{ "IncludePath", "ToolTargets/VolumeComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/VolumeComponentToolTarget.h" },
		{ "ToolTip", "A tool target backed by AVolume" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVolumeComponentToolTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMaterialProvider_NoRegister, (int32)VTABLE_OFFSET(UVolumeComponentToolTarget, IMaterialProvider), false },  // 2807395048
			{ Z_Construct_UClass_UPhysicsDataSource_NoRegister, (int32)VTABLE_OFFSET(UVolumeComponentToolTarget, IPhysicsDataSource), false },  // 977009738
			{ Z_Construct_UClass_UDynamicMeshCommitter_NoRegister, (int32)VTABLE_OFFSET(UVolumeComponentToolTarget, IDynamicMeshCommitter), false },  // 2086184049
			{ Z_Construct_UClass_UDynamicMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UVolumeComponentToolTarget, IDynamicMeshProvider), false },  // 2204008170
			{ Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister, (int32)VTABLE_OFFSET(UVolumeComponentToolTarget, IMeshDescriptionCommitter), false },  // 78481201
			{ Z_Construct_UClass_UMeshDescriptionProvider_NoRegister, (int32)VTABLE_OFFSET(UVolumeComponentToolTarget, IMeshDescriptionProvider), false },  // 578635468
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeComponentToolTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeComponentToolTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeComponentToolTarget_Statics::ClassParams = {
		&UVolumeComponentToolTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVolumeComponentToolTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeComponentToolTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeComponentToolTarget()
	{
		if (!Z_Registration_Info_UClass_UVolumeComponentToolTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeComponentToolTarget.OuterSingleton, Z_Construct_UClass_UVolumeComponentToolTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeComponentToolTarget.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UVolumeComponentToolTarget>()
	{
		return UVolumeComponentToolTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeComponentToolTarget);
	UVolumeComponentToolTarget::~UVolumeComponentToolTarget() {}
	void UVolumeComponentToolTargetFactory::StaticRegisterNativesUVolumeComponentToolTargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeComponentToolTargetFactory);
	UClass* Z_Construct_UClass_UVolumeComponentToolTargetFactory_NoRegister()
	{
		return UVolumeComponentToolTargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for UVolumeComponentToolTarget to be used by the target manager. */" },
		{ "IncludePath", "ToolTargets/VolumeComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/VolumeComponentToolTarget.h" },
		{ "ToolTip", "Factory for UVolumeComponentToolTarget to be used by the target manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeComponentToolTargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics::ClassParams = {
		&UVolumeComponentToolTargetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeComponentToolTargetFactory()
	{
		if (!Z_Registration_Info_UClass_UVolumeComponentToolTargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeComponentToolTargetFactory.OuterSingleton, Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeComponentToolTargetFactory.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UVolumeComponentToolTargetFactory>()
	{
		return UVolumeComponentToolTargetFactory::StaticClass();
	}
	UVolumeComponentToolTargetFactory::UVolumeComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeComponentToolTargetFactory);
	UVolumeComponentToolTargetFactory::~UVolumeComponentToolTargetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeComponentToolTarget, UVolumeComponentToolTarget::StaticClass, TEXT("UVolumeComponentToolTarget"), &Z_Registration_Info_UClass_UVolumeComponentToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeComponentToolTarget), 683546796U) },
		{ Z_Construct_UClass_UVolumeComponentToolTargetFactory, UVolumeComponentToolTargetFactory::StaticClass, TEXT("UVolumeComponentToolTargetFactory"), &Z_Registration_Info_UClass_UVolumeComponentToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeComponentToolTargetFactory), 3283255028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_4040163659(TEXT("/Script/ModelingComponentsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
