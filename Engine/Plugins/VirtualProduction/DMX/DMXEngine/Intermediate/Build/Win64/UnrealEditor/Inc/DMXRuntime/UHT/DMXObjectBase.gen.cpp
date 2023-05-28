// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXObjectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXObjectBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXObjectBase();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXObjectBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXObjectBase::StaticRegisterNativesUDMXObjectBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXObjectBase);
	UClass* Z_Construct_UClass_UDMXObjectBase_NoRegister()
	{
		return UDMXObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UDMXObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXObjectBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Library/DMXObjectBase.h" },
		{ "ModuleRelativePath", "Public/Library/DMXObjectBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXObjectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXObjectBase_Statics::ClassParams = {
		&UDMXObjectBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXObjectBase()
	{
		if (!Z_Registration_Info_UClass_UDMXObjectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXObjectBase.OuterSingleton, Z_Construct_UClass_UDMXObjectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXObjectBase.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXObjectBase>()
	{
		return UDMXObjectBase::StaticClass();
	}
	UDMXObjectBase::UDMXObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXObjectBase);
	UDMXObjectBase::~UDMXObjectBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXObjectBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXObjectBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXObjectBase, UDMXObjectBase::StaticClass, TEXT("UDMXObjectBase"), &Z_Registration_Info_UClass_UDMXObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXObjectBase), 3480006778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXObjectBase_h_3079290761(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXObjectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXObjectBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
