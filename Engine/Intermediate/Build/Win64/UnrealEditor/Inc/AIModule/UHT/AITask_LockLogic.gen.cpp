// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Tasks/AITask_LockLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_LockLogic() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAITask_LockLogic::StaticRegisterNativesUAITask_LockLogic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_LockLogic);
	UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister()
	{
		return UAITask_LockLogic::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_LockLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_LockLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Locks AI logic until removed by external trigger */" },
		{ "IncludePath", "Tasks/AITask_LockLogic.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_LockLogic.h" },
		{ "ToolTip", "Locks AI logic until removed by external trigger" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_LockLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_LockLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_LockLogic_Statics::ClassParams = {
		&UAITask_LockLogic::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask_LockLogic()
	{
		if (!Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton, Z_Construct_UClass_UAITask_LockLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAITask_LockLogic>()
	{
		return UAITask_LockLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_LockLogic);
	UAITask_LockLogic::~UAITask_LockLogic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_LockLogic, UAITask_LockLogic::StaticClass, TEXT("UAITask_LockLogic"), &Z_Registration_Info_UClass_UAITask_LockLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_LockLogic), 3622558515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_3338749288(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
