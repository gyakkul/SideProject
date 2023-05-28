// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkLensRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLensRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole();
	LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensRole();
	LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensRole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkLens();
// End Cross Module References
	void ULiveLinkLensRole::StaticRegisterNativesULiveLinkLensRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkLensRole);
	UClass* Z_Construct_UClass_ULiveLinkLensRole_NoRegister()
	{
		return ULiveLinkLensRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkLensRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkLensRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkCameraRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkLens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLensRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated with lens data\n */" },
		{ "DisplayName", "Lens Role" },
		{ "IncludePath", "LiveLinkLensRole.h" },
		{ "ModuleRelativePath", "Public/LiveLinkLensRole.h" },
		{ "ToolTip", "Role associated with lens data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkLensRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkLensRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkLensRole_Statics::ClassParams = {
		&ULiveLinkLensRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLensRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLensRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkLensRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkLensRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkLensRole.OuterSingleton, Z_Construct_UClass_ULiveLinkLensRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkLensRole.OuterSingleton;
	}
	template<> LIVELINKLENS_API UClass* StaticClass<ULiveLinkLensRole>()
	{
		return ULiveLinkLensRole::StaticClass();
	}
	ULiveLinkLensRole::ULiveLinkLensRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkLensRole);
	ULiveLinkLensRole::~ULiveLinkLensRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkLensRole, ULiveLinkLensRole::StaticClass, TEXT("ULiveLinkLensRole"), &Z_Registration_Info_UClass_ULiveLinkLensRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkLensRole), 826045063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_733701362(TEXT("/Script/LiveLinkLens"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
