// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Interfaces/Interface_AsyncCompilation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_AsyncCompilation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_AsyncCompilation::StaticRegisterNativesUInterface_AsyncCompilation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_AsyncCompilation);
	UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister()
	{
		return UInterface_AsyncCompilation::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_AsyncCompilation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_AsyncCompilation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_AsyncCompilation_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_AsyncCompilation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_AsyncCompilation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_AsyncCompilation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_AsyncCompilation_Statics::ClassParams = {
		&UInterface_AsyncCompilation::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_AsyncCompilation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_AsyncCompilation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_AsyncCompilation()
	{
		if (!Z_Registration_Info_UClass_UInterface_AsyncCompilation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_AsyncCompilation.OuterSingleton, Z_Construct_UClass_UInterface_AsyncCompilation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterface_AsyncCompilation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterface_AsyncCompilation>()
	{
		return UInterface_AsyncCompilation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_AsyncCompilation);
	UInterface_AsyncCompilation::~UInterface_AsyncCompilation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_AsyncCompilation, UInterface_AsyncCompilation::StaticClass, TEXT("UInterface_AsyncCompilation"), &Z_Registration_Info_UClass_UInterface_AsyncCompilation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_AsyncCompilation), 30865164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_3980563865(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
