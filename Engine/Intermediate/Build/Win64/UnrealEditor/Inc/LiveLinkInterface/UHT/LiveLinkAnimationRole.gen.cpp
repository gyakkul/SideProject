// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkAnimationRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkAnimationRole::StaticRegisterNativesULiveLinkAnimationRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkAnimationRole);
	UClass* Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister()
	{
		return ULiveLinkAnimationRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Animation / Skeleton data.\n */" },
		{ "DisplayName", "Animation Role" },
		{ "IncludePath", "Roles/LiveLinkAnimationRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationRole.h" },
		{ "ToolTip", "Role associated for Animation / Skeleton data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationRole_Statics::ClassParams = {
		&ULiveLinkAnimationRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkAnimationRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkAnimationRole.OuterSingleton, Z_Construct_UClass_ULiveLinkAnimationRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkAnimationRole.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkAnimationRole>()
	{
		return ULiveLinkAnimationRole::StaticClass();
	}
	ULiveLinkAnimationRole::ULiveLinkAnimationRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationRole);
	ULiveLinkAnimationRole::~ULiveLinkAnimationRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkAnimationRole, ULiveLinkAnimationRole::StaticClass, TEXT("ULiveLinkAnimationRole"), &Z_Registration_Info_UClass_ULiveLinkAnimationRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkAnimationRole), 2584130598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h_1030634435(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
