// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo;
class UScriptStruct* FBehaviorTreeTemplateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BehaviorTreeTemplateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBehaviorTreeTemplateInfo>()
{
	return FBehaviorTreeTemplateInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Template;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorTreeTemplateInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset_MetaData[] = {
		{ "Comment", "/** behavior tree asset */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "behavior tree asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBehaviorTreeTemplateInfo, Asset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template_MetaData[] = {
		{ "Comment", "/** initialized template */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "initialized template" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBehaviorTreeTemplateInfo, Template), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BehaviorTreeTemplateInfo",
		sizeof(FBehaviorTreeTemplateInfo),
		alignof(FBehaviorTreeTemplateInfo),
		Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.InnerSingleton, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.InnerSingleton;
	}
	void UBehaviorTreeManager::StaticRegisterNativesUBehaviorTreeManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeManager);
	UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister()
	{
		return UBehaviorTreeManager::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDebuggerSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDebuggerSteps;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedTemplates;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BehaviorTreeManager.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps_MetaData[] = {
		{ "Comment", "/** limit for recording execution steps for debugger */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "limit for recording execution steps for debugger" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps = { "MaxDebuggerSteps", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeManager, MaxDebuggerSteps), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_Inner = { "LoadedTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo, METADATA_PARAMS(nullptr, 0) }; // 1207115213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_MetaData[] = {
		{ "Comment", "/** initialized tree templates */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "initialized tree templates" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates = { "LoadedTemplates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeManager, LoadedTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_MetaData)) }; // 1207115213
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_Inner = { "ActiveComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents = { "ActiveComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeManager, ActiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeManager_Statics::ClassParams = {
		&UBehaviorTreeManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeManager()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton, Z_Construct_UClass_UBehaviorTreeManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeManager>()
	{
		return UBehaviorTreeManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeManager);
	UBehaviorTreeManager::~UBehaviorTreeManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ScriptStructInfo[] = {
		{ FBehaviorTreeTemplateInfo::StaticStruct, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewStructOps, TEXT("BehaviorTreeTemplateInfo"), &Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBehaviorTreeTemplateInfo), 1207115213U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeManager, UBehaviorTreeManager::StaticClass, TEXT("UBehaviorTreeManager"), &Z_Registration_Info_UClass_UBehaviorTreeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeManager), 1462055981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_796694425(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
