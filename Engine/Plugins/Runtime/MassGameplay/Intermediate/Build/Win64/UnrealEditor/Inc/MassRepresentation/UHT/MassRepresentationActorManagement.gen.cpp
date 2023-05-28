// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassRepresentationActorManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassRepresentationActorManagement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassRepresentationActorManagement::StaticRegisterNativesUMassRepresentationActorManagement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassRepresentationActorManagement);
	UClass* Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister()
	{
		return UMassRepresentationActorManagement::StaticClass();
	}
	struct Z_Construct_UClass_UMassRepresentationActorManagement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassRepresentationActorManagement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationActorManagement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassRepresentationActorManagement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassRepresentationActorManagement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassRepresentationActorManagement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassRepresentationActorManagement_Statics::ClassParams = {
		&UMassRepresentationActorManagement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationActorManagement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationActorManagement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassRepresentationActorManagement()
	{
		if (!Z_Registration_Info_UClass_UMassRepresentationActorManagement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassRepresentationActorManagement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassRepresentationActorManagement.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassRepresentationActorManagement>()
	{
		return UMassRepresentationActorManagement::StaticClass();
	}
	UMassRepresentationActorManagement::UMassRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassRepresentationActorManagement);
	UMassRepresentationActorManagement::~UMassRepresentationActorManagement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassRepresentationActorManagement, UMassRepresentationActorManagement::StaticClass, TEXT("UMassRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassRepresentationActorManagement), 1677042785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_4001991933(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
