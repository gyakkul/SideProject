// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialInstanceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMaterialInstanceActor();
	ENGINE_API UClass* Z_Construct_UClass_AMaterialInstanceActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AMaterialInstanceActor::StaticRegisterNativesAMaterialInstanceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaterialInstanceActor);
	UClass* Z_Construct_UClass_AMaterialInstanceActor_NoRegister()
	{
		return AMaterialInstanceActor::StaticClass();
	}
	struct Z_Construct_UClass_AMaterialInstanceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaterialInstanceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Movement Advanced Collision Display Actor Attachment" },
		{ "IncludePath", "Materials/MaterialInstanceActor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_MetaData[] = {
		{ "Category", "MaterialInstanceActor" },
		{ "Comment", "/** Pointer to actors that we want to control paramters of using Matinee. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceActor.h" },
		{ "ToolTip", "Pointer to actors that we want to control paramters of using Matinee." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMaterialInstanceActor, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaterialInstanceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaterialInstanceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaterialInstanceActor_Statics::ClassParams = {
		&AMaterialInstanceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaterialInstanceActor()
	{
		if (!Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton, Z_Construct_UClass_AMaterialInstanceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AMaterialInstanceActor>()
	{
		return AMaterialInstanceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaterialInstanceActor);
	AMaterialInstanceActor::~AMaterialInstanceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMaterialInstanceActor, AMaterialInstanceActor::StaticClass, TEXT("AMaterialInstanceActor"), &Z_Registration_Info_UClass_AMaterialInstanceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaterialInstanceActor), 4103210461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_2005817842(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
