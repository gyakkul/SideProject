// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IPersonaEditorModeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPersonaEditorModeManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaEditorModeManagerContext();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaEditorModeManagerContext_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaManagerContext();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaManagerContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaManagerContext::StaticRegisterNativesUPersonaManagerContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaManagerContext);
	UClass* Z_Construct_UClass_UPersonaManagerContext_NoRegister()
	{
		return UPersonaManagerContext::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaManagerContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaManagerContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaManagerContext_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IPersonaEditorModeManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaManagerContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPersonaManagerContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaManagerContext_Statics::ClassParams = {
		&UPersonaManagerContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPersonaManagerContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaManagerContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaManagerContext()
	{
		if (!Z_Registration_Info_UClass_UPersonaManagerContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaManagerContext.OuterSingleton, Z_Construct_UClass_UPersonaManagerContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaManagerContext.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaManagerContext>()
	{
		return UPersonaManagerContext::StaticClass();
	}
	UPersonaManagerContext::UPersonaManagerContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaManagerContext);
	UPersonaManagerContext::~UPersonaManagerContext() {}
	void UPersonaEditorModeManagerContext::StaticRegisterNativesUPersonaEditorModeManagerContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaEditorModeManagerContext);
	UClass* Z_Construct_UClass_UPersonaEditorModeManagerContext_NoRegister()
	{
		return UPersonaEditorModeManagerContext::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IPersonaEditorModeManager.h" },
		{ "ModuleRelativePath", "Public/IPersonaEditorModeManager.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPersonaManagerContext_NoRegister, (int32)VTABLE_OFFSET(UPersonaEditorModeManagerContext, IPersonaManagerContext), false },  // 692853551
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaEditorModeManagerContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::ClassParams = {
		&UPersonaEditorModeManagerContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaEditorModeManagerContext()
	{
		if (!Z_Registration_Info_UClass_UPersonaEditorModeManagerContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaEditorModeManagerContext.OuterSingleton, Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaEditorModeManagerContext.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaEditorModeManagerContext>()
	{
		return UPersonaEditorModeManagerContext::StaticClass();
	}
	UPersonaEditorModeManagerContext::UPersonaEditorModeManagerContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaEditorModeManagerContext);
	UPersonaEditorModeManagerContext::~UPersonaEditorModeManagerContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaManagerContext, UPersonaManagerContext::StaticClass, TEXT("UPersonaManagerContext"), &Z_Registration_Info_UClass_UPersonaManagerContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaManagerContext), 692853551U) },
		{ Z_Construct_UClass_UPersonaEditorModeManagerContext, UPersonaEditorModeManagerContext::StaticClass, TEXT("UPersonaEditorModeManagerContext"), &Z_Registration_Info_UClass_UPersonaEditorModeManagerContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaEditorModeManagerContext), 759550297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_1259717788(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
