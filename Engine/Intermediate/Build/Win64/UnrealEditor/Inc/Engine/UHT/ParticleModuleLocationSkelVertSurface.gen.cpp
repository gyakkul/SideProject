// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationSkelVertSurface() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource;
	static UEnum* ELocationSkelVertSurfaceSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELocationSkelVertSurfaceSource"));
		}
		return Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELocationSkelVertSurfaceSource>()
	{
		return ELocationSkelVertSurfaceSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::Enumerators[] = {
		{ "VERTSURFACESOURCE_Vert", (int64)VERTSURFACESOURCE_Vert },
		{ "VERTSURFACESOURCE_Surface", (int64)VERTSURFACESOURCE_Surface },
		{ "VERTSURFACESOURCE_MAX", (int64)VERTSURFACESOURCE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "VERTSURFACESOURCE_MAX.Name", "VERTSURFACESOURCE_MAX" },
		{ "VERTSURFACESOURCE_Surface.DisplayName", "Surfaces" },
		{ "VERTSURFACESOURCE_Surface.Name", "VERTSURFACESOURCE_Surface" },
		{ "VERTSURFACESOURCE_Vert.DisplayName", "Vertices" },
		{ "VERTSURFACESOURCE_Vert.Name", "VERTSURFACESOURCE_Vert" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELocationSkelVertSurfaceSource",
		"ELocationSkelVertSurfaceSource",
		Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource()
	{
		if (!Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource.InnerSingleton, Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource.InnerSingleton;
	}
	void UParticleModuleLocationSkelVertSurface::StaticRegisterNativesUParticleModuleLocationSkelVertSurface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationSkelVertSurface);
	UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister()
	{
		return UParticleModuleLocationSkelVertSurface::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniversalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniversalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionEachFrame_MetaData[];
#endif
		static void NewProp_bUpdatePositionEachFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionEachFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientMeshEmitters_MetaData[];
#endif
		static void NewProp_bOrientMeshEmitters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientMeshEmitters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritBoneVelocity_MetaData[];
#endif
		static void NewProp_bInheritBoneVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritBoneVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshActorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SkelMeshActorParamName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSkelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorSkelMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValidAssociatedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidAssociatedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidAssociatedBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceNormalCheck_MetaData[];
#endif
		static void NewProp_bEnforceNormalCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceNormalCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalToCompare_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalToCompare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalCheckToleranceDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalCheckToleranceDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalCheckTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalCheckTolerance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValidMaterialIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidMaterialIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidMaterialIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritVertexColor_MetaData[];
#endif
		static void NewProp_bInheritVertexColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritVertexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritUV_MetaData[];
#endif
		static void NewProp_bInheritUV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritUVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InheritUVChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Skel Vert/Surf Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/**\n\x09 *\x09Whether the module uses Verts or Surfaces for locations.\n\x09 *\n\x09 *\x09VERTSURFACESOURCE_Vert\x09\x09- Use Verts as the source locations.\n\x09 *\x09VERTSURFACESOURCE_Surface\x09- Use Surfaces as the source locations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Whether the module uses Verts or Surfaces for locations.\n\nVERTSURFACESOURCE_Vert          - Use Verts as the source locations.\nVERTSURFACESOURCE_Surface       - Use Surfaces as the source locations." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, SourceType), Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType_MetaData)) }; // 4174881799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** An offset to apply to each vert/surface */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "An offset to apply to each vert/surface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset = { "UniversalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, UniversalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** If true, update the particle locations each frame with that of the vert/surface */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, update the particle locations each frame with that of the vert/surface" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bUpdatePositionEachFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame = { "bUpdatePositionEachFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** If true, rotate mesh emitter meshes to orient w/ the vert/surface */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, rotate mesh emitter meshes to orient w/ the vert/surface" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bOrientMeshEmitters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters = { "bOrientMeshEmitters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** If true, particles inherit the associated bone velocity when spawned */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, particles inherit the associated bone velocity when spawned" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritBoneVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity = { "bInheritBoneVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** A scale on how much of the bone's velocity a particle will inherit. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "A scale on how much of the bone's velocity a particle will inherit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale = { "InheritVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, InheritVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/**\n\x09 *\x09The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName = { "SkelMeshActorParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, SkelMeshActorParamName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** The name of the skeletal mesh to use in the editor */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "The name of the skeletal mesh to use in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh = { "EditorSkelMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, EditorSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_Inner = { "ValidAssociatedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** This module will only spawn from verts or surfaces associated with the bones in this list */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "This module will only spawn from verts or surfaces associated with the bones in this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones = { "ValidAssociatedBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, ValidAssociatedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** When true use the RestrictToNormal and NormalTolerance values to check surface normals */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "When true use the RestrictToNormal and NormalTolerance values to check surface normals" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bEnforceNormalCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck = { "bEnforceNormalCheck", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** Use this normal to restrict spawning locations */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Use this normal to restrict spawning locations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare = { "NormalToCompare", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalToCompare), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** Normal tolerance.  0 degrees means it must be an exact match, 180 degrees means it can be any angle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Normal tolerance.  0 degrees means it must be an exact match, 180 degrees means it can be any angle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees = { "NormalCheckToleranceDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalCheckToleranceDegrees), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance_MetaData[] = {
		{ "Comment", "/** Normal tolerance.  Value between 1.0 and -1.0 with 1.0 being exact match, 0.0 being everything up to\n\x09\x09perpendicular and -1.0 being any direction or don't restrict at all. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Normal tolerance.  Value between 1.0 and -1.0 with 1.0 being exact match, 0.0 being everything up to\n              perpendicular and -1.0 being any direction or don't restrict at all." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance = { "NormalCheckTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalCheckTolerance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_Inner = { "ValidMaterialIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/**\n\x09 *\x09""Array of material indices that are valid materials to spawn from.\n\x09 *\x09If empty, any material will be considered valid\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Array of material indices that are valid materials to spawn from.\nIf empty, any material will be considered valid" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices = { "ValidMaterialIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, ValidMaterialIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** If true, particles inherit the associated vertex color on spawn. This feature is not supported for GPU particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, particles inherit the associated vertex color on spawn. This feature is not supported for GPU particles." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritVertexColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor = { "bInheritVertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** If true, particles inherit the associated UV data on spawn. Accessed through dynamic parameter module X and Y, must be a \"Spawn Time Only\" parameter on \"AutoSet\" mode. This feature is not supported for GPU particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, particles inherit the associated UV data on spawn. Accessed through dynamic parameter module X and Y, must be a \"Spawn Time Only\" parameter on \"AutoSet\" mode. This feature is not supported for GPU particles." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritUV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV = { "bInheritUV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "Comment", "/** UV channel to inherit from the spawn mesh, internally clamped to those available.  */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "UV channel to inherit from the spawn mesh, internally clamped to those available." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel = { "InheritUVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, InheritUVChannel), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationSkelVertSurface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::ClassParams = {
		&UParticleModuleLocationSkelVertSurface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationSkelVertSurface>()
	{
		return UParticleModuleLocationSkelVertSurface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationSkelVertSurface);
	UParticleModuleLocationSkelVertSurface::~UParticleModuleLocationSkelVertSurface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_Statics::EnumInfo[] = {
		{ ELocationSkelVertSurfaceSource_StaticEnum, TEXT("ELocationSkelVertSurfaceSource"), &Z_Registration_Info_UEnum_ELocationSkelVertSurfaceSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4174881799U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationSkelVertSurface, UParticleModuleLocationSkelVertSurface::StaticClass, TEXT("UParticleModuleLocationSkelVertSurface"), &Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationSkelVertSurface), 4023317601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_3010523779(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
