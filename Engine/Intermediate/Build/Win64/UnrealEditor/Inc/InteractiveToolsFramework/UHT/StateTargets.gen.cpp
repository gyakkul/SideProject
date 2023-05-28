// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/StateTargets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTargets() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoNilStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoNilStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoNilStateTarget::StaticRegisterNativesUGizmoNilStateTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoNilStateTarget);
	UClass* Z_Construct_UClass_UGizmoNilStateTarget_NoRegister()
	{
		return UGizmoNilStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoNilStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoNilStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoNilStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoNilStateTarget is an implementation of IGizmoStateTarget that does nothing\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoNilStateTarget is an implementation of IGizmoStateTarget that does nothing" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoNilStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoNilStateTarget, IGizmoStateTarget), false },  // 1620912124
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoNilStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoNilStateTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoNilStateTarget_Statics::ClassParams = {
		&UGizmoNilStateTarget::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoNilStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoNilStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoNilStateTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoNilStateTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoNilStateTarget.OuterSingleton, Z_Construct_UClass_UGizmoNilStateTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoNilStateTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoNilStateTarget>()
	{
		return UGizmoNilStateTarget::StaticClass();
	}
	UGizmoNilStateTarget::UGizmoNilStateTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoNilStateTarget);
	UGizmoNilStateTarget::~UGizmoNilStateTarget() {}
	void UGizmoLambdaStateTarget::StaticRegisterNativesUGizmoLambdaStateTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLambdaStateTarget);
	UClass* Z_Construct_UClass_UGizmoLambdaStateTarget_NoRegister()
	{
		return UGizmoLambdaStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLambdaStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoLambdaStateTarget is an implementation of IGizmoStateTarget that forwards\n * calls to its interface functions to external TFunctions\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoLambdaStateTarget is an implementation of IGizmoStateTarget that forwards\ncalls to its interface functions to external TFunctions" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoLambdaStateTarget, IGizmoStateTarget), false },  // 1620912124
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLambdaStateTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::ClassParams = {
		&UGizmoLambdaStateTarget::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLambdaStateTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoLambdaStateTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLambdaStateTarget.OuterSingleton, Z_Construct_UClass_UGizmoLambdaStateTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoLambdaStateTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLambdaStateTarget>()
	{
		return UGizmoLambdaStateTarget::StaticClass();
	}
	UGizmoLambdaStateTarget::UGizmoLambdaStateTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLambdaStateTarget);
	UGizmoLambdaStateTarget::~UGizmoLambdaStateTarget() {}
	void UGizmoObjectModifyStateTarget::StaticRegisterNativesUGizmoObjectModifyStateTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoObjectModifyStateTarget);
	UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister()
	{
		return UGizmoObjectModifyStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionManager_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransactionManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoObjectModifyStateTarget is an implementation of IGizmoStateTarget that \n * opens and closes change transactions on a target UObject via a GizmoManager.\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoObjectModifyStateTarget is an implementation of IGizmoStateTarget that\nopens and closes change transactions on a target UObject via a GizmoManager." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::NewProp_TransactionManager_MetaData[] = {
		{ "Comment", "/**\n\x09 * Pointer to the GizmoManager or ToolManager that is used to open/close the transaction\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "Pointer to the GizmoManager or ToolManager that is used to open/close the transaction" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::NewProp_TransactionManager = { "TransactionManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoObjectModifyStateTarget, TransactionManager), Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::NewProp_TransactionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::NewProp_TransactionManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::NewProp_TransactionManager,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoObjectModifyStateTarget, IGizmoStateTarget), false },  // 1620912124
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoObjectModifyStateTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::ClassParams = {
		&UGizmoObjectModifyStateTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.OuterSingleton, Z_Construct_UClass_UGizmoObjectModifyStateTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoObjectModifyStateTarget>()
	{
		return UGizmoObjectModifyStateTarget::StaticClass();
	}
	UGizmoObjectModifyStateTarget::UGizmoObjectModifyStateTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoObjectModifyStateTarget);
	UGizmoObjectModifyStateTarget::~UGizmoObjectModifyStateTarget() {}
	void UGizmoTransformChangeStateTarget::StaticRegisterNativesUGizmoTransformChangeStateTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoTransformChangeStateTarget);
	UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister()
	{
		return UGizmoTransformChangeStateTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionManager_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransactionManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoTransformChangeStateTarget is an implementation of IGizmoStateTarget that\n * emits an FComponentWorldTransformChange on a target USceneComponent. This StateTarget\n * also opens/closes an undo transaction via GizmoManager.\n *\n * The DependentChangeSources and ExternalDependentChangeSources lists allow additional\n * FChange objects to be inserted into the transaction, provided by IToolCommandChangeSource implementations.\n */" },
		{ "IncludePath", "BaseGizmos/StateTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "UGizmoTransformChangeStateTarget is an implementation of IGizmoStateTarget that\nemits an FComponentWorldTransformChange on a target USceneComponent. This StateTarget\nalso opens/closes an undo transaction via GizmoManager.\n\nThe DependentChangeSources and ExternalDependentChangeSources lists allow additional\nFChange objects to be inserted into the transaction, provided by IToolCommandChangeSource implementations." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager_MetaData[] = {
		{ "Comment", "/**\n\x09 * Pointer to the GizmoManager or ToolManager that is used to open/close the transaction\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/StateTargets.h" },
		{ "ToolTip", "Pointer to the GizmoManager or ToolManager that is used to open/close the transaction" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager = { "TransactionManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoTransformChangeStateTarget, TransactionManager), Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::NewProp_TransactionManager,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoStateTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoTransformChangeStateTarget, IGizmoStateTarget), false },  // 1620912124
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoTransformChangeStateTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::ClassParams = {
		&UGizmoTransformChangeStateTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.OuterSingleton, Z_Construct_UClass_UGizmoTransformChangeStateTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoTransformChangeStateTarget>()
	{
		return UGizmoTransformChangeStateTarget::StaticClass();
	}
	UGizmoTransformChangeStateTarget::UGizmoTransformChangeStateTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoTransformChangeStateTarget);
	UGizmoTransformChangeStateTarget::~UGizmoTransformChangeStateTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoNilStateTarget, UGizmoNilStateTarget::StaticClass, TEXT("UGizmoNilStateTarget"), &Z_Registration_Info_UClass_UGizmoNilStateTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoNilStateTarget), 1422600672U) },
		{ Z_Construct_UClass_UGizmoLambdaStateTarget, UGizmoLambdaStateTarget::StaticClass, TEXT("UGizmoLambdaStateTarget"), &Z_Registration_Info_UClass_UGizmoLambdaStateTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLambdaStateTarget), 615177350U) },
		{ Z_Construct_UClass_UGizmoObjectModifyStateTarget, UGizmoObjectModifyStateTarget::StaticClass, TEXT("UGizmoObjectModifyStateTarget"), &Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoObjectModifyStateTarget), 3912708790U) },
		{ Z_Construct_UClass_UGizmoTransformChangeStateTarget, UGizmoTransformChangeStateTarget::StaticClass, TEXT("UGizmoTransformChangeStateTarget"), &Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoTransformChangeStateTarget), 63225440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h_3883403710(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_StateTargets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
