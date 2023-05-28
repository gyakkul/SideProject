// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavAreaBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavAreaBase::StaticRegisterNativesUNavAreaBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavAreaBase);
	UClass* Z_Construct_UClass_UNavAreaBase_NoRegister()
	{
		return UNavAreaBase::StaticClass();
	}
	struct Z_Construct_UClass_UNavAreaBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavAreaBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavAreaBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// a stub class. Actual implementation in NavigationSystem module.\n" },
		{ "IncludePath", "AI/Navigation/NavAreaBase.h" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreaBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "a stub class. Actual implementation in NavigationSystem module." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavAreaBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavAreaBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavAreaBase_Statics::ClassParams = {
		&UNavAreaBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavAreaBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavAreaBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavAreaBase()
	{
		if (!Z_Registration_Info_UClass_UNavAreaBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavAreaBase.OuterSingleton, Z_Construct_UClass_UNavAreaBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavAreaBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNavAreaBase>()
	{
		return UNavAreaBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavAreaBase);
	UNavAreaBase::~UNavAreaBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavAreaBase, UNavAreaBase::StaticClass, TEXT("UNavAreaBase"), &Z_Registration_Info_UClass_UNavAreaBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavAreaBase), 3300604629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_1511640059(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreaBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
