// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimLayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimLayerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface();
	ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimLayerInterface::StaticRegisterNativesUAnimLayerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimLayerInterface);
	UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister()
	{
		return UAnimLayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimLayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimLayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimLayerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimLayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimLayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimLayerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimLayerInterface_Statics::ClassParams = {
		&UAnimLayerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimLayerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimLayerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimLayerInterface()
	{
		if (!Z_Registration_Info_UClass_UAnimLayerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimLayerInterface.OuterSingleton, Z_Construct_UClass_UAnimLayerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimLayerInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimLayerInterface>()
	{
		return UAnimLayerInterface::StaticClass();
	}
	UAnimLayerInterface::UAnimLayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimLayerInterface);
	UAnimLayerInterface::~UAnimLayerInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimLayerInterface, UAnimLayerInterface::StaticClass, TEXT("UAnimLayerInterface"), &Z_Registration_Info_UClass_UAnimLayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimLayerInterface), 678932401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_541057591(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
