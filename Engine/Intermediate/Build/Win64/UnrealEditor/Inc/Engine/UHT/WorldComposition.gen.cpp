// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldComposition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition();
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldComposition::StaticRegisterNativesUWorldComposition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldComposition);
	UClass* Z_Construct_UClass_UWorldComposition_NoRegister()
	{
		return UWorldComposition::StaticClass();
	}
	struct Z_Construct_UClass_UWorldComposition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TilesStreaming_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesStreaming_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TilesStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesStreamingTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TilesStreamingTimeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadAllTilesDuringCinematic_MetaData[];
#endif
		static void NewProp_bLoadAllTilesDuringCinematic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadAllTilesDuringCinematic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRebaseOriginIn3DSpace_MetaData[];
#endif
		static void NewProp_bRebaseOriginIn3DSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebaseOriginIn3DSpace;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockTilesLocation_MetaData[];
#endif
		static void NewProp_bLockTilesLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockTilesLocation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RebaseOriginDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RebaseOriginDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldComposition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * WorldComposition represents world structure:\n *\x09- Holds list of all level packages participating in this world and theirs base parameters (bounding boxes, offset from origin)\n *\x09- Holds list of streaming level objects to stream in and out based on distance from current view point\n *  - Handles properly levels repositioning during level loading and saving\n */" },
		{ "IncludePath", "Engine/WorldComposition.h" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "WorldComposition represents world structure:\n    - Holds list of all level packages participating in this world and theirs base parameters (bounding boxes, offset from origin)\n    - Holds list of streaming level objects to stream in and out based on distance from current view point\n - Handles properly levels repositioning during level loading and saving" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_Inner = { "TilesStreaming", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_MetaData[] = {
		{ "Comment", "// Streaming level objects for each tile\n" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Streaming level objects for each tile" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming = { "TilesStreaming", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldComposition, TilesStreaming), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold_MetaData[] = {
		{ "Comment", "// Time threshold between tile streaming state changes\n" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Time threshold between tile streaming state changes" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold = { "TilesStreamingTimeThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldComposition, TilesStreamingTimeThreshold), METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_MetaData[] = {
		{ "Comment", "// Whether all distance dependent tiles should be loaded and visible during cinematic\n" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Whether all distance dependent tiles should be loaded and visible during cinematic" },
	};
#endif
	void Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_SetBit(void* Obj)
	{
		((UWorldComposition*)Obj)->bLoadAllTilesDuringCinematic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic = { "bLoadAllTilesDuringCinematic", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldComposition), &Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_MetaData[] = {
		{ "Comment", "// Whether to rebase origin in 3D space, otherwise only on XY plane\n" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Whether to rebase origin in 3D space, otherwise only on XY plane" },
	};
#endif
	void Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_SetBit(void* Obj)
	{
		((UWorldComposition*)Obj)->bRebaseOriginIn3DSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace = { "bRebaseOriginIn3DSpace", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldComposition), &Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_MetaData[] = {
		{ "Comment", "// Whether all tiles locations are locked\n" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Whether all tiles locations are locked" },
	};
#endif
	void Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_SetBit(void* Obj)
	{
		((UWorldComposition*)Obj)->bLockTilesLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation = { "bLockTilesLocation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldComposition), &Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance_MetaData[] = {
		{ "Comment", "// Maximum distance to current view point where we should initiate origin rebasing\n" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Maximum distance to current view point where we should initiate origin rebasing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance = { "RebaseOriginDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldComposition, RebaseOriginDistance), METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldComposition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldComposition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldComposition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldComposition_Statics::ClassParams = {
		&UWorldComposition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldComposition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldComposition()
	{
		if (!Z_Registration_Info_UClass_UWorldComposition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldComposition.OuterSingleton, Z_Construct_UClass_UWorldComposition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldComposition.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldComposition>()
	{
		return UWorldComposition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldComposition);
	UWorldComposition::~UWorldComposition() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldComposition)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldComposition, UWorldComposition::StaticClass, TEXT("UWorldComposition"), &Z_Registration_Info_UClass_UWorldComposition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldComposition), 763234469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_2678533204(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
