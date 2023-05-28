// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkRole.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRole() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkRole::StaticRegisterNativesULiveLinkRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkRole);
	UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister()
	{
		return ULiveLinkRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkRole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to extend the meaning of incoming live link frames.\n */" },
		{ "IncludePath", "LiveLinkRole.h" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
		{ "ToolTip", "Basic object to extend the meaning of incoming live link frames." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkRole_Statics::ClassParams = {
		&ULiveLinkRole::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkRole.OuterSingleton, Z_Construct_UClass_ULiveLinkRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkRole.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkRole>()
	{
		return ULiveLinkRole::StaticClass();
	}
	ULiveLinkRole::ULiveLinkRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkRole);
	ULiveLinkRole::~ULiveLinkRole() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation;
class UScriptStruct* FLiveLinkSubjectRepresentation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectRepresentation"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectRepresentation>()
{
	return FLiveLinkSubjectRepresentation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectRepresentation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject_MetaData[] = {
		{ "Category", "Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectRepresentation, Subject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject_MetaData)) }; // 930695248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectRepresentation, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectRepresentation",
		sizeof(FLiveLinkSubjectRepresentation),
		alignof(FLiveLinkSubjectRepresentation),
		Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSubjectRepresentation::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewStructOps, TEXT("LiveLinkSubjectRepresentation"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectRepresentation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectRepresentation), 4150041114U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkRole, ULiveLinkRole::StaticClass, TEXT("ULiveLinkRole"), &Z_Registration_Info_UClass_ULiveLinkRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkRole), 67803423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_3908836699(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
