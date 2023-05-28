// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SequencerPlaylistsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerPlaylistsSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylist_NoRegister();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistsSubsystem();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistsSubsystem_NoRegister();
	SEQUENCERPLAYLISTS_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle();
	UPackage* Z_Construct_UPackage__Script_SequencerPlaylists();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle;
class UScriptStruct* FSequencerPlaylistEditorHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle, (UObject*)Z_Construct_UPackage__Script_SequencerPlaylists(), TEXT("SequencerPlaylistEditorHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle.OuterSingleton;
}
template<> SEQUENCERPLAYLISTS_API UScriptStruct* StaticStruct<FSequencerPlaylistEditorHandle>()
{
	return FSequencerPlaylistEditorHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SequencerPlaylistsSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerPlaylistEditorHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
		nullptr,
		&NewStructOps,
		"SequencerPlaylistEditorHandle",
		sizeof(FSequencerPlaylistEditorHandle),
		alignof(FSequencerPlaylistEditorHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle.InnerSingleton, Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle.InnerSingleton;
	}
	void USequencerPlaylistsSubsystem::StaticRegisterNativesUSequencerPlaylistsSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPlaylistsSubsystem);
	UClass* Z_Construct_UClass_USequencerPlaylistsSubsystem_NoRegister()
	{
		return USequencerPlaylistsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorPackages_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorPackages_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPackages_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditorPackages;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorPlayers_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorPlayers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditorPlayers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorPlaylists_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorPlaylists_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPlaylists_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditorPlaylists;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerPlaylistsSubsystem.h" },
		{ "ModuleRelativePath", "Private/SequencerPlaylistsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages_ValueProp = { "EditorPackages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages_Key_KeyProp = { "EditorPackages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle, METADATA_PARAMS(nullptr, 0) }; // 2206522410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages_MetaData[] = {
		{ "ModuleRelativePath", "Private/SequencerPlaylistsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages = { "EditorPackages", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistsSubsystem, EditorPackages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages_MetaData)) }; // 2206522410
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers_ValueProp = { "EditorPlayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers_Key_KeyProp = { "EditorPlayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle, METADATA_PARAMS(nullptr, 0) }; // 2206522410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/SequencerPlaylistsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers = { "EditorPlayers", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistsSubsystem, EditorPlayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers_MetaData)) }; // 2206522410
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists_ValueProp = { "EditorPlaylists", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USequencerPlaylist_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists_Key_KeyProp = { "EditorPlaylists_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle, METADATA_PARAMS(nullptr, 0) }; // 2206522410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists_MetaData[] = {
		{ "ModuleRelativePath", "Private/SequencerPlaylistsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists = { "EditorPlaylists", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistsSubsystem, EditorPlaylists), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists_MetaData)) }; // 2206522410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::NewProp_EditorPlaylists,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPlaylistsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::ClassParams = {
		&USequencerPlaylistsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerPlaylistsSubsystem()
	{
		if (!Z_Registration_Info_UClass_USequencerPlaylistsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPlaylistsSubsystem.OuterSingleton, Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPlaylistsSubsystem.OuterSingleton;
	}
	template<> SEQUENCERPLAYLISTS_API UClass* StaticClass<USequencerPlaylistsSubsystem>()
	{
		return USequencerPlaylistsSubsystem::StaticClass();
	}
	USequencerPlaylistsSubsystem::USequencerPlaylistsSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPlaylistsSubsystem);
	USequencerPlaylistsSubsystem::~USequencerPlaylistsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FSequencerPlaylistEditorHandle::StaticStruct, Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics::NewStructOps, TEXT("SequencerPlaylistEditorHandle"), &Z_Registration_Info_UScriptStruct_SequencerPlaylistEditorHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerPlaylistEditorHandle), 2206522410U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerPlaylistsSubsystem, USequencerPlaylistsSubsystem::StaticClass, TEXT("USequencerPlaylistsSubsystem"), &Z_Registration_Info_UClass_USequencerPlaylistsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPlaylistsSubsystem), 2671938046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_266488341(TEXT("/Script/SequencerPlaylists"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
