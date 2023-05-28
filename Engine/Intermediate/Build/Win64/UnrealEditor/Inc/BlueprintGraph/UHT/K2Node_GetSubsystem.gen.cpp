// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetSubsystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetSubsystem() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_GetSubsystem::StaticRegisterNativesUK2Node_GetSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetSubsystem);
	UClass* Z_Construct_UClass_UK2Node_GetSubsystem_NoRegister()
	{
		return UK2Node_GetSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass = { "CustomClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_GetSubsystem, CustomClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetSubsystem_Statics::ClassParams = {
		&UK2Node_GetSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetSubsystem()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetSubsystem.OuterSingleton, Z_Construct_UClass_UK2Node_GetSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetSubsystem.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetSubsystem>()
	{
		return UK2Node_GetSubsystem::StaticClass();
	}
	UK2Node_GetSubsystem::UK2Node_GetSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetSubsystem);
	UK2Node_GetSubsystem::~UK2Node_GetSubsystem() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_GetSubsystem)
	void UK2Node_GetSubsystemFromPC::StaticRegisterNativesUK2Node_GetSubsystemFromPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetSubsystemFromPC);
	UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC_NoRegister()
	{
		return UK2Node_GetSubsystemFromPC::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_GetSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetSubsystemFromPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::ClassParams = {
		&UK2Node_GetSubsystemFromPC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetSubsystemFromPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetSubsystemFromPC.OuterSingleton, Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetSubsystemFromPC.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetSubsystemFromPC>()
	{
		return UK2Node_GetSubsystemFromPC::StaticClass();
	}
	UK2Node_GetSubsystemFromPC::UK2Node_GetSubsystemFromPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetSubsystemFromPC);
	UK2Node_GetSubsystemFromPC::~UK2Node_GetSubsystemFromPC() {}
	void UK2Node_GetEngineSubsystem::StaticRegisterNativesUK2Node_GetEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetEngineSubsystem);
	UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem_NoRegister()
	{
		return UK2Node_GetEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_GetSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::ClassParams = {
		&UK2Node_GetEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetEngineSubsystem.OuterSingleton, Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetEngineSubsystem.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetEngineSubsystem>()
	{
		return UK2Node_GetEngineSubsystem::StaticClass();
	}
	UK2Node_GetEngineSubsystem::UK2Node_GetEngineSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetEngineSubsystem);
	UK2Node_GetEngineSubsystem::~UK2Node_GetEngineSubsystem() {}
	void UK2Node_GetEditorSubsystem::StaticRegisterNativesUK2Node_GetEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetEditorSubsystem);
	UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem_NoRegister()
	{
		return UK2Node_GetEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_GetSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::ClassParams = {
		&UK2Node_GetEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetEditorSubsystem.OuterSingleton, Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetEditorSubsystem.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetEditorSubsystem>()
	{
		return UK2Node_GetEditorSubsystem::StaticClass();
	}
	UK2Node_GetEditorSubsystem::UK2Node_GetEditorSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetEditorSubsystem);
	UK2Node_GetEditorSubsystem::~UK2Node_GetEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetSubsystem, UK2Node_GetSubsystem::StaticClass, TEXT("UK2Node_GetSubsystem"), &Z_Registration_Info_UClass_UK2Node_GetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetSubsystem), 2472971199U) },
		{ Z_Construct_UClass_UK2Node_GetSubsystemFromPC, UK2Node_GetSubsystemFromPC::StaticClass, TEXT("UK2Node_GetSubsystemFromPC"), &Z_Registration_Info_UClass_UK2Node_GetSubsystemFromPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetSubsystemFromPC), 230077834U) },
		{ Z_Construct_UClass_UK2Node_GetEngineSubsystem, UK2Node_GetEngineSubsystem::StaticClass, TEXT("UK2Node_GetEngineSubsystem"), &Z_Registration_Info_UClass_UK2Node_GetEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetEngineSubsystem), 1143599400U) },
		{ Z_Construct_UClass_UK2Node_GetEditorSubsystem, UK2Node_GetEditorSubsystem::StaticClass, TEXT("UK2Node_GetEditorSubsystem"), &Z_Registration_Info_UClass_UK2Node_GetEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetEditorSubsystem), 3395005490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetSubsystem_h_3992472018(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
