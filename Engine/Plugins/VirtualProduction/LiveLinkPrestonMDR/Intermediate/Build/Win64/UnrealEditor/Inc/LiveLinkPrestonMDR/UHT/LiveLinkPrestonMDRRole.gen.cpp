// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkPrestonMDRRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPrestonMDRRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole();
	LIVELINKPRESTONMDR_API UClass* Z_Construct_UClass_ULiveLinkPrestonMDRRole();
	LIVELINKPRESTONMDR_API UClass* Z_Construct_UClass_ULiveLinkPrestonMDRRole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkPrestonMDR();
// End Cross Module References
	void ULiveLinkPrestonMDRRole::StaticRegisterNativesULiveLinkPrestonMDRRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkPrestonMDRRole);
	UClass* Z_Construct_UClass_ULiveLinkPrestonMDRRole_NoRegister()
	{
		return ULiveLinkPrestonMDRRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkCameraRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated with Preston MDR data\n */" },
		{ "DisplayName", "Preston MDR Role" },
		{ "IncludePath", "LiveLinkPrestonMDRRole.h" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRRole.h" },
		{ "ToolTip", "Role associated with Preston MDR data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPrestonMDRRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics::ClassParams = {
		&ULiveLinkPrestonMDRRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkPrestonMDRRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkPrestonMDRRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkPrestonMDRRole.OuterSingleton, Z_Construct_UClass_ULiveLinkPrestonMDRRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkPrestonMDRRole.OuterSingleton;
	}
	template<> LIVELINKPRESTONMDR_API UClass* StaticClass<ULiveLinkPrestonMDRRole>()
	{
		return ULiveLinkPrestonMDRRole::StaticClass();
	}
	ULiveLinkPrestonMDRRole::ULiveLinkPrestonMDRRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPrestonMDRRole);
	ULiveLinkPrestonMDRRole::~ULiveLinkPrestonMDRRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkPrestonMDRRole, ULiveLinkPrestonMDRRole::StaticClass, TEXT("ULiveLinkPrestonMDRRole"), &Z_Registration_Info_UClass_ULiveLinkPrestonMDRRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkPrestonMDRRole), 1011743925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRRole_h_3822523291(TEXT("/Script/LiveLinkPrestonMDR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
