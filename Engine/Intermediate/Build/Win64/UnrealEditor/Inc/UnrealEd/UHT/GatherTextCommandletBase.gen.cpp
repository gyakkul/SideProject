// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GatherTextCommandletBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextCommandletBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextCommandletBase::StaticRegisterNativesUGatherTextCommandletBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGatherTextCommandletBase);
	UClass* Z_Construct_UClass_UGatherTextCommandletBase_NoRegister()
	{
		return UGatherTextCommandletBase::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextCommandletBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextCommandletBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextCommandletBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UGatherTextCommandletBase: Base class for localization commandlets. Just to force certain behaviors and provide helper functionality. \n */" },
		{ "IncludePath", "Commandlets/GatherTextCommandletBase.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextCommandletBase.h" },
		{ "ToolTip", "UGatherTextCommandletBase: Base class for localization commandlets. Just to force certain behaviors and provide helper functionality." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextCommandletBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextCommandletBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextCommandletBase_Statics::ClassParams = {
		&UGatherTextCommandletBase::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextCommandletBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGatherTextCommandletBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextCommandletBase()
	{
		if (!Z_Registration_Info_UClass_UGatherTextCommandletBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGatherTextCommandletBase.OuterSingleton, Z_Construct_UClass_UGatherTextCommandletBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGatherTextCommandletBase.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGatherTextCommandletBase>()
	{
		return UGatherTextCommandletBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextCommandletBase);
	UGatherTextCommandletBase::~UGatherTextCommandletBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGatherTextCommandletBase, UGatherTextCommandletBase::StaticClass, TEXT("UGatherTextCommandletBase"), &Z_Registration_Info_UClass_UGatherTextCommandletBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGatherTextCommandletBase), 3387985517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_3254170234(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
