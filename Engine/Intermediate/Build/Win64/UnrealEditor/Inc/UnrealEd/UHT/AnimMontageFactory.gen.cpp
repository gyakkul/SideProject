// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/AnimMontageFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMontageFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAnimMontageFactory();
	UNREALED_API UClass* Z_Construct_UClass_UAnimMontageFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimMontageFactory::StaticRegisterNativesUAnimMontageFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimMontageFactory);
	UClass* Z_Construct_UClass_UAnimMontageFactory_NoRegister()
	{
		return UAnimMontageFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimMontageFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimMontageFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontageFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AnimMontageFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AnimMontageFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Classes/Factories/AnimMontageFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontageFactory, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_SourceAnimation_MetaData[] = {
		{ "Category", "Scripting" },
		{ "Comment", "/* Used when creating a montage from an AnimSequence, becomes the only AnimSequence contained */" },
		{ "ModuleRelativePath", "Classes/Factories/AnimMontageFactory.h" },
		{ "ToolTip", "Used when creating a montage from an AnimSequence, becomes the only AnimSequence contained" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_SourceAnimation = { "SourceAnimation", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontageFactory, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_SourceAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_SourceAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The preview mesh to use with this animation */" },
		{ "ModuleRelativePath", "Classes/Factories/AnimMontageFactory.h" },
		{ "ToolTip", "The preview mesh to use with this animation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontageFactory, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimMontageFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_SourceAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontageFactory_Statics::NewProp_PreviewSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimMontageFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimMontageFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimMontageFactory_Statics::ClassParams = {
		&UAnimMontageFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimMontageFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontageFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimMontageFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontageFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimMontageFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimMontageFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimMontageFactory.OuterSingleton, Z_Construct_UClass_UAnimMontageFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimMontageFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimMontageFactory>()
	{
		return UAnimMontageFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMontageFactory);
	UAnimMontageFactory::~UAnimMontageFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimMontageFactory, UAnimMontageFactory::StaticClass, TEXT("UAnimMontageFactory"), &Z_Registration_Info_UClass_UAnimMontageFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimMontageFactory), 1675993322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_1230329128(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
