// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/ThumbnailManager.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailManager();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EThumbnailPrimType();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FThumbnailRenderingInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThumbnailPrimType;
	static UEnum* EThumbnailPrimType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailPrimType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EThumbnailPrimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EThumbnailPrimType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EThumbnailPrimType"));
		}
		return Z_Registration_Info_UEnum_EThumbnailPrimType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EThumbnailPrimType>()
	{
		return EThumbnailPrimType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::Enumerators[] = {
		{ "TPT_None", (int64)TPT_None },
		{ "TPT_Sphere", (int64)TPT_Sphere },
		{ "TPT_Cube", (int64)TPT_Cube },
		{ "TPT_Plane", (int64)TPT_Plane },
		{ "TPT_Cylinder", (int64)TPT_Cylinder },
		{ "TPT_MAX", (int64)TPT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Types of primitives for drawing thumbnails of resources.\n */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "Types of primitives for drawing thumbnails of resources." },
		{ "TPT_Cube.Name", "TPT_Cube" },
		{ "TPT_Cylinder.Name", "TPT_Cylinder" },
		{ "TPT_MAX.Name", "TPT_MAX" },
		{ "TPT_None.Name", "TPT_None" },
		{ "TPT_Plane.Name", "TPT_Plane" },
		{ "TPT_Sphere.Name", "TPT_Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EThumbnailPrimType",
		"EThumbnailPrimType",
		Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EThumbnailPrimType()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailPrimType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThumbnailPrimType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EThumbnailPrimType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EThumbnailPrimType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo;
class UScriptStruct* FThumbnailRenderingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThumbnailRenderingInfo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ThumbnailRenderingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FThumbnailRenderingInfo>()
{
	return FThumbnailRenderingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNeedingThumbnailName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassNeedingThumbnailName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNeedingThumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassNeedingThumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RendererClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Renderer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Renderer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the settings for a class that needs a thumbnail renderer. Each entry\n * maps to a corresponding class and holds the information needed\n * to render the thumbnail, including which object to render via and its\n * border color.\n */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "Holds the settings for a class that needs a thumbnail renderer. Each entry\nmaps to a corresponding class and holds the information needed\nto render the thumbnail, including which object to render via and its\nborder color." },
	};
#endif
	void* Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThumbnailRenderingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the class that this thumbnail is for (so we can lazy bind)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The name of the class that this thumbnail is for (so we can lazy bind)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName = { "ClassNeedingThumbnailName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FThumbnailRenderingInfo, ClassNeedingThumbnailName), METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail_MetaData[] = {
		{ "Comment", "/**\n\x09 * This is the class that this entry is for, i.e. the class that\n\x09 * will be rendered in the thumbnail views\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "This is the class that this entry is for, i.e. the class that\nwill be rendered in the thumbnail views" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail = { "ClassNeedingThumbnail", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FThumbnailRenderingInfo, ClassNeedingThumbnail), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the class to load when rendering this thumbnail\n\x09 * NOTE: This is a string to avoid any dependencies of compilation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The name of the class to load when rendering this thumbnail\nNOTE: This is a string to avoid any dependencies of compilation" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName = { "RendererClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FThumbnailRenderingInfo, RendererClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer_MetaData[] = {
		{ "Comment", "/**\n\x09 * The instance of the renderer class\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The instance of the renderer class" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FThumbnailRenderingInfo, Renderer), Z_Construct_UClass_UThumbnailRenderer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnailName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_ClassNeedingThumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_RendererClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewProp_Renderer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ThumbnailRenderingInfo",
		sizeof(FThumbnailRenderingInfo),
		alignof(FThumbnailRenderingInfo),
		Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FThumbnailRenderingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo.InnerSingleton, Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo.InnerSingleton;
	}
	void UThumbnailManager::StaticRegisterNativesUThumbnailManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThumbnailManager);
	UClass* Z_Construct_UClass_UThumbnailManager_NoRegister()
	{
		return UThumbnailManager::StaticClass();
	}
	struct Z_Construct_UClass_UThumbnailManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotSupported_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorCube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCylinder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorCylinder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPlane_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSkySphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorSkySphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorPlaneMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloorPlaneMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AmbientCubemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckerboardTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CheckerboardTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderableThumbnailTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderableThumbnailTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderableThumbnailTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailManagerClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailManagerClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThumbnailManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/ThumbnailManager.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported_MetaData[] = {
		{ "Comment", "/**\n\x09 * The render info to share across all object types when the object doesn't\n\x09 * support rendering of thumbnails\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The render info to share across all object types when the object doesn't\nsupport rendering of thumbnails" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported = { "NotSupported", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, NotSupported), Z_Construct_UScriptStruct_FThumbnailRenderingInfo, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported_MetaData)) }; // 812452086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube_MetaData[] = {
		{ "Comment", "// All these meshes/materials/textures are preloaded via default properties\n" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "All these meshes/materials/textures are preloaded via default properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube = { "EditorCube", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, EditorCube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere = { "EditorSphere", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, EditorSphere), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder = { "EditorCylinder", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, EditorCylinder), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane = { "EditorPlane", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, EditorPlane), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere = { "EditorSkySphere", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, EditorSkySphere), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial = { "FloorPlaneMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, FloorPlaneMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap = { "AmbientCubemap", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, AmbientCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture = { "CheckerboardTexture", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, CheckerboardTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_Inner = { "RenderableThumbnailTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FThumbnailRenderingInfo, METADATA_PARAMS(nullptr, 0) }; // 812452086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_MetaData[] = {
		{ "Comment", "/**\n\x09 * The array of thumbnail rendering information entries. Each type that supports\n\x09 * thumbnail rendering has an entry in here.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "The array of thumbnail rendering information entries. Each type that supports\nthumbnail rendering has an entry in here." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes = { "RenderableThumbnailTypes", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, RenderableThumbnailTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_MetaData)) }; // 812452086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Holds the name of the thumbnail manager singleton class to instantiate\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailManager.h" },
		{ "ToolTip", "Holds the name of the thumbnail manager singleton class to instantiate" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName = { "ThumbnailManagerClassName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThumbnailManager, ThumbnailManagerClassName), METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThumbnailManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_NotSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorCylinder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_EditorSkySphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_FloorPlaneMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_AmbientCubemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_CheckerboardTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_RenderableThumbnailTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailManager_Statics::NewProp_ThumbnailManagerClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThumbnailManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailManager_Statics::ClassParams = {
		&UThumbnailManager::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThumbnailManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UThumbnailManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThumbnailManager()
	{
		if (!Z_Registration_Info_UClass_UThumbnailManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThumbnailManager.OuterSingleton, Z_Construct_UClass_UThumbnailManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThumbnailManager.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UThumbnailManager>()
	{
		return UThumbnailManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailManager);
	UThumbnailManager::~UThumbnailManager() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UThumbnailManager)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::EnumInfo[] = {
		{ EThumbnailPrimType_StaticEnum, TEXT("EThumbnailPrimType"), &Z_Registration_Info_UEnum_EThumbnailPrimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 123934683U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::ScriptStructInfo[] = {
		{ FThumbnailRenderingInfo::StaticStruct, Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics::NewStructOps, TEXT("ThumbnailRenderingInfo"), &Z_Registration_Info_UScriptStruct_ThumbnailRenderingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThumbnailRenderingInfo), 812452086U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThumbnailManager, UThumbnailManager::StaticClass, TEXT("UThumbnailManager"), &Z_Registration_Info_UClass_UThumbnailManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThumbnailManager), 1525306567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_79678325(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
