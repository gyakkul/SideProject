// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneFolder.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFolder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneFolder::StaticRegisterNativesUMovieSceneFolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFolder);
	UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister()
	{
		return UMovieSceneFolder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildFolders;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildTracks;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChildObjectBindingStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildObjectBindingStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildObjectBindingStrings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FolderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildMasterTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildMasterTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildMasterTracks;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Represents a folder used for organizing objects in tracks in a movie scene. */" },
		{ "IncludePath", "MovieSceneFolder.h" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "Represents a folder used for organizing objects in tracks in a movie scene." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName_MetaData[] = {
		{ "Comment", "/** The name of this folder. */" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The name of this folder." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFolder, FolderName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_Inner = { "ChildFolders", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_MetaData[] = {
		{ "Comment", "/** The folders contained by this folder. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The folders contained by this folder." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders = { "ChildFolders", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFolder, ChildFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks_Inner = { "ChildTracks", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks_MetaData[] = {
		{ "Comment", "/** The tracks contained by this folder. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The tracks contained by this folder." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks = { "ChildTracks", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFolder, ChildTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_Inner = { "ChildObjectBindingStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_MetaData[] = {
		{ "Comment", "/** The guid strings used to serialize the guids for the object bindings contained by this folder. */" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The guid strings used to serialize the guids for the object bindings contained by this folder." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings = { "ChildObjectBindingStrings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFolder, ChildObjectBindingStrings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** This folder's color */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "This folder's color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor = { "FolderColor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFolder, FolderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder_MetaData[] = {
		{ "Comment", "/** This folder's desired sorting order */" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "This folder's desired sorting order" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFolder, SortingOrder), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_Inner = { "ChildMasterTracks", nullptr, (EPropertyFlags)0x0004000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks = { "ChildMasterTracks", nullptr, (EPropertyFlags)0x0044008820000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFolder, ChildMasterTracks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFolder_Statics::ClassParams = {
		&UMovieSceneFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFolder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton, Z_Construct_UClass_UMovieSceneFolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneFolder>()
	{
		return UMovieSceneFolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFolder);
	UMovieSceneFolder::~UMovieSceneFolder() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneFolder)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFolder, UMovieSceneFolder::StaticClass, TEXT("UMovieSceneFolder"), &Z_Registration_Info_UClass_UMovieSceneFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFolder), 1875488939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_2591664641(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
