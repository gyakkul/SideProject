// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshSocket() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UStaticMeshSocket::StaticRegisterNativesUStaticMeshSocket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshSocket);
	UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister()
	{
		return UStaticMeshSocket::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSocketCreatedAtImport_MetaData[];
#endif
		static void NewProp_bSocketCreatedAtImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSocketCreatedAtImport;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Actor" },
		{ "IncludePath", "Engine/StaticMeshSocket.h" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "Comment", "/** \n\x09 *\x09""Defines a named attachment location on the UStaticMesh. \n\x09 *\x09These are set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the StaticMeshComponent.\n\x09 *\x09The Outer of a StaticMeshSocket should always be the UStaticMesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
		{ "ToolTip", "Defines a named attachment location on the UStaticMesh.\nThese are set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the StaticMeshComponent.\nThe Outer of a StaticMeshSocket should always be the UStaticMesh." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshSocket, SocketName), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshSocket, Tag), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh = { "PreviewStaticMesh", nullptr, (EPropertyFlags)0x0014040800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshSocket, PreviewStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_MetaData[] = {
		{ "Comment", "/* Whether the socket was imported with the asset or created in the editor. Importer will remove/modify only imported socket and will not touch any editor created socket. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
		{ "ToolTip", "Whether the socket was imported with the asset or created in the editor. Importer will remove/modify only imported socket and will not touch any editor created socket." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_SetBit(void* Obj)
	{
		((UStaticMeshSocket*)Obj)->bSocketCreatedAtImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport = { "bSocketCreatedAtImport", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaticMeshSocket), &Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshSocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshSocket_Statics::ClassParams = {
		&UStaticMeshSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticMeshSocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshSocket()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshSocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshSocket.OuterSingleton, Z_Construct_UClass_UStaticMeshSocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshSocket.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStaticMeshSocket>()
	{
		return UStaticMeshSocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshSocket);
	UStaticMeshSocket::~UStaticMeshSocket() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshSocket)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshSocket, UStaticMeshSocket::StaticClass, TEXT("UStaticMeshSocket"), &Z_Registration_Info_UClass_UStaticMeshSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshSocket), 850677483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_1349868749(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
