// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvQueryItemType_SmartObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_SmartObject() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_SmartObject();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_SmartObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void UEnvQueryItemType_SmartObject::StaticRegisterNativesUEnvQueryItemType_SmartObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_SmartObject);
	UClass* Z_Construct_UClass_UEnvQueryItemType_SmartObject_NoRegister()
	{
		return UEnvQueryItemType_SmartObject::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_VectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryItemType_SmartObject.h" },
		{ "ModuleRelativePath", "Public/EnvQueryItemType_SmartObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_SmartObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics::ClassParams = {
		&UEnvQueryItemType_SmartObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryItemType_SmartObject()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryItemType_SmartObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_SmartObject.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_SmartObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryItemType_SmartObject.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<UEnvQueryItemType_SmartObject>()
	{
		return UEnvQueryItemType_SmartObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_SmartObject);
	UEnvQueryItemType_SmartObject::~UEnvQueryItemType_SmartObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryItemType_SmartObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryItemType_SmartObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_SmartObject, UEnvQueryItemType_SmartObject::StaticClass, TEXT("UEnvQueryItemType_SmartObject"), &Z_Registration_Info_UClass_UEnvQueryItemType_SmartObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_SmartObject), 3870076306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryItemType_SmartObject_h_558854108(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryItemType_SmartObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_EnvQueryItemType_SmartObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
