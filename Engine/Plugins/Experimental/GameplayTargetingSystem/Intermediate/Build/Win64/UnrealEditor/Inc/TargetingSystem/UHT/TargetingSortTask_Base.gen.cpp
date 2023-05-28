// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Tasks/TargetingSortTask_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSortTask_Base() {}
// Cross Module References
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSortTask_Base();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSortTask_Base_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UTargetingSortTask_Base::StaticRegisterNativesUTargetingSortTask_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingSortTask_Base);
	UClass* Z_Construct_UClass_UTargetingSortTask_Base_NoRegister()
	{
		return UTargetingSortTask_Base::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingSortTask_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAscending_MetaData[];
#endif
		static void NewProp_bAscending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAscending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingSortTask_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingTask,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSortTask_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n*\x09@class TargetingSortTask_Base\n*\n*\x09""A base class that has the basic setup for a sort task.\n*/" },
		{ "IncludePath", "Tasks/TargetingSortTask_Base.h" },
		{ "ModuleRelativePath", "Tasks/TargetingSortTask_Base.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class TargetingSortTask_Base\n\nA base class that has the basic setup for a sort task." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSortTask_Base_Statics::NewProp_bAscending_MetaData[] = {
		{ "Category", "Target Sorting | Data" },
		{ "ModuleRelativePath", "Tasks/TargetingSortTask_Base.h" },
	};
#endif
	void Z_Construct_UClass_UTargetingSortTask_Base_Statics::NewProp_bAscending_SetBit(void* Obj)
	{
		((UTargetingSortTask_Base*)Obj)->bAscending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSortTask_Base_Statics::NewProp_bAscending = { "bAscending", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTargetingSortTask_Base), &Z_Construct_UClass_UTargetingSortTask_Base_Statics::NewProp_bAscending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingSortTask_Base_Statics::NewProp_bAscending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSortTask_Base_Statics::NewProp_bAscending_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingSortTask_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSortTask_Base_Statics::NewProp_bAscending,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingSortTask_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSortTask_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSortTask_Base_Statics::ClassParams = {
		&UTargetingSortTask_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetingSortTask_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSortTask_Base_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingSortTask_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSortTask_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingSortTask_Base()
	{
		if (!Z_Registration_Info_UClass_UTargetingSortTask_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSortTask_Base.OuterSingleton, Z_Construct_UClass_UTargetingSortTask_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingSortTask_Base.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingSortTask_Base>()
	{
		return UTargetingSortTask_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSortTask_Base);
	UTargetingSortTask_Base::~UTargetingSortTask_Base() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSortTask_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSortTask_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSortTask_Base, UTargetingSortTask_Base::StaticClass, TEXT("UTargetingSortTask_Base"), &Z_Registration_Info_UClass_UTargetingSortTask_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSortTask_Base), 1818081268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSortTask_Base_h_3746654940(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSortTask_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSortTask_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
