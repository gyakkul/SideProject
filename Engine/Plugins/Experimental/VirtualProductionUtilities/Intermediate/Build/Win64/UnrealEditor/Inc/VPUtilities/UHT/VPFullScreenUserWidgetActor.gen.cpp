// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPFullScreenUserWidgetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPFullScreenUserWidgetActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_AFullScreenUserWidgetActor();
	VPUTILITIES_API UClass* Z_Construct_UClass_AFullScreenUserWidgetActor_NoRegister();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister();
// End Cross Module References
	void AFullScreenUserWidgetActor::StaticRegisterNativesAFullScreenUserWidgetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFullScreenUserWidgetActor);
	UClass* Z_Construct_UClass_AFullScreenUserWidgetActor_NoRegister()
	{
		return AFullScreenUserWidgetActor::StaticClass();
	}
	struct Z_Construct_UClass_AFullScreenUserWidgetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenUserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScreenUserWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UserInterface" },
		{ "Comment", "/**\n * Widgets are first rendered to a render target, then that render target is displayed in the world.\n */" },
		{ "HideCategories", "Actor Input Movement Collision Rendering Transformation LOD Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VPFullScreenUserWidgetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidgetActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Widgets are first rendered to a render target, then that render target is displayed in the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidgetActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget = { "ScreenUserWidget", nullptr, (EPropertyFlags)0x00260800020a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFullScreenUserWidgetActor, ScreenUserWidget), Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFullScreenUserWidgetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::ClassParams = {
		&AFullScreenUserWidgetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFullScreenUserWidgetActor()
	{
		if (!Z_Registration_Info_UClass_AFullScreenUserWidgetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFullScreenUserWidgetActor.OuterSingleton, Z_Construct_UClass_AFullScreenUserWidgetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFullScreenUserWidgetActor.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<AFullScreenUserWidgetActor>()
	{
		return AFullScreenUserWidgetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFullScreenUserWidgetActor);
	AFullScreenUserWidgetActor::~AFullScreenUserWidgetActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidgetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidgetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFullScreenUserWidgetActor, AFullScreenUserWidgetActor::StaticClass, TEXT("AFullScreenUserWidgetActor"), &Z_Registration_Info_UClass_AFullScreenUserWidgetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFullScreenUserWidgetActor), 4033883677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidgetActor_h_3746294847(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidgetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidgetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
