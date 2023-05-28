// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/ClassTemplateEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassTemplateEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UClassTemplate();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UClassTemplate_NoRegister();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UClassTemplateEditorSubsystem();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UClassTemplateEditorSubsystem_NoRegister();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UPluginClassTemplate();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UPluginClassTemplate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameProjectGeneration();
// End Cross Module References
	void UClassTemplate::StaticRegisterNativesUClassTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassTemplate);
	UClass* Z_Construct_UClass_UClassTemplate_NoRegister()
	{
		return UClassTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UClassTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedBaseClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_GeneratedBaseClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClassTemplateEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/ClassTemplateEditorSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassTemplate_Statics::NewProp_GeneratedBaseClass_MetaData[] = {
		{ "Comment", "// Base UClass of which template class corresponds.\n" },
		{ "ModuleRelativePath", "Public/ClassTemplateEditorSubsystem.h" },
		{ "ToolTip", "Base UClass of which template class corresponds." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UClassTemplate_Statics::NewProp_GeneratedBaseClass = { "GeneratedBaseClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassTemplate, GeneratedBaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClassTemplate_Statics::NewProp_GeneratedBaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassTemplate_Statics::NewProp_GeneratedBaseClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassTemplate_Statics::NewProp_GeneratedBaseClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassTemplate_Statics::ClassParams = {
		&UClassTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClassTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClassTemplate_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClassTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClassTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassTemplate()
	{
		if (!Z_Registration_Info_UClass_UClassTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassTemplate.OuterSingleton, Z_Construct_UClass_UClassTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassTemplate.OuterSingleton;
	}
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UClassTemplate>()
	{
		return UClassTemplate::StaticClass();
	}
	UClassTemplate::UClassTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassTemplate);
	UClassTemplate::~UClassTemplate() {}
	void UPluginClassTemplate::StaticRegisterNativesUPluginClassTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPluginClassTemplate);
	UClass* Z_Construct_UClass_UPluginClassTemplate_NoRegister()
	{
		return UPluginClassTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UPluginClassTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginClassTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClassTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginClassTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClassTemplateEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/ClassTemplateEditorSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginClassTemplate_Statics::NewProp_PluginName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassTemplateEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginClassTemplate_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginClassTemplate, PluginName), METADATA_PARAMS(Z_Construct_UClass_UPluginClassTemplate_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginClassTemplate_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPluginClassTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginClassTemplate_Statics::NewProp_PluginName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginClassTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginClassTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPluginClassTemplate_Statics::ClassParams = {
		&UPluginClassTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPluginClassTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPluginClassTemplate_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPluginClassTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginClassTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPluginClassTemplate()
	{
		if (!Z_Registration_Info_UClass_UPluginClassTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPluginClassTemplate.OuterSingleton, Z_Construct_UClass_UPluginClassTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPluginClassTemplate.OuterSingleton;
	}
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UPluginClassTemplate>()
	{
		return UPluginClassTemplate::StaticClass();
	}
	UPluginClassTemplate::UPluginClassTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginClassTemplate);
	UPluginClassTemplate::~UPluginClassTemplate() {}
	void UClassTemplateEditorSubsystem::StaticRegisterNativesUClassTemplateEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassTemplateEditorSubsystem);
	UClass* Z_Construct_UClass_UClassTemplateEditorSubsystem_NoRegister()
	{
		return UClassTemplateEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClassTemplateEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/ClassTemplateEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassTemplateEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics::ClassParams = {
		&UClassTemplateEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassTemplateEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UClassTemplateEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassTemplateEditorSubsystem.OuterSingleton, Z_Construct_UClass_UClassTemplateEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassTemplateEditorSubsystem.OuterSingleton;
	}
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UClassTemplateEditorSubsystem>()
	{
		return UClassTemplateEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassTemplateEditorSubsystem);
	UClassTemplateEditorSubsystem::~UClassTemplateEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Public_ClassTemplateEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Public_ClassTemplateEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassTemplate, UClassTemplate::StaticClass, TEXT("UClassTemplate"), &Z_Registration_Info_UClass_UClassTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassTemplate), 1703443467U) },
		{ Z_Construct_UClass_UPluginClassTemplate, UPluginClassTemplate::StaticClass, TEXT("UPluginClassTemplate"), &Z_Registration_Info_UClass_UPluginClassTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPluginClassTemplate), 4194765219U) },
		{ Z_Construct_UClass_UClassTemplateEditorSubsystem, UClassTemplateEditorSubsystem::StaticClass, TEXT("UClassTemplateEditorSubsystem"), &Z_Registration_Info_UClass_UClassTemplateEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassTemplateEditorSubsystem), 2969414027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Public_ClassTemplateEditorSubsystem_h_2576779920(TEXT("/Script/GameProjectGeneration"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Public_ClassTemplateEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Public_ClassTemplateEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
