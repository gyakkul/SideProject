// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDPrimTwin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDPrimTwin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDStage();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdPrimTwin();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdPrimTwin_NoRegister();
// End Cross Module References
	void UUsdPrimTwin::StaticRegisterNativesUUsdPrimTwin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdPrimTwin);
	UClass* Z_Construct_UClass_UUsdPrimTwin_NoRegister()
	{
		return UUsdPrimTwin::StaticClass();
	}
	struct Z_Construct_UClass_UUsdPrimTwin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Children_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdPrimTwin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdPrimTwin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The Unreal equivalent (twin) of a USD prim */" },
		{ "IncludePath", "USDPrimTwin.h" },
		{ "ModuleRelativePath", "Public/USDPrimTwin.h" },
		{ "ToolTip", "The Unreal equivalent (twin) of a USD prim" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_PrimPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDPrimTwin.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdPrimTwin, PrimPath), METADATA_PARAMS(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_PrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDPrimTwin.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdPrimTwin, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children_ValueProp = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UUsdPrimTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children_Key_KeyProp = { "Children_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDPrimTwin.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdPrimTwin, Children), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDPrimTwin.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdPrimTwin, Parent), Z_Construct_UClass_UUsdPrimTwin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdPrimTwin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdPrimTwin_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdPrimTwin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdPrimTwin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdPrimTwin_Statics::ClassParams = {
		&UUsdPrimTwin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdPrimTwin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdPrimTwin_Statics::PropPointers),
		0,
		0x008800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdPrimTwin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdPrimTwin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdPrimTwin()
	{
		if (!Z_Registration_Info_UClass_UUsdPrimTwin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdPrimTwin.OuterSingleton, Z_Construct_UClass_UUsdPrimTwin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdPrimTwin.OuterSingleton;
	}
	template<> USDSTAGE_API UClass* StaticClass<UUsdPrimTwin>()
	{
		return UUsdPrimTwin::StaticClass();
	}
	UUsdPrimTwin::UUsdPrimTwin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdPrimTwin);
	UUsdPrimTwin::~UUsdPrimTwin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdPrimTwin, UUsdPrimTwin::StaticClass, TEXT("UUsdPrimTwin"), &Z_Registration_Info_UClass_UUsdPrimTwin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdPrimTwin), 3307651337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_284668507(TEXT("/Script/USDStage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
