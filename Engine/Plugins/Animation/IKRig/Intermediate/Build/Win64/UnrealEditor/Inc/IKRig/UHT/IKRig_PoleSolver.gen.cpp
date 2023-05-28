// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Solvers/IKRig_PoleSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_PoleSolver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolver();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolver_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	void UIKRig_PoleSolverEffector::StaticRegisterNativesUIKRig_PoleSolverEffector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_PoleSolverEffector);
	UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister()
	{
		return UIKRig_PoleSolverEffector::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Solvers/IKRig_PoleSolver.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Pole Solver Effector" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_PoleSolverEffector, GoalName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Pole Solver Effector" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_PoleSolverEffector, BoneName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Pole Solver Effector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Blend the effector on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
		{ "ToolTip", "Blend the effector on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_PoleSolverEffector, Alpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_Alpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_PoleSolverEffector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::ClassParams = {
		&UIKRig_PoleSolverEffector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector()
	{
		if (!Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton, Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_PoleSolverEffector>()
	{
		return UIKRig_PoleSolverEffector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_PoleSolverEffector);
	UIKRig_PoleSolverEffector::~UIKRig_PoleSolverEffector() {}
	void UIKRig_PoleSolver::StaticRegisterNativesUIKRig_PoleSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_PoleSolver);
	UClass* Z_Construct_UClass_UIKRig_PoleSolver_NoRegister()
	{
		return UIKRig_PoleSolver::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_PoleSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Effector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_PoleSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Solvers/IKRig_PoleSolver.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_RootName_MetaData[] = {
		{ "Category", "Pole Solver Settings" },
		{ "DisplayName", "Root Bone" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_RootName = { "RootName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_PoleSolver, RootName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_RootName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_RootName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_EndName_MetaData[] = {
		{ "Category", "Pole Solver Settings" },
		{ "DisplayName", "End Bone" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_EndName = { "EndName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_PoleSolver, EndName), METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_EndName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_EndName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_Effector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solvers/IKRig_PoleSolver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_PoleSolver, Effector), Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_Effector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_PoleSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_RootName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_EndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_Effector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_PoleSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_PoleSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::ClassParams = {
		&UIKRig_PoleSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_PoleSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_PoleSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_PoleSolver()
	{
		if (!Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton, Z_Construct_UClass_UIKRig_PoleSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_PoleSolver>()
	{
		return UIKRig_PoleSolver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_PoleSolver);
	UIKRig_PoleSolver::~UIKRig_PoleSolver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_PoleSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_PoleSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_PoleSolverEffector, UIKRig_PoleSolverEffector::StaticClass, TEXT("UIKRig_PoleSolverEffector"), &Z_Registration_Info_UClass_UIKRig_PoleSolverEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_PoleSolverEffector), 3059999131U) },
		{ Z_Construct_UClass_UIKRig_PoleSolver, UIKRig_PoleSolver::StaticClass, TEXT("UIKRig_PoleSolver"), &Z_Registration_Info_UClass_UIKRig_PoleSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_PoleSolver), 1226420161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_PoleSolver_h_15319272(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_PoleSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_PoleSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
