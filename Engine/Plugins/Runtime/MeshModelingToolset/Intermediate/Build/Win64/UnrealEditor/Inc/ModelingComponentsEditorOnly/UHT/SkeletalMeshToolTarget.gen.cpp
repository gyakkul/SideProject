// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolTargets/SkeletalMeshToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshToolTarget() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMaterialProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USkeletalMeshBackedTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshToolTarget();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshToolTarget_NoRegister();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshToolTargetFactory();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshToolTargetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponentsEditorOnly();
// End Cross Module References
	void USkeletalMeshReadOnlyToolTarget::StaticRegisterNativesUSkeletalMeshReadOnlyToolTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshReadOnlyToolTarget);
	UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_NoRegister()
	{
		return USkeletalMeshReadOnlyToolTarget::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool target backed by a read-only skeletal mesh.\n * \n * This is a special tool target that refers to the underlying asset (in this case a skeletal mesh), rather than indirectly through a component.\n * This type of target is used in cases, such as opening an asset through the content browser, when there is no component available.\n */" },
		{ "IncludePath", "ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ToolTip", "A tool target backed by a read-only skeletal mesh.\n\nThis is a special tool target that refers to the underlying asset (in this case a skeletal mesh), rather than indirectly through a component.\nThis type of target is used in cases, such as opening an asset through the content browser, when there is no component available." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshDescriptionProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshReadOnlyToolTarget, IMeshDescriptionProvider), false },  // 578635468
			{ Z_Construct_UClass_UDynamicMeshProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshReadOnlyToolTarget, IDynamicMeshProvider), false },  // 2204008170
			{ Z_Construct_UClass_UMaterialProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshReadOnlyToolTarget, IMaterialProvider), false },  // 2807395048
			{ Z_Construct_UClass_USkeletalMeshBackedTarget_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshReadOnlyToolTarget, ISkeletalMeshBackedTarget), false },  // 3563319476
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshReadOnlyToolTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::ClassParams = {
		&USkeletalMeshReadOnlyToolTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTarget.OuterSingleton, Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTarget.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<USkeletalMeshReadOnlyToolTarget>()
	{
		return USkeletalMeshReadOnlyToolTarget::StaticClass();
	}
	USkeletalMeshReadOnlyToolTarget::USkeletalMeshReadOnlyToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshReadOnlyToolTarget);
	USkeletalMeshReadOnlyToolTarget::~USkeletalMeshReadOnlyToolTarget() {}
	void USkeletalMeshToolTarget::StaticRegisterNativesUSkeletalMeshToolTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshToolTarget);
	UClass* Z_Construct_UClass_USkeletalMeshToolTarget_NoRegister()
	{
		return USkeletalMeshToolTarget::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshToolTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshToolTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshToolTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool target backed by a skeletal mesh.\n */" },
		{ "IncludePath", "ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ToolTip", "A tool target backed by a skeletal mesh." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeletalMeshToolTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshToolTarget, IMeshDescriptionCommitter), false },  // 78481201
			{ Z_Construct_UClass_UDynamicMeshCommitter_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshToolTarget, IDynamicMeshCommitter), false },  // 2086184049
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshToolTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshToolTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshToolTarget_Statics::ClassParams = {
		&USkeletalMeshToolTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshToolTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshToolTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshToolTarget()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshToolTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshToolTarget.OuterSingleton, Z_Construct_UClass_USkeletalMeshToolTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshToolTarget.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<USkeletalMeshToolTarget>()
	{
		return USkeletalMeshToolTarget::StaticClass();
	}
	USkeletalMeshToolTarget::USkeletalMeshToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshToolTarget);
	USkeletalMeshToolTarget::~USkeletalMeshToolTarget() {}
	void USkeletalMeshReadOnlyToolTargetFactory::StaticRegisterNativesUSkeletalMeshReadOnlyToolTargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshReadOnlyToolTargetFactory);
	UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_NoRegister()
	{
		return USkeletalMeshReadOnlyToolTargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for USkeletalMeshReadOnlyToolTarget to be used by the target manager. */" },
		{ "IncludePath", "ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ToolTip", "Factory for USkeletalMeshReadOnlyToolTarget to be used by the target manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshReadOnlyToolTargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics::ClassParams = {
		&USkeletalMeshReadOnlyToolTargetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTargetFactory.OuterSingleton, Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTargetFactory.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<USkeletalMeshReadOnlyToolTargetFactory>()
	{
		return USkeletalMeshReadOnlyToolTargetFactory::StaticClass();
	}
	USkeletalMeshReadOnlyToolTargetFactory::USkeletalMeshReadOnlyToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshReadOnlyToolTargetFactory);
	USkeletalMeshReadOnlyToolTargetFactory::~USkeletalMeshReadOnlyToolTargetFactory() {}
	void USkeletalMeshToolTargetFactory::StaticRegisterNativesUSkeletalMeshToolTargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshToolTargetFactory);
	UClass* Z_Construct_UClass_USkeletalMeshToolTargetFactory_NoRegister()
	{
		return USkeletalMeshToolTargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for USkeletalMeshToolTarget to be used by the target manager. */" },
		{ "IncludePath", "ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/SkeletalMeshToolTarget.h" },
		{ "ToolTip", "Factory for USkeletalMeshToolTarget to be used by the target manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshToolTargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics::ClassParams = {
		&USkeletalMeshToolTargetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshToolTargetFactory()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshToolTargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshToolTargetFactory.OuterSingleton, Z_Construct_UClass_USkeletalMeshToolTargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshToolTargetFactory.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<USkeletalMeshToolTargetFactory>()
	{
		return USkeletalMeshToolTargetFactory::StaticClass();
	}
	USkeletalMeshToolTargetFactory::USkeletalMeshToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshToolTargetFactory);
	USkeletalMeshToolTargetFactory::~USkeletalMeshToolTargetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_SkeletalMeshToolTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_SkeletalMeshToolTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshReadOnlyToolTarget, USkeletalMeshReadOnlyToolTarget::StaticClass, TEXT("USkeletalMeshReadOnlyToolTarget"), &Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshReadOnlyToolTarget), 3596553906U) },
		{ Z_Construct_UClass_USkeletalMeshToolTarget, USkeletalMeshToolTarget::StaticClass, TEXT("USkeletalMeshToolTarget"), &Z_Registration_Info_UClass_USkeletalMeshToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshToolTarget), 3836009416U) },
		{ Z_Construct_UClass_USkeletalMeshReadOnlyToolTargetFactory, USkeletalMeshReadOnlyToolTargetFactory::StaticClass, TEXT("USkeletalMeshReadOnlyToolTargetFactory"), &Z_Registration_Info_UClass_USkeletalMeshReadOnlyToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshReadOnlyToolTargetFactory), 2449777750U) },
		{ Z_Construct_UClass_USkeletalMeshToolTargetFactory, USkeletalMeshToolTargetFactory::StaticClass, TEXT("USkeletalMeshToolTargetFactory"), &Z_Registration_Info_UClass_USkeletalMeshToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshToolTargetFactory), 3523289093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_SkeletalMeshToolTarget_h_2393762702(TEXT("/Script/ModelingComponentsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_SkeletalMeshToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_SkeletalMeshToolTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
