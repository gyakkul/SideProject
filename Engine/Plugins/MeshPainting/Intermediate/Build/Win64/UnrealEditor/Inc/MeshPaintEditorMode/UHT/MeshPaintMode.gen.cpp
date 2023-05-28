// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MeshPaintMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintMode() {}
// Cross Module References
	MESHPAINTEDITORMODE_API UClass* Z_Construct_UClass_UMeshPaintMode();
	MESHPAINTEDITORMODE_API UClass* Z_Construct_UClass_UMeshPaintMode_NoRegister();
	MESHPAINTEDITORMODE_API UClass* Z_Construct_UClass_UMeshPaintModeSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshPaintEditorMode();
// End Cross Module References
	void UMeshPaintMode::StaticRegisterNativesUMeshPaintMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshPaintMode);
	UClass* Z_Construct_UClass_UMeshPaintMode_NoRegister()
	{
		return UMeshPaintMode::StaticClass();
	}
	struct Z_Construct_UClass_UMeshPaintMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModeSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshPaintMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh paint Mode.  Extends editor viewports with the ability to paint data on meshes\n */" },
		{ "IncludePath", "MeshPaintMode.h" },
		{ "ModuleRelativePath", "Private/MeshPaintMode.h" },
		{ "ToolTip", "Mesh paint Mode.  Extends editor viewports with the ability to paint data on meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintMode_Statics::NewProp_ModeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/MeshPaintMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshPaintMode_Statics::NewProp_ModeSettings = { "ModeSettings", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshPaintMode, ModeSettings), Z_Construct_UClass_UMeshPaintModeSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshPaintMode_Statics::NewProp_ModeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintMode_Statics::NewProp_ModeSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshPaintMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintMode_Statics::NewProp_ModeSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshPaintMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister, (int32)VTABLE_OFFSET(UMeshPaintMode, ILegacyEdModeViewportInterface), false },  // 3238461248
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshPaintMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshPaintMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintMode_Statics::ClassParams = {
		&UMeshPaintMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshPaintMode_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintMode_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshPaintMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshPaintMode()
	{
		if (!Z_Registration_Info_UClass_UMeshPaintMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshPaintMode.OuterSingleton, Z_Construct_UClass_UMeshPaintMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshPaintMode.OuterSingleton;
	}
	template<> MESHPAINTEDITORMODE_API UClass* StaticClass<UMeshPaintMode>()
	{
		return UMeshPaintMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintMode);
	UMeshPaintMode::~UMeshPaintMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshPaintMode, UMeshPaintMode::StaticClass, TEXT("UMeshPaintMode"), &Z_Registration_Info_UClass_UMeshPaintMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshPaintMode), 2612280066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_1876495502(TEXT("/Script/MeshPaintEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
