// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Validation/ControlRigNumericalValidationPass.h"
#include "Rigs/RigHierarchyPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigNumericalValidationPass() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigNumericalValidationPass();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigNumericalValidationPass_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidationPass();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UControlRigNumericalValidationPass::StaticRegisterNativesUControlRigNumericalValidationPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigNumericalValidationPass);
	UClass* Z_Construct_UClass_UControlRigNumericalValidationPass_NoRegister()
	{
		return UControlRigNumericalValidationPass::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigNumericalValidationPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckControls_MetaData[];
#endif
		static void NewProp_bCheckControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckBones_MetaData[];
#endif
		static void NewProp_bCheckBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckCurves_MetaData[];
#endif
		static void NewProp_bCheckCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalePrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalePrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvePrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventNameA_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventNameA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventNameB_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventNameB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigValidationPass,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Used to perform a numerical comparison of the poses */" },
		{ "DisplayName", "Numerical Comparison" },
		{ "IncludePath", "Validation/ControlRigNumericalValidationPass.h" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "Used to perform a numerical comparison of the poses" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set to true the pass will validate the poses of all bones\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "If set to true the pass will validate the poses of all bones" },
	};
#endif
	void Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls_SetBit(void* Obj)
	{
		((UControlRigNumericalValidationPass*)Obj)->bCheckControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls = { "bCheckControls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigNumericalValidationPass), &Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set to true the pass will validate the poses of all bones\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "If set to true the pass will validate the poses of all bones" },
	};
#endif
	void Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones_SetBit(void* Obj)
	{
		((UControlRigNumericalValidationPass*)Obj)->bCheckBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones = { "bCheckBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigNumericalValidationPass), &Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set to true the pass will validate the values of all curves\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "If set to true the pass will validate the values of all curves" },
	};
#endif
	void Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves_SetBit(void* Obj)
	{
		((UControlRigNumericalValidationPass*)Obj)->bCheckCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves = { "bCheckCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigNumericalValidationPass), &Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_TranslationPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_TranslationPrecision = { "TranslationPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigNumericalValidationPass, TranslationPrecision), METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_TranslationPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_TranslationPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_RotationPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass (in degrees)\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_RotationPrecision = { "RotationPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigNumericalValidationPass, RotationPrecision), METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_RotationPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_RotationPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_ScalePrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_ScalePrecision = { "ScalePrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigNumericalValidationPass, ScalePrecision), METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_ScalePrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_ScalePrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_CurvePrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_CurvePrecision = { "CurvePrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigNumericalValidationPass, CurvePrecision), METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_CurvePrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_CurvePrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameA_MetaData[] = {
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameA = { "EventNameA", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigNumericalValidationPass, EventNameA), METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameB_MetaData[] = {
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameB = { "EventNameB", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigNumericalValidationPass, EventNameB), METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_Pose_MetaData[] = {
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigNumericalValidationPass, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_TranslationPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_RotationPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_ScalePrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_CurvePrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_Pose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigNumericalValidationPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::ClassParams = {
		&UControlRigNumericalValidationPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigNumericalValidationPass()
	{
		if (!Z_Registration_Info_UClass_UControlRigNumericalValidationPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigNumericalValidationPass.OuterSingleton, Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigNumericalValidationPass.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigNumericalValidationPass>()
	{
		return UControlRigNumericalValidationPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigNumericalValidationPass);
	UControlRigNumericalValidationPass::~UControlRigNumericalValidationPass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigNumericalValidationPass, UControlRigNumericalValidationPass::StaticClass, TEXT("UControlRigNumericalValidationPass"), &Z_Registration_Info_UClass_UControlRigNumericalValidationPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigNumericalValidationPass), 1406637880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_2867295640(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
