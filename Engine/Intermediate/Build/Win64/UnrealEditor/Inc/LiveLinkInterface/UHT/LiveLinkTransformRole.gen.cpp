// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkTransformRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkTransformRole::StaticRegisterNativesULiveLinkTransformRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTransformRole);
	UClass* Z_Construct_UClass_ULiveLinkTransformRole_NoRegister()
	{
		return ULiveLinkTransformRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTransformRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTransformRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Camera data.\n */" },
		{ "DisplayName", "Transform Role" },
		{ "IncludePath", "Roles/LiveLinkTransformRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
		{ "ToolTip", "Role associated for Camera data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTransformRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformRole_Statics::ClassParams = {
		&ULiveLinkTransformRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTransformRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton, Z_Construct_UClass_ULiveLinkTransformRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkTransformRole>()
	{
		return ULiveLinkTransformRole::StaticClass();
	}
	ULiveLinkTransformRole::ULiveLinkTransformRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformRole);
	ULiveLinkTransformRole::~ULiveLinkTransformRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTransformRole, ULiveLinkTransformRole::StaticClass, TEXT("ULiveLinkTransformRole"), &Z_Registration_Info_UClass_ULiveLinkTransformRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTransformRole), 245499995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_357347447(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
