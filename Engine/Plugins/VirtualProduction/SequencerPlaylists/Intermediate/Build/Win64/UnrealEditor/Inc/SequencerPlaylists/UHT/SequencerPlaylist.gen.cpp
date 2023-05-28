// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerPlaylist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerPlaylist() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylist();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylist_NoRegister();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerPlaylists();
// End Cross Module References
	void USequencerPlaylist::StaticRegisterNativesUSequencerPlaylist()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPlaylist);
	UClass* Z_Construct_UClass_USequencerPlaylist_NoRegister()
	{
		return USequencerPlaylist::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPlaylist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPlaylist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SequencerPlaylist.h" },
		{ "ModuleRelativePath", "Public/SequencerPlaylist.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SequencerPlaylists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylist.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010000020005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylist, Description), METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USequencerPlaylistItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "SequencerPlaylists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylist.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylist, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Items_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerPlaylist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylist_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPlaylist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPlaylist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPlaylist_Statics::ClassParams = {
		&USequencerPlaylist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerPlaylist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylist_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerPlaylist()
	{
		if (!Z_Registration_Info_UClass_USequencerPlaylist.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPlaylist.OuterSingleton, Z_Construct_UClass_USequencerPlaylist_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPlaylist.OuterSingleton;
	}
	template<> SEQUENCERPLAYLISTS_API UClass* StaticClass<USequencerPlaylist>()
	{
		return USequencerPlaylist::StaticClass();
	}
	USequencerPlaylist::USequencerPlaylist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPlaylist);
	USequencerPlaylist::~USequencerPlaylist() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerPlaylist, USequencerPlaylist::StaticClass, TEXT("USequencerPlaylist"), &Z_Registration_Info_UClass_USequencerPlaylist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPlaylist), 233878655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_819456279(TEXT("/Script/SequencerPlaylists"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
