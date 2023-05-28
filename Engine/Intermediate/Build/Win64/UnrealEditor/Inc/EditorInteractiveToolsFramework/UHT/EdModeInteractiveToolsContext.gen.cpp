// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdModeInteractiveToolsContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdModeInteractiveToolsContext() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveToolsContext();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveToolsContext_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEdModeInteractiveToolsContext();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEdModeInteractiveToolsContext_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UModeManagerInteractiveToolsContext();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UModeManagerInteractiveToolsContext_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorInteractiveToolsContext::StaticRegisterNativesUEditorInteractiveToolsContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorInteractiveToolsContext);
	UClass* Z_Construct_UClass_UEditorInteractiveToolsContext_NoRegister()
	{
		return UEditorInteractiveToolsContext::StaticClass();
	}
	struct Z_Construct_UClass_UEditorInteractiveToolsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardVertexColorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandardVertexColorMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolsContext,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorInteractiveToolsContext is an extension/adapter of an InteractiveToolsContext designed \n * for use in the UE Editor. Currently this implementation assumes that it is created by a\n * Mode Manager (FEditorModeTools), and that the Mode Manager will call various API functions\n * like Render() and Tick() when necessary. \n * \n * \n * allows it to be easily embedded inside an FEdMode. A set of functions are provided which can be\n * called from the FEdMode functions of the same name. These will handle the data type\n * conversions and forwarding calls necessary to operate the ToolsContext\n */" },
		{ "IncludePath", "EdModeInteractiveToolsContext.h" },
		{ "ModuleRelativePath", "Public/EdModeInteractiveToolsContext.h" },
		{ "ToolTip", "UEditorInteractiveToolsContext is an extension/adapter of an InteractiveToolsContext designed\nfor use in the UE Editor. Currently this implementation assumes that it is created by a\nMode Manager (FEditorModeTools), and that the Mode Manager will call various API functions\nlike Render() and Tick() when necessary.\n\n\nallows it to be easily embedded inside an FEdMode. A set of functions are provided which can be\ncalled from the FEdMode functions of the same name. These will handle the data type\nconversions and forwarding calls necessary to operate the ToolsContext" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::NewProp_StandardVertexColorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdModeInteractiveToolsContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::NewProp_StandardVertexColorMaterial = { "StandardVertexColorMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorInteractiveToolsContext, StandardVertexColorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::NewProp_StandardVertexColorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::NewProp_StandardVertexColorMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::NewProp_StandardVertexColorMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorInteractiveToolsContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::ClassParams = {
		&UEditorInteractiveToolsContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorInteractiveToolsContext()
	{
		if (!Z_Registration_Info_UClass_UEditorInteractiveToolsContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorInteractiveToolsContext.OuterSingleton, Z_Construct_UClass_UEditorInteractiveToolsContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorInteractiveToolsContext.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorInteractiveToolsContext>()
	{
		return UEditorInteractiveToolsContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorInteractiveToolsContext);
	UEditorInteractiveToolsContext::~UEditorInteractiveToolsContext() {}
	void UModeManagerInteractiveToolsContext::StaticRegisterNativesUModeManagerInteractiveToolsContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModeManagerInteractiveToolsContext);
	UClass* Z_Construct_UClass_UModeManagerInteractiveToolsContext_NoRegister()
	{
		return UModeManagerInteractiveToolsContext::StaticClass();
	}
	struct Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EdModeToolsContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdModeToolsContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EdModeToolsContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorInteractiveToolsContext,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UModeManagerInteractiveToolsContext extends UEditorInteractiveToolsContext with various functions for handling \n * device (mouse) input. These functions are currently called by the EdMode Manager (FEditorModeTools).\n */" },
		{ "IncludePath", "EdModeInteractiveToolsContext.h" },
		{ "ModuleRelativePath", "Public/EdModeInteractiveToolsContext.h" },
		{ "ToolTip", "UModeManagerInteractiveToolsContext extends UEditorInteractiveToolsContext with various functions for handling\ndevice (mouse) input. These functions are currently called by the EdMode Manager (FEditorModeTools)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::NewProp_EdModeToolsContexts_Inner = { "EdModeToolsContexts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdModeInteractiveToolsContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::NewProp_EdModeToolsContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdModeInteractiveToolsContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::NewProp_EdModeToolsContexts = { "EdModeToolsContexts", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModeManagerInteractiveToolsContext, EdModeToolsContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::NewProp_EdModeToolsContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::NewProp_EdModeToolsContexts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::NewProp_EdModeToolsContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::NewProp_EdModeToolsContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModeManagerInteractiveToolsContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::ClassParams = {
		&UModeManagerInteractiveToolsContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModeManagerInteractiveToolsContext()
	{
		if (!Z_Registration_Info_UClass_UModeManagerInteractiveToolsContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModeManagerInteractiveToolsContext.OuterSingleton, Z_Construct_UClass_UModeManagerInteractiveToolsContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModeManagerInteractiveToolsContext.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UModeManagerInteractiveToolsContext>()
	{
		return UModeManagerInteractiveToolsContext::StaticClass();
	}
	UModeManagerInteractiveToolsContext::UModeManagerInteractiveToolsContext() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModeManagerInteractiveToolsContext);
	UModeManagerInteractiveToolsContext::~UModeManagerInteractiveToolsContext() {}
	void UEdModeInteractiveToolsContext::StaticRegisterNativesUEdModeInteractiveToolsContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdModeInteractiveToolsContext);
	UClass* Z_Construct_UClass_UEdModeInteractiveToolsContext_NoRegister()
	{
		return UEdModeInteractiveToolsContext::StaticClass();
	}
	struct Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentModeManagerToolsContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentModeManagerToolsContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorInteractiveToolsContext,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEdModeInteractiveToolsContext is an UEditorInteractiveToolsContext intended for use/lifetime in the context of a UEdMode.\n * This ITC subclass is dependent on a UModeManagerInteractiveToolsContext to provide an InputRouter.\n */" },
		{ "IncludePath", "EdModeInteractiveToolsContext.h" },
		{ "ModuleRelativePath", "Public/EdModeInteractiveToolsContext.h" },
		{ "ToolTip", "UEdModeInteractiveToolsContext is an UEditorInteractiveToolsContext intended for use/lifetime in the context of a UEdMode.\nThis ITC subclass is dependent on a UModeManagerInteractiveToolsContext to provide an InputRouter." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::NewProp_ParentModeManagerToolsContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdModeInteractiveToolsContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::NewProp_ParentModeManagerToolsContext = { "ParentModeManagerToolsContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdModeInteractiveToolsContext, ParentModeManagerToolsContext), Z_Construct_UClass_UModeManagerInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::NewProp_ParentModeManagerToolsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::NewProp_ParentModeManagerToolsContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::NewProp_ParentModeManagerToolsContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdModeInteractiveToolsContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::ClassParams = {
		&UEdModeInteractiveToolsContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdModeInteractiveToolsContext()
	{
		if (!Z_Registration_Info_UClass_UEdModeInteractiveToolsContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdModeInteractiveToolsContext.OuterSingleton, Z_Construct_UClass_UEdModeInteractiveToolsContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdModeInteractiveToolsContext.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEdModeInteractiveToolsContext>()
	{
		return UEdModeInteractiveToolsContext::StaticClass();
	}
	UEdModeInteractiveToolsContext::UEdModeInteractiveToolsContext() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdModeInteractiveToolsContext);
	UEdModeInteractiveToolsContext::~UEdModeInteractiveToolsContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EdModeInteractiveToolsContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EdModeInteractiveToolsContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorInteractiveToolsContext, UEditorInteractiveToolsContext::StaticClass, TEXT("UEditorInteractiveToolsContext"), &Z_Registration_Info_UClass_UEditorInteractiveToolsContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorInteractiveToolsContext), 3188401396U) },
		{ Z_Construct_UClass_UModeManagerInteractiveToolsContext, UModeManagerInteractiveToolsContext::StaticClass, TEXT("UModeManagerInteractiveToolsContext"), &Z_Registration_Info_UClass_UModeManagerInteractiveToolsContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModeManagerInteractiveToolsContext), 4049790072U) },
		{ Z_Construct_UClass_UEdModeInteractiveToolsContext, UEdModeInteractiveToolsContext::StaticClass, TEXT("UEdModeInteractiveToolsContext"), &Z_Registration_Info_UClass_UEdModeInteractiveToolsContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdModeInteractiveToolsContext), 459169019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EdModeInteractiveToolsContext_h_2910926245(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EdModeInteractiveToolsContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EdModeInteractiveToolsContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
