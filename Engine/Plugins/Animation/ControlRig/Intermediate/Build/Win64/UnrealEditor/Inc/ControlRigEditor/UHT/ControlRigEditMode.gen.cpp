// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditMode/ControlRigEditMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigEditMode() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEditModeDelegateHelper();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEditModeDelegateHelper_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	DEFINE_FUNCTION(UControlRigEditModeDelegateHelper::execPostPoseUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostPoseUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigEditModeDelegateHelper::execOnPoseInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPoseInitialized();
		P_NATIVE_END;
	}
	void UControlRigEditModeDelegateHelper::StaticRegisterNativesUControlRigEditModeDelegateHelper()
	{
		UClass* Class = UControlRigEditModeDelegateHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPoseInitialized", &UControlRigEditModeDelegateHelper::execOnPoseInitialized },
			{ "PostPoseUpdate", &UControlRigEditModeDelegateHelper::execPostPoseUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigEditModeDelegateHelper, nullptr, "OnPoseInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigEditModeDelegateHelper, nullptr, "PostPoseUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigEditModeDelegateHelper);
	UClass* Z_Construct_UClass_UControlRigEditModeDelegateHelper_NoRegister()
	{
		return UControlRigEditModeDelegateHelper::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigEditModeDelegateHelper_OnPoseInitialized, "OnPoseInitialized" }, // 3761820698
		{ &Z_Construct_UFunction_UControlRigEditModeDelegateHelper_PostPoseUpdate, "PostPoseUpdate" }, // 1717998942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditMode/ControlRigEditMode.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigEditModeDelegateHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::ClassParams = {
		&UControlRigEditModeDelegateHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigEditModeDelegateHelper()
	{
		if (!Z_Registration_Info_UClass_UControlRigEditModeDelegateHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigEditModeDelegateHelper.OuterSingleton, Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigEditModeDelegateHelper.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigEditModeDelegateHelper>()
	{
		return UControlRigEditModeDelegateHelper::StaticClass();
	}
	UControlRigEditModeDelegateHelper::UControlRigEditModeDelegateHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigEditModeDelegateHelper);
	UControlRigEditModeDelegateHelper::~UControlRigEditModeDelegateHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigEditModeDelegateHelper, UControlRigEditModeDelegateHelper::StaticClass, TEXT("UControlRigEditModeDelegateHelper"), &Z_Registration_Info_UClass_UControlRigEditModeDelegateHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigEditModeDelegateHelper), 4286289984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditMode_h_3327300345(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
