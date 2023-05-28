// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ObjectTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectTrace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UObjectTraceWorldSubsystem::StaticRegisterNativesUObjectTraceWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectTraceWorldSubsystem);
	UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister()
	{
		return UObjectTraceWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// World subsystem used to track world info\n" },
		{ "IncludePath", "ObjectTrace.h" },
		{ "ModuleRelativePath", "Public/ObjectTrace.h" },
		{ "ToolTip", "World subsystem used to track world info" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectTraceWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::ClassParams = {
		&UObjectTraceWorldSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton, Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UObjectTraceWorldSubsystem>()
	{
		return UObjectTraceWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectTraceWorldSubsystem);
	UObjectTraceWorldSubsystem::~UObjectTraceWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectTraceWorldSubsystem, UObjectTraceWorldSubsystem::StaticClass, TEXT("UObjectTraceWorldSubsystem"), &Z_Registration_Info_UClass_UObjectTraceWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectTraceWorldSubsystem), 2387089342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_680002694(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
