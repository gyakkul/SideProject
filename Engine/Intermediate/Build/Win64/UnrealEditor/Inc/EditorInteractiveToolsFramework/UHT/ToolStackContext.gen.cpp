// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolContexts/ToolStackContext.h"
#include "InteractiveToolStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolStackContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolStackContext();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolStackContext_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolStack();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UToolStackContext::StaticRegisterNativesUToolStackContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolStackContext);
	UClass* Z_Construct_UClass_UToolStackContext_NoRegister()
	{
		return UToolStackContext::StaticClass();
	}
	struct Z_Construct_UClass_UToolStackContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdMode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EdMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToolStacks_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolStacks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolStacks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ToolStacks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolStackContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolStackContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Context needed to support tool stacks, add this to your ContextObjectStore if you want to use tool stacks\n */" },
		{ "IncludePath", "ToolContexts/ToolStackContext.h" },
		{ "ModuleRelativePath", "Public/ToolContexts/ToolStackContext.h" },
		{ "ToolTip", "Context needed to support tool stacks, add this to your ContextObjectStore if you want to use tool stacks" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolStackContext_Statics::NewProp_EdMode_MetaData[] = {
		{ "Comment", "/** EdMode owning the tools referenced by this stack */" },
		{ "ModuleRelativePath", "Public/ToolContexts/ToolStackContext.h" },
		{ "ToolTip", "EdMode owning the tools referenced by this stack" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UToolStackContext_Statics::NewProp_EdMode = { "EdMode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolStackContext, EdMode), Z_Construct_UClass_UEdMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToolStackContext_Statics::NewProp_EdMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolStackContext_Statics::NewProp_EdMode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks_ValueProp = { "ToolStacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInteractiveToolStack, METADATA_PARAMS(nullptr, 0) }; // 852889989
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks_Key_KeyProp = { "ToolStacks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks_MetaData[] = {
		{ "Comment", "/** Current set of named ToolStacks */" },
		{ "ModuleRelativePath", "Public/ToolContexts/ToolStackContext.h" },
		{ "ToolTip", "Current set of named ToolStacks" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks = { "ToolStacks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolStackContext, ToolStacks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks_MetaData)) }; // 852889989
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolStackContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolStackContext_Statics::NewProp_EdMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolStackContext_Statics::NewProp_ToolStacks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolStackContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolStackContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolStackContext_Statics::ClassParams = {
		&UToolStackContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolStackContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolStackContext_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UToolStackContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolStackContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolStackContext()
	{
		if (!Z_Registration_Info_UClass_UToolStackContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolStackContext.OuterSingleton, Z_Construct_UClass_UToolStackContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolStackContext.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolStackContext>()
	{
		return UToolStackContext::StaticClass();
	}
	UToolStackContext::UToolStackContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolStackContext);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolStackContext, UToolStackContext::StaticClass, TEXT("UToolStackContext"), &Z_Registration_Info_UClass_UToolStackContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolStackContext), 3780762455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_2733439806(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
