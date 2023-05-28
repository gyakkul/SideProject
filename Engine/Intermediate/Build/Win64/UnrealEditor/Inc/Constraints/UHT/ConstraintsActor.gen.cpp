// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstraintsActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintsActor() {}
// Cross Module References
	CONSTRAINTS_API UClass* Z_Construct_UClass_AConstraintsActor();
	CONSTRAINTS_API UClass* Z_Construct_UClass_AConstraintsActor_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References
	void AConstraintsActor::StaticRegisterNativesAConstraintsActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConstraintsActor);
	UClass* Z_Construct_UClass_AConstraintsActor_NoRegister()
	{
		return AConstraintsActor::StaticClass();
	}
	struct Z_Construct_UClass_AConstraintsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConstraintsManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstraintsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstraintsActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstraintsActor.h" },
		{ "ModuleRelativePath", "Public/ConstraintsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstraintsActor_Statics::NewProp_ConstraintsManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConstraintsActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConstraintsActor_Statics::NewProp_ConstraintsManager = { "ConstraintsManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConstraintsActor, ConstraintsManager), Z_Construct_UClass_UConstraintsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstraintsActor_Statics::NewProp_ConstraintsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstraintsActor_Statics::NewProp_ConstraintsManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstraintsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstraintsActor_Statics::NewProp_ConstraintsManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstraintsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstraintsActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConstraintsActor_Statics::ClassParams = {
		&AConstraintsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConstraintsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConstraintsActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstraintsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstraintsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstraintsActor()
	{
		if (!Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton, Z_Construct_UClass_AConstraintsActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<AConstraintsActor>()
	{
		return AConstraintsActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstraintsActor);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConstraintsActor, AConstraintsActor::StaticClass, TEXT("AConstraintsActor"), &Z_Registration_Info_UClass_AConstraintsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConstraintsActor), 538675556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_221765700(TEXT("/Script/Constraints"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
