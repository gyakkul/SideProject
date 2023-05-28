// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableActor() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_ACableActor();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_ACableActor_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CableComponent();
// End Cross Module References
	void ACableActor::StaticRegisterNativesACableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACableActor);
	UClass* Z_Construct_UClass_ACableActor_NoRegister()
	{
		return ACableActor::StaticClass();
	}
	struct Z_Construct_UClass_ACableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CableComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CableComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACableActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An actor that renders a simulated cable */" },
		{ "HideCategories", "Input Replication" },
		{ "IncludePath", "CableActor.h" },
		{ "ModuleRelativePath", "Classes/CableActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An actor that renders a simulated cable" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Cable component that performs simulation and rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CableActor.h" },
		{ "ToolTip", "Cable component that performs simulation and rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent = { "CableComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACableActor, CableComponent), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACableActor_Statics::ClassParams = {
		&ACableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACableActor()
	{
		if (!Z_Registration_Info_UClass_ACableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACableActor.OuterSingleton, Z_Construct_UClass_ACableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACableActor.OuterSingleton;
	}
	template<> CABLECOMPONENT_API UClass* StaticClass<ACableActor>()
	{
		return ACableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACableActor);
	ACableActor::~ACableActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACableActor, ACableActor::StaticClass, TEXT("ACableActor"), &Z_Registration_Info_UClass_ACableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACableActor), 2853288067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_836792413(TEXT("/Script/CableComponent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
