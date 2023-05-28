// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Solvers/IKRig_SetTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_SetTransform() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransform();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransform_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransformEffector();
	IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	void UIKRig_SetTransformEffector::StaticRegisterNativesUIKRig_SetTransformEffector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_SetTransformEffector);
	UClass* Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister()
	{
		return UIKRig_SetTransformEffector::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_SetTransformEffector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePosition_MetaData[];
#endif
		static void NewProp_bEnablePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotation_MetaData[];
#endif
		static void NewProp_bEnableRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Solvers/IKRig_SetTransform.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_MetaData[] = {
		{ "Category", "Set Transform Effector" },
		{ "Comment", "/** If true, Goal will drive the translation of the target bone. Default is true. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
		{ "ToolTip", "If true, Goal will drive the translation of the target bone. Default is true." },
	};
#endif
	void Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_SetBit(void* Obj)
	{
		((UIKRig_SetTransformEffector*)Obj)->bEnablePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition = { "bEnablePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRig_SetTransformEffector), &Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_MetaData[] = {
		{ "Category", "Set Transform Effector" },
		{ "Comment", "/** If true, Goal will drive the rotation of the target bone. Default is true. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
		{ "ToolTip", "If true, Goal will drive the rotation of the target bone. Default is true." },
	};
#endif
	void Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_SetBit(void* Obj)
	{
		((UIKRig_SetTransformEffector*)Obj)->bEnableRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation = { "bEnableRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRig_SetTransformEffector), &Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Set Transform Effector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Blend the effector on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
		{ "ToolTip", "Blend the effector on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_SetTransformEffector, Alpha), METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_Alpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_SetTransformEffector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::ClassParams = {
		&UIKRig_SetTransformEffector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_SetTransformEffector()
	{
		if (!Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton, Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_SetTransformEffector>()
	{
		return UIKRig_SetTransformEffector::StaticClass();
	}
	UIKRig_SetTransformEffector::UIKRig_SetTransformEffector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_SetTransformEffector);
	UIKRig_SetTransformEffector::~UIKRig_SetTransformEffector() {}
	void UIKRig_SetTransform::StaticRegisterNativesUIKRig_SetTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_SetTransform);
	UClass* Z_Construct_UClass_UIKRig_SetTransform_NoRegister()
	{
		return UIKRig_SetTransform::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_SetTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Effector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_SetTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Solvers/IKRig_SetTransform.h" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "Set Transform Settings" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_SetTransform, Goal), METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "Set Transform Settings" },
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_SetTransform, RootBone), METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_RootBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Effector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Solvers/IKRig_SetTransform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRig_SetTransform, Effector), Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Effector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_SetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Effector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_SetTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_SetTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_SetTransform_Statics::ClassParams = {
		&UIKRig_SetTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_SetTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_SetTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_SetTransform()
	{
		if (!Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton, Z_Construct_UClass_UIKRig_SetTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRig_SetTransform>()
	{
		return UIKRig_SetTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_SetTransform);
	UIKRig_SetTransform::~UIKRig_SetTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_SetTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_SetTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_SetTransformEffector, UIKRig_SetTransformEffector::StaticClass, TEXT("UIKRig_SetTransformEffector"), &Z_Registration_Info_UClass_UIKRig_SetTransformEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_SetTransformEffector), 1239312908U) },
		{ Z_Construct_UClass_UIKRig_SetTransform, UIKRig_SetTransform::StaticClass, TEXT("UIKRig_SetTransform"), &Z_Registration_Info_UClass_UIKRig_SetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_SetTransform), 2577676699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_SetTransform_h_3481325022(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_SetTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Solvers_IKRig_SetTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
