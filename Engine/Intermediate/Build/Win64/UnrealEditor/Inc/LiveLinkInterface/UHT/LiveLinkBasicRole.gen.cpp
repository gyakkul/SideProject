// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkBasicRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkBasicRole::StaticRegisterNativesULiveLinkBasicRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkBasicRole);
	UClass* Z_Construct_UClass_ULiveLinkBasicRole_NoRegister()
	{
		return ULiveLinkBasicRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBasicRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBasicRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for no specific role data.\n */" },
		{ "DisplayName", "Basic Role" },
		{ "IncludePath", "Roles/LiveLinkBasicRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicRole.h" },
		{ "ToolTip", "Role associated for no specific role data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBasicRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBasicRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBasicRole_Statics::ClassParams = {
		&ULiveLinkBasicRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBasicRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkBasicRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkBasicRole.OuterSingleton, Z_Construct_UClass_ULiveLinkBasicRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkBasicRole.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkBasicRole>()
	{
		return ULiveLinkBasicRole::StaticClass();
	}
	ULiveLinkBasicRole::ULiveLinkBasicRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBasicRole);
	ULiveLinkBasicRole::~ULiveLinkBasicRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkBasicRole, ULiveLinkBasicRole::StaticClass, TEXT("ULiveLinkBasicRole"), &Z_Registration_Info_UClass_ULiveLinkBasicRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkBasicRole), 543286365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_2093722279(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
