// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/BlendSpaceFactory1D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceFactory1D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceFactory1D();
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceFactory1D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBlendSpaceFactory1D::StaticRegisterNativesUBlendSpaceFactory1D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpaceFactory1D);
	UClass* Z_Construct_UClass_UBlendSpaceFactory1D_NoRegister()
	{
		return UBlendSpaceFactory1D::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpaceFactory1D_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpaceFactory1D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceFactory1D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BlendSpaceFactory1D.h" },
		{ "ModuleRelativePath", "Classes/Factories/BlendSpaceFactory1D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "BlendSpaceFactory" },
		{ "Comment", "/** Target skeleton for the created blendspace */" },
		{ "ModuleRelativePath", "Classes/Factories/BlendSpaceFactory1D.h" },
		{ "ToolTip", "Target skeleton for the created blendspace" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpaceFactory1D, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Category", "BlendSpaceFactory" },
		{ "Comment", "/** The preview mesh to use for the created blendspace */" },
		{ "ModuleRelativePath", "Classes/Factories/BlendSpaceFactory1D.h" },
		{ "ToolTip", "The preview mesh to use for the created blendspace" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpaceFactory1D, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpaceFactory1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceFactory1D_Statics::NewProp_PreviewSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpaceFactory1D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpaceFactory1D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpaceFactory1D_Statics::ClassParams = {
		&UBlendSpaceFactory1D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendSpaceFactory1D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceFactory1D_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceFactory1D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceFactory1D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpaceFactory1D()
	{
		if (!Z_Registration_Info_UClass_UBlendSpaceFactory1D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpaceFactory1D.OuterSingleton, Z_Construct_UClass_UBlendSpaceFactory1D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendSpaceFactory1D.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBlendSpaceFactory1D>()
	{
		return UBlendSpaceFactory1D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpaceFactory1D);
	UBlendSpaceFactory1D::~UBlendSpaceFactory1D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlendSpaceFactory1D, UBlendSpaceFactory1D::StaticClass, TEXT("UBlendSpaceFactory1D"), &Z_Registration_Info_UClass_UBlendSpaceFactory1D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpaceFactory1D), 134315397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_3211030653(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
