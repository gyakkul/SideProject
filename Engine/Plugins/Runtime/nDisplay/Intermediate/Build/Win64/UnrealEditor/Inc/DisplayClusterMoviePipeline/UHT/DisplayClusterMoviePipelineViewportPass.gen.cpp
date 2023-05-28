// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterMoviePipelineViewportPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterMoviePipelineViewportPass() {}
// Cross Module References
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_NoRegister();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_NoRegister();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_NoRegister();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_NoRegister();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_NoRegister();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMoviePipeline();
// End Cross Module References
	void UDisplayClusterMoviePipelineViewportPassBase::StaticRegisterNativesUDisplayClusterMoviePipelineViewportPassBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMoviePipelineViewportPassBase);
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_NoRegister()
	{
		return UDisplayClusterMoviePipelineViewportPassBase::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledWarpBlend_MetaData[];
#endif
		static void NewProp_bEnabledWarpBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledWarpBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * nDisplay viewport render pass (Lit)\n */" },
		{ "IncludePath", "DisplayClusterMoviePipelineViewportPass.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "nDisplay viewport render pass (Lit)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::NewProp_bEnabledWarpBlend_MetaData[] = {
		{ "Category", "nDisplay" },
		{ "Comment", "// Allow warp blend for this pass\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "Allow warp blend for this pass" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::NewProp_bEnabledWarpBlend_SetBit(void* Obj)
	{
		((UDisplayClusterMoviePipelineViewportPassBase*)Obj)->bEnabledWarpBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::NewProp_bEnabledWarpBlend = { "bEnabledWarpBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterMoviePipelineViewportPassBase), &Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::NewProp_bEnabledWarpBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::NewProp_bEnabledWarpBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::NewProp_bEnabledWarpBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::NewProp_bEnabledWarpBlend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMoviePipelineViewportPassBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::ClassParams = {
		&UDisplayClusterMoviePipelineViewportPassBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPassBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPassBase.OuterSingleton, Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPassBase.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMOVIEPIPELINE_API UClass* StaticClass<UDisplayClusterMoviePipelineViewportPassBase>()
	{
		return UDisplayClusterMoviePipelineViewportPassBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMoviePipelineViewportPassBase);
	UDisplayClusterMoviePipelineViewportPassBase::~UDisplayClusterMoviePipelineViewportPassBase() {}
	void UDisplayClusterMoviePipelineViewportPass_Unlit::StaticRegisterNativesUDisplayClusterMoviePipelineViewportPass_Unlit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMoviePipelineViewportPass_Unlit);
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_NoRegister()
	{
		return UDisplayClusterMoviePipelineViewportPass_Unlit::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * nDisplay viewport render pass (Unlit)\n */" },
		{ "IncludePath", "DisplayClusterMoviePipelineViewportPass.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "nDisplay viewport render pass (Unlit)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMoviePipelineViewportPass_Unlit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics::ClassParams = {
		&UDisplayClusterMoviePipelineViewportPass_Unlit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit.OuterSingleton, Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMOVIEPIPELINE_API UClass* StaticClass<UDisplayClusterMoviePipelineViewportPass_Unlit>()
	{
		return UDisplayClusterMoviePipelineViewportPass_Unlit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMoviePipelineViewportPass_Unlit);
	UDisplayClusterMoviePipelineViewportPass_Unlit::~UDisplayClusterMoviePipelineViewportPass_Unlit() {}
	void UDisplayClusterMoviePipelineViewportPass_DetailLighting::StaticRegisterNativesUDisplayClusterMoviePipelineViewportPass_DetailLighting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMoviePipelineViewportPass_DetailLighting);
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_NoRegister()
	{
		return UDisplayClusterMoviePipelineViewportPass_DetailLighting::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * nDisplay viewport render pass (DetailLightingOnly)\n */" },
		{ "IncludePath", "DisplayClusterMoviePipelineViewportPass.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "nDisplay viewport render pass (DetailLightingOnly)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMoviePipelineViewportPass_DetailLighting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics::ClassParams = {
		&UDisplayClusterMoviePipelineViewportPass_DetailLighting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting.OuterSingleton, Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMOVIEPIPELINE_API UClass* StaticClass<UDisplayClusterMoviePipelineViewportPass_DetailLighting>()
	{
		return UDisplayClusterMoviePipelineViewportPass_DetailLighting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMoviePipelineViewportPass_DetailLighting);
	UDisplayClusterMoviePipelineViewportPass_DetailLighting::~UDisplayClusterMoviePipelineViewportPass_DetailLighting() {}
	void UDisplayClusterMoviePipelineViewportPass_LightingOnly::StaticRegisterNativesUDisplayClusterMoviePipelineViewportPass_LightingOnly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMoviePipelineViewportPass_LightingOnly);
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_NoRegister()
	{
		return UDisplayClusterMoviePipelineViewportPass_LightingOnly::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * nDisplay viewport render pass (LightingOnly)\n */" },
		{ "IncludePath", "DisplayClusterMoviePipelineViewportPass.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "nDisplay viewport render pass (LightingOnly)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMoviePipelineViewportPass_LightingOnly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics::ClassParams = {
		&UDisplayClusterMoviePipelineViewportPass_LightingOnly::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly.OuterSingleton, Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMOVIEPIPELINE_API UClass* StaticClass<UDisplayClusterMoviePipelineViewportPass_LightingOnly>()
	{
		return UDisplayClusterMoviePipelineViewportPass_LightingOnly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMoviePipelineViewportPass_LightingOnly);
	UDisplayClusterMoviePipelineViewportPass_LightingOnly::~UDisplayClusterMoviePipelineViewportPass_LightingOnly() {}
	void UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly::StaticRegisterNativesUDisplayClusterMoviePipelineViewportPass_ReflectionsOnly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly);
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_NoRegister()
	{
		return UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * nDisplay viewport render pass (ReflectionsOnly)\n */" },
		{ "IncludePath", "DisplayClusterMoviePipelineViewportPass.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "nDisplay viewport render pass (ReflectionsOnly)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics::ClassParams = {
		&UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly.OuterSingleton, Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMOVIEPIPELINE_API UClass* StaticClass<UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly>()
	{
		return UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly);
	UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly::~UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly() {}
	void UDisplayClusterMoviePipelineViewportPass_PathTracer::StaticRegisterNativesUDisplayClusterMoviePipelineViewportPass_PathTracer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMoviePipelineViewportPass_PathTracer);
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_NoRegister()
	{
		return UDisplayClusterMoviePipelineViewportPass_PathTracer::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceMotionBlur_MetaData[];
#endif
		static void NewProp_bReferenceMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceMotionBlur;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * nDisplay viewport render pass (PathTracer)\n */" },
		{ "IncludePath", "DisplayClusterMoviePipelineViewportPass.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "nDisplay viewport render pass (PathTracer)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_MetaData[] = {
		{ "Category", "Reference Motion Blur" },
		{ "Comment", "/** When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\n\x09 *  In this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\n\x09 *  When this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineViewportPass.h" },
		{ "ToolTip", "When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\nIn this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\nWhen this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples." },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_SetBit(void* Obj)
	{
		((UDisplayClusterMoviePipelineViewportPass_PathTracer*)Obj)->bReferenceMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::NewProp_bReferenceMotionBlur = { "bReferenceMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterMoviePipelineViewportPass_PathTracer), &Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::NewProp_bReferenceMotionBlur,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMoviePipelineViewportPass_PathTracer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::ClassParams = {
		&UDisplayClusterMoviePipelineViewportPass_PathTracer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer.OuterSingleton, Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMOVIEPIPELINE_API UClass* StaticClass<UDisplayClusterMoviePipelineViewportPass_PathTracer>()
	{
		return UDisplayClusterMoviePipelineViewportPass_PathTracer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMoviePipelineViewportPass_PathTracer);
	UDisplayClusterMoviePipelineViewportPass_PathTracer::~UDisplayClusterMoviePipelineViewportPass_PathTracer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineViewportPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineViewportPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPassBase, UDisplayClusterMoviePipelineViewportPassBase::StaticClass, TEXT("UDisplayClusterMoviePipelineViewportPassBase"), &Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPassBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMoviePipelineViewportPassBase), 508301698U) },
		{ Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit, UDisplayClusterMoviePipelineViewportPass_Unlit::StaticClass, TEXT("UDisplayClusterMoviePipelineViewportPass_Unlit"), &Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_Unlit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMoviePipelineViewportPass_Unlit), 553013673U) },
		{ Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting, UDisplayClusterMoviePipelineViewportPass_DetailLighting::StaticClass, TEXT("UDisplayClusterMoviePipelineViewportPass_DetailLighting"), &Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_DetailLighting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMoviePipelineViewportPass_DetailLighting), 1078109280U) },
		{ Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly, UDisplayClusterMoviePipelineViewportPass_LightingOnly::StaticClass, TEXT("UDisplayClusterMoviePipelineViewportPass_LightingOnly"), &Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_LightingOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMoviePipelineViewportPass_LightingOnly), 3680496464U) },
		{ Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly, UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly::StaticClass, TEXT("UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly"), &Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMoviePipelineViewportPass_ReflectionsOnly), 2114132138U) },
		{ Z_Construct_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer, UDisplayClusterMoviePipelineViewportPass_PathTracer::StaticClass, TEXT("UDisplayClusterMoviePipelineViewportPass_PathTracer"), &Z_Registration_Info_UClass_UDisplayClusterMoviePipelineViewportPass_PathTracer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMoviePipelineViewportPass_PathTracer), 1774847660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineViewportPass_h_3242087395(TEXT("/Script/DisplayClusterMoviePipeline"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineViewportPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineViewportPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
