// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptableToolSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptableToolSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolSet();
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolSet_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseScriptableToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorScriptableToolsFramework();
// End Cross Module References
	void UScriptableToolSet::StaticRegisterNativesUScriptableToolSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableToolSet);
	UClass* Z_Construct_UClass_UScriptableToolSet_NoRegister()
	{
		return UScriptableToolSet::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableToolSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolBuilders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolBuilders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolBuilders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableToolSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptableToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableToolSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScriptableToolSet represents a set of UScriptableInteractiveTool types.\n */" },
		{ "IncludePath", "ScriptableToolSet.h" },
		{ "ModuleRelativePath", "Public/ScriptableToolSet.h" },
		{ "ToolTip", "UScriptableToolSet represents a set of UScriptableInteractiveTool types." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableToolSet_Statics::NewProp_ToolBuilders_Inner = { "ToolBuilders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBaseScriptableToolBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableToolSet_Statics::NewProp_ToolBuilders_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScriptableToolSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScriptableToolSet_Statics::NewProp_ToolBuilders = { "ToolBuilders", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableToolSet, ToolBuilders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScriptableToolSet_Statics::NewProp_ToolBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableToolSet_Statics::NewProp_ToolBuilders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptableToolSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableToolSet_Statics::NewProp_ToolBuilders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableToolSet_Statics::NewProp_ToolBuilders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableToolSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableToolSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableToolSet_Statics::ClassParams = {
		&UScriptableToolSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScriptableToolSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableToolSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableToolSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableToolSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableToolSet()
	{
		if (!Z_Registration_Info_UClass_UScriptableToolSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableToolSet.OuterSingleton, Z_Construct_UClass_UScriptableToolSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableToolSet.OuterSingleton;
	}
	template<> EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableToolSet>()
	{
		return UScriptableToolSet::StaticClass();
	}
	UScriptableToolSet::UScriptableToolSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableToolSet);
	UScriptableToolSet::~UScriptableToolSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_ScriptableToolSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_ScriptableToolSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptableToolSet, UScriptableToolSet::StaticClass, TEXT("UScriptableToolSet"), &Z_Registration_Info_UClass_UScriptableToolSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableToolSet), 3575288509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_ScriptableToolSet_h_3973497330(TEXT("/Script/EditorScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_ScriptableToolSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_ScriptableToolSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
