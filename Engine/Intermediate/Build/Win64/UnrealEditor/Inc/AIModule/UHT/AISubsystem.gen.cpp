// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/AISubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISubsystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISubsystem::StaticRegisterNativesUAISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISubsystem);
	UClass* Z_Construct_UClass_UAISubsystem_NoRegister()
	{
		return UAISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AISystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A class representing a common interface and behavior for AI subsystems */" },
		{ "IncludePath", "AISubsystem.h" },
		{ "ModuleRelativePath", "Classes/AISubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class representing a common interface and behavior for AI subsystems" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem = { "AISystem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISubsystem, AISystem), Z_Construct_UClass_UAISystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISubsystem_Statics::NewProp_AISystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISubsystem_Statics::ClassParams = {
		&UAISubsystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISubsystem()
	{
		if (!Z_Registration_Info_UClass_UAISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISubsystem.OuterSingleton, Z_Construct_UClass_UAISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISubsystem.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISubsystem>()
	{
		return UAISubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISubsystem);
	UAISubsystem::~UAISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISubsystem, UAISubsystem::StaticClass, TEXT("UAISubsystem"), &Z_Registration_Info_UClass_UAISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISubsystem), 2935762391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_4134889262(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
