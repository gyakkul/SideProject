// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleanHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanHierarchy() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UCleanHierarchy();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UCleanHierarchy_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UCleanHierarchy::StaticRegisterNativesUCleanHierarchy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanHierarchy);
	UClass* Z_Construct_UClass_UCleanHierarchy_NoRegister()
	{
		return UCleanHierarchy::StaticClass();
	}
	struct Z_Construct_UClass_UCleanHierarchy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DSMetadataToPreserve_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DSMetadataToPreserve_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DSMetadataToPreserve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveEmptyBranches_MetaData[];
#endif
		static void NewProp_RemoveEmptyBranches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveEmptyBranches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveIntermediaryActorsWithoutGeometry_MetaData[];
#endif
		static void NewProp_RemoveIntermediaryActorsWithoutGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveIntermediaryActorsWithoutGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCleanHierarchy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanHierarchy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CleanHierarchy.h" },
		{ "ModuleRelativePath", "Public/CleanHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_DSMetadataToPreserve_Inner = { "DSMetadataToPreserve", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_DSMetadataToPreserve_MetaData[] = {
		{ "Category", "CleanHierarchyCommand" },
		{ "ModuleRelativePath", "Public/CleanHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_DSMetadataToPreserve = { "DSMetadataToPreserve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCleanHierarchy, DSMetadataToPreserve), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_DSMetadataToPreserve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_DSMetadataToPreserve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveEmptyBranches_MetaData[] = {
		{ "Category", "CleanHierarchyCommand" },
		{ "ModuleRelativePath", "Public/CleanHierarchy.h" },
	};
#endif
	void Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveEmptyBranches_SetBit(void* Obj)
	{
		((UCleanHierarchy*)Obj)->RemoveEmptyBranches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveEmptyBranches = { "RemoveEmptyBranches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCleanHierarchy), &Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveEmptyBranches_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveEmptyBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveEmptyBranches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveIntermediaryActorsWithoutGeometry_MetaData[] = {
		{ "Category", "CleanHierarchyCommand" },
		{ "ModuleRelativePath", "Public/CleanHierarchy.h" },
	};
#endif
	void Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveIntermediaryActorsWithoutGeometry_SetBit(void* Obj)
	{
		((UCleanHierarchy*)Obj)->RemoveIntermediaryActorsWithoutGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveIntermediaryActorsWithoutGeometry = { "RemoveIntermediaryActorsWithoutGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCleanHierarchy), &Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveIntermediaryActorsWithoutGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveIntermediaryActorsWithoutGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveIntermediaryActorsWithoutGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCleanHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_DSMetadataToPreserve_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_DSMetadataToPreserve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveEmptyBranches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanHierarchy_Statics::NewProp_RemoveIntermediaryActorsWithoutGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCleanHierarchy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanHierarchy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanHierarchy_Statics::ClassParams = {
		&UCleanHierarchy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCleanHierarchy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCleanHierarchy_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCleanHierarchy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanHierarchy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCleanHierarchy()
	{
		if (!Z_Registration_Info_UClass_UCleanHierarchy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanHierarchy.OuterSingleton, Z_Construct_UClass_UCleanHierarchy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCleanHierarchy.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UCleanHierarchy>()
	{
		return UCleanHierarchy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanHierarchy);
	UCleanHierarchy::~UCleanHierarchy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CleanHierarchy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CleanHierarchy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCleanHierarchy, UCleanHierarchy::StaticClass, TEXT("UCleanHierarchy"), &Z_Registration_Info_UClass_UCleanHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanHierarchy), 3464707651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CleanHierarchy_h_32161674(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CleanHierarchy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CleanHierarchy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
