// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMorphTarget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMorphTarget::StaticRegisterNativesUMorphTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMorphTarget);
	UClass* Z_Construct_UClass_UMorphTarget_NoRegister()
	{
		return UMorphTarget::StaticClass();
	}
	struct Z_Construct_UClass_UMorphTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSkelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseSkelMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMorphTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMorphTarget_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/MorphTarget.h" },
		{ "ModuleRelativePath", "Classes/Animation/MorphTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh_MetaData[] = {
		{ "Comment", "/** USkeletalMesh that this vertex animation works on. */" },
		{ "ModuleRelativePath", "Classes/Animation/MorphTarget.h" },
		{ "ToolTip", "USkeletalMesh that this vertex animation works on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh = { "BaseSkelMesh", nullptr, (EPropertyFlags)0x0014010000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMorphTarget, BaseSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMorphTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMorphTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMorphTarget_Statics::ClassParams = {
		&UMorphTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMorphTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMorphTarget_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMorphTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMorphTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMorphTarget()
	{
		if (!Z_Registration_Info_UClass_UMorphTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMorphTarget.OuterSingleton, Z_Construct_UClass_UMorphTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMorphTarget.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMorphTarget>()
	{
		return UMorphTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMorphTarget);
	UMorphTarget::~UMorphTarget() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMorphTarget)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMorphTarget, UMorphTarget::StaticClass, TEXT("UMorphTarget"), &Z_Registration_Info_UClass_UMorphTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMorphTarget), 2773366639U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_997122550(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
