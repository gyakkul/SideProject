// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononGeometryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononGeometryComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononGeometryComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononGeometryComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void UPhononGeometryComponent::StaticRegisterNativesUPhononGeometryComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononGeometryComponent);
	UClass* Z_Construct_UClass_UPhononGeometryComponent_NoRegister()
	{
		return UPhononGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhononGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportAllChildren_MetaData[];
#endif
		static void NewProp_ExportAllChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExportAllChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "Comment", "/**\n * Phonon Geometry components are used to tag an actor as containing geometry relevant to acoustics calculations.\n * Should be placed on Static Mesh actors.\n */" },
		{ "HideCategories", "Activation Collision Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "PhononGeometryComponent.h" },
		{ "ModuleRelativePath", "Private/PhononGeometryComponent.h" },
		{ "ToolTip", "Phonon Geometry components are used to tag an actor as containing geometry relevant to acoustics calculations.\nShould be placed on Static Mesh actors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_ExportAllChildren_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether or not to export all actors attached to this actor.\n" },
		{ "ModuleRelativePath", "Private/PhononGeometryComponent.h" },
		{ "ToolTip", "Whether or not to export all actors attached to this actor." },
	};
#endif
	void Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_ExportAllChildren_SetBit(void* Obj)
	{
		((UPhononGeometryComponent*)Obj)->ExportAllChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_ExportAllChildren = { "ExportAllChildren", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhononGeometryComponent), &Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_ExportAllChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_ExportAllChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_ExportAllChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumVertices_MetaData[] = {
		{ "Category", "GeometryStatistics" },
		{ "Comment", "// The number of vertices exported to Steam Audio.\n" },
		{ "DisplayName", "Vertices" },
		{ "ModuleRelativePath", "Private/PhononGeometryComponent.h" },
		{ "ToolTip", "The number of vertices exported to Steam Audio." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononGeometryComponent, NumVertices), METADATA_PARAMS(Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumTriangles_MetaData[] = {
		{ "Category", "GeometryStatistics" },
		{ "Comment", "// The number of triangles exported to Steam Audio.\n" },
		{ "DisplayName", "Triangles" },
		{ "ModuleRelativePath", "Private/PhononGeometryComponent.h" },
		{ "ToolTip", "The number of triangles exported to Steam Audio." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumTriangles = { "NumTriangles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononGeometryComponent, NumTriangles), METADATA_PARAMS(Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumTriangles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhononGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_ExportAllChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononGeometryComponent_Statics::NewProp_NumTriangles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononGeometryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononGeometryComponent_Statics::ClassParams = {
		&UPhononGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhononGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhononGeometryComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononGeometryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononGeometryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononGeometryComponent()
	{
		if (!Z_Registration_Info_UClass_UPhononGeometryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononGeometryComponent.OuterSingleton, Z_Construct_UClass_UPhononGeometryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononGeometryComponent.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<UPhononGeometryComponent>()
	{
		return UPhononGeometryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononGeometryComponent);
	UPhononGeometryComponent::~UPhononGeometryComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononGeometryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononGeometryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononGeometryComponent, UPhononGeometryComponent::StaticClass, TEXT("UPhononGeometryComponent"), &Z_Registration_Info_UClass_UPhononGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononGeometryComponent), 1345004772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononGeometryComponent_h_1031340825(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononGeometryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
