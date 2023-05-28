// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRigSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigSolver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	void UIKRigSolver::StaticRegisterNativesUIKRigSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigSolver);
	UClass* Z_Construct_UClass_UIKRigSolver_NoRegister()
	{
		return UIKRigSolver::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigSolver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// this is the base class for creating your own solver type that integrates into the IK Rig framework/editor.\n" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "IKRigSolver.h" },
		{ "ModuleRelativePath", "Public/IKRigSolver.h" },
		{ "ToolTip", "this is the base class for creating your own solver type that integrates into the IK Rig framework/editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/IKRigSolver.h" },
	};
#endif
	void Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UIKRigSolver*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRigSolver), &Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigSolver_Statics::ClassParams = {
		&UIKRigSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRigSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigSolver_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigSolver()
	{
		if (!Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton, Z_Construct_UClass_UIKRigSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRigSolver>()
	{
		return UIKRigSolver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigSolver);
	UIKRigSolver::~UIKRigSolver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigSolver, UIKRigSolver::StaticClass, TEXT("UIKRigSolver"), &Z_Registration_Info_UClass_UIKRigSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigSolver), 3194022273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSolver_h_113821095(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
