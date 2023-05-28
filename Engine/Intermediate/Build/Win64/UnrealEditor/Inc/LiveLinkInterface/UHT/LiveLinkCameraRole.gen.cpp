// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkCameraRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCameraRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkCameraRole::StaticRegisterNativesULiveLinkCameraRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkCameraRole);
	UClass* Z_Construct_UClass_ULiveLinkCameraRole_NoRegister()
	{
		return ULiveLinkCameraRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkCameraRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkCameraRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkTransformRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Camera data.\n */" },
		{ "DisplayName", "Camera Role" },
		{ "IncludePath", "Roles/LiveLinkCameraRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraRole.h" },
		{ "ToolTip", "Role associated for Camera data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkCameraRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkCameraRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkCameraRole_Statics::ClassParams = {
		&ULiveLinkCameraRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkCameraRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton, Z_Construct_UClass_ULiveLinkCameraRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkCameraRole>()
	{
		return ULiveLinkCameraRole::StaticClass();
	}
	ULiveLinkCameraRole::ULiveLinkCameraRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkCameraRole);
	ULiveLinkCameraRole::~ULiveLinkCameraRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkCameraRole, ULiveLinkCameraRole::StaticClass, TEXT("ULiveLinkCameraRole"), &Z_Registration_Info_UClass_ULiveLinkCameraRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkCameraRole), 2797709071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_2790878388(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
