// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Editor/DetailsViewWrapperObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailsViewWrapperObject() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UDetailsViewWrapperObject();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UDetailsViewWrapperObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UDetailsViewWrapperObject::StaticRegisterNativesUDetailsViewWrapperObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetailsViewWrapperObject);
	UClass* Z_Construct_UClass_UDetailsViewWrapperObject_NoRegister()
	{
		return UDetailsViewWrapperObject::StaticClass();
	}
	struct Z_Construct_UClass_UDetailsViewWrapperObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailsViewWrapperObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsViewWrapperObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/DetailsViewWrapperObject.h" },
		{ "ModuleRelativePath", "Private/Editor/DetailsViewWrapperObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailsViewWrapperObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailsViewWrapperObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetailsViewWrapperObject_Statics::ClassParams = {
		&UDetailsViewWrapperObject::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDetailsViewWrapperObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsViewWrapperObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailsViewWrapperObject()
	{
		if (!Z_Registration_Info_UClass_UDetailsViewWrapperObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetailsViewWrapperObject.OuterSingleton, Z_Construct_UClass_UDetailsViewWrapperObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDetailsViewWrapperObject.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UDetailsViewWrapperObject>()
	{
		return UDetailsViewWrapperObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailsViewWrapperObject);
	UDetailsViewWrapperObject::~UDetailsViewWrapperObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_DetailsViewWrapperObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_DetailsViewWrapperObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDetailsViewWrapperObject, UDetailsViewWrapperObject::StaticClass, TEXT("UDetailsViewWrapperObject"), &Z_Registration_Info_UClass_UDetailsViewWrapperObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetailsViewWrapperObject), 2061915009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_DetailsViewWrapperObject_h_3130546687(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_DetailsViewWrapperObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_DetailsViewWrapperObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
