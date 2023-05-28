// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Subsystems/Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USubsystem::StaticRegisterNativesUSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubsystem);
	UClass* Z_Construct_UClass_USubsystem_NoRegister()
	{
		return USubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Subsystems are auto instanced classes that share the lifetime of certain engine constructs\n * \n *\x09""Currently supported Subsystem lifetimes are:\n *\x09\x09""Engine\x09\x09 -> inherit UEngineSubsystem\n *\x09\x09""Editor\x09\x09 -> inherit UEditorSubsystem\n *\x09\x09GameInstance -> inherit UGameInstanceSubsystem\n *\x09\x09World\x09\x09 -> inherit UWorldSubsystem\n *\x09\x09LocalPlayer\x09 -> inherit ULocalPlayerSubsystem\n *\n *\n *\x09Normal Example:\n *\x09\x09""class UMySystem : public UGameInstanceSubsystem\n *\x09Which can be accessed by:\n *\x09\x09UGameInstance* GameInstance = ...;\n *\x09\x09UMySystem* MySystem = GameInstance->GetSubsystem<UMySystem>();\n *\n *\x09or the following if you need protection from a null GameInstance\n *\x09\x09UGameInstance* GameInstance = ...;\n *\x09\x09UMyGameSubsystem* MySubsystem = UGameInstance::GetSubsystem<MyGameSubsystem>(GameInstance);\n *\n *\n *\x09You can get also define interfaces that can have multiple implementations.\n *\x09Interface Example :\n *      MySystemInterface\n *    With 2 concrete derivative classes:\n *      MyA : public MySystemInterface\n *      MyB : public MySystemInterface\n *\n *\x09Which can be accessed by:\n *\x09\x09UGameInstance* GameInstance = ...;\n *\x09\x09""const TArray<UMyGameSubsystem*>& MySubsystems = GameInstance->GetSubsystemArray<MyGameSubsystem>();\n *\n */" },
		{ "IncludePath", "Subsystems/Subsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/Subsystem.h" },
		{ "ToolTip", "Subsystems are auto instanced classes that share the lifetime of certain engine constructs\n\n   Currently supported Subsystem lifetimes are:\n           Engine           -> inherit UEngineSubsystem\n           Editor           -> inherit UEditorSubsystem\n           GameInstance -> inherit UGameInstanceSubsystem\n           World            -> inherit UWorldSubsystem\n           LocalPlayer      -> inherit ULocalPlayerSubsystem\n\n\n   Normal Example:\n           class UMySystem : public UGameInstanceSubsystem\n   Which can be accessed by:\n           UGameInstance* GameInstance = ...;\n           UMySystem* MySystem = GameInstance->GetSubsystem<UMySystem>();\n\n   or the following if you need protection from a null GameInstance\n           UGameInstance* GameInstance = ...;\n           UMyGameSubsystem* MySubsystem = UGameInstance::GetSubsystem<MyGameSubsystem>(GameInstance);\n\n\n   You can get also define interfaces that can have multiple implementations.\n   Interface Example :\n    MySystemInterface\n  With 2 concrete derivative classes:\n    MyA : public MySystemInterface\n    MyB : public MySystemInterface\n\n   Which can be accessed by:\n           UGameInstance* GameInstance = ...;\n           const TArray<UMyGameSubsystem*>& MySubsystems = GameInstance->GetSubsystemArray<MyGameSubsystem>();" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubsystem_Statics::ClassParams = {
		&USubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubsystem()
	{
		if (!Z_Registration_Info_UClass_USubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubsystem.OuterSingleton, Z_Construct_UClass_USubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USubsystem>()
	{
		return USubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsystem);
	USubsystem::~USubsystem() {}
	void UDynamicSubsystem::StaticRegisterNativesUDynamicSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicSubsystem);
	UClass* Z_Construct_UClass_UDynamicSubsystem_NoRegister()
	{
		return UDynamicSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Dynamic Subsystems auto populate/depopulate existing collections when modules are loaded and unloaded\n *\n * Only UEngineSubsystems and UEditorSubsystems allow for dynamic loading.\n * \n * If instances of your subsystem aren't being created it maybe that the module they are in isn't being explicitly loaded,\n * make sure there is a LoadModule(\"ModuleName\") to load the module.\n */" },
		{ "IncludePath", "Subsystems/Subsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/Subsystem.h" },
		{ "ToolTip", "Dynamic Subsystems auto populate/depopulate existing collections when modules are loaded and unloaded\n\nOnly UEngineSubsystems and UEditorSubsystems allow for dynamic loading.\n\nIf instances of your subsystem aren't being created it maybe that the module they are in isn't being explicitly loaded,\nmake sure there is a LoadModule(\"ModuleName\") to load the module." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicSubsystem_Statics::ClassParams = {
		&UDynamicSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDynamicSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicSubsystem.OuterSingleton, Z_Construct_UClass_UDynamicSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDynamicSubsystem>()
	{
		return UDynamicSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicSubsystem);
	UDynamicSubsystem::~UDynamicSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubsystem, USubsystem::StaticClass, TEXT("USubsystem"), &Z_Registration_Info_UClass_USubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubsystem), 3021567658U) },
		{ Z_Construct_UClass_UDynamicSubsystem, UDynamicSubsystem::StaticClass, TEXT("UDynamicSubsystem"), &Z_Registration_Info_UClass_UDynamicSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicSubsystem), 64694024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_1305639572(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
