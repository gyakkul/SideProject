// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRigProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigProcessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver_NoRegister();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FGoalBone();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoalBone;
class UScriptStruct* FGoalBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoalBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoalBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoalBone, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("GoalBone"));
	}
	return Z_Registration_Info_UScriptStruct_GoalBone.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FGoalBone>()
{
	return FGoalBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoalBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalBone_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IKRigProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoalBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoalBone>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoalBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"GoalBone",
		sizeof(FGoalBone),
		alignof(FGoalBone),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoalBone()
	{
		if (!Z_Registration_Info_UScriptStruct_GoalBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoalBone.InnerSingleton, Z_Construct_UScriptStruct_FGoalBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GoalBone.InnerSingleton;
	}
	void UIKRigProcessor::StaticRegisterNativesUIKRigProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigProcessor);
	UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister()
	{
		return UIKRigProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Solvers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Solvers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Solvers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IKRigProcessor.h" },
		{ "ModuleRelativePath", "Public/IKRigProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers_Inner = { "Solvers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIKRigSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers_MetaData[] = {
		{ "Comment", "/** the stack of solvers to run in order */" },
		{ "ModuleRelativePath", "Public/IKRigProcessor.h" },
		{ "ToolTip", "the stack of solvers to run in order" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers = { "Solvers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigProcessor, Solvers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigProcessor_Statics::ClassParams = {
		&UIKRigProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRigProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigProcessor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigProcessor()
	{
		if (!Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton, Z_Construct_UClass_UIKRigProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRigProcessor>()
	{
		return UIKRigProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigProcessor);
	UIKRigProcessor::~UIKRigProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_Statics::ScriptStructInfo[] = {
		{ FGoalBone::StaticStruct, Z_Construct_UScriptStruct_FGoalBone_Statics::NewStructOps, TEXT("GoalBone"), &Z_Registration_Info_UScriptStruct_GoalBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoalBone), 4214728586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigProcessor, UIKRigProcessor::StaticClass, TEXT("UIKRigProcessor"), &Z_Registration_Info_UClass_UIKRigProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigProcessor), 921068826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_3622051409(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigProcessor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
