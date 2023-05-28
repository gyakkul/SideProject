// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ChaosSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolver() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolver();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolver_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	void UChaosSolver::StaticRegisterNativesUChaosSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosSolver);
	UClass* Z_Construct_UClass_UChaosSolver_NoRegister()
	{
		return UChaosSolver::StaticClass();
	}
	struct Z_Construct_UClass_UChaosSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UChaosSolver (UObject)\n*\n*/" },
		{ "IncludePath", "Chaos/ChaosSolver.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UChaosSolver (UObject)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolver_Statics::ClassParams = {
		&UChaosSolver::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosSolver()
	{
		if (!Z_Registration_Info_UClass_UChaosSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosSolver.OuterSingleton, Z_Construct_UClass_UChaosSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosSolver.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolver>()
	{
		return UChaosSolver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolver);
	UChaosSolver::~UChaosSolver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosSolver, UChaosSolver::StaticClass, TEXT("UChaosSolver"), &Z_Registration_Info_UClass_UChaosSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosSolver), 3846039521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_616816097(TEXT("/Script/ChaosSolverEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
