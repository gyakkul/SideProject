// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/EditorWorldExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorWorldExtension() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionCollection();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionCollection_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionManager();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorWorldExtensionActorData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData;
class UScriptStruct* FEditorWorldExtensionActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorWorldExtensionActorData"));
	}
	return Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorWorldExtensionActorData>()
{
	return FEditorWorldExtensionActorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidForPIE_MetaData[];
#endif
		static void NewProp_bValidForPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidForPIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorWorldExtensionActorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorWorldExtensionActorData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_SetBit(void* Obj)
	{
		((FEditorWorldExtensionActorData*)Obj)->bValidForPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE = { "bValidForPIE", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorWorldExtensionActorData), &Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorWorldExtensionActorData",
		sizeof(FEditorWorldExtensionActorData),
		alignof(FEditorWorldExtensionActorData),
		Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorWorldExtensionActorData()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData.InnerSingleton, Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData.InnerSingleton;
	}
	void UEditorWorldExtension::StaticRegisterNativesUEditorWorldExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorWorldExtension);
	UClass* Z_Construct_UClass_UEditorWorldExtension_NoRegister()
	{
		return UEditorWorldExtension::StaticClass();
	}
	struct Z_Construct_UClass_UEditorWorldExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtensionActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorWorldExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtension_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorWorldExtension.h" },
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_Inner = { "ExtensionActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorWorldExtensionActorData, METADATA_PARAMS(nullptr, 0) }; // 3115664948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors = { "ExtensionActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorWorldExtension, ExtensionActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_MetaData)) }; // 3115664948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorWorldExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorWorldExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWorldExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorWorldExtension_Statics::ClassParams = {
		&UEditorWorldExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorWorldExtension_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtension_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorWorldExtension()
	{
		if (!Z_Registration_Info_UClass_UEditorWorldExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorWorldExtension.OuterSingleton, Z_Construct_UClass_UEditorWorldExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorWorldExtension.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorWorldExtension>()
	{
		return UEditorWorldExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWorldExtension);
	void UEditorWorldExtensionCollection::StaticRegisterNativesUEditorWorldExtensionCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorWorldExtensionCollection);
	UClass* Z_Construct_UClass_UEditorWorldExtensionCollection_NoRegister()
	{
		return UEditorWorldExtensionCollection::StaticClass();
	}
	struct Z_Construct_UClass_UEditorWorldExtensionCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a collection of UEditorExtension\n */" },
		{ "IncludePath", "EditorWorldExtension.h" },
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
		{ "ToolTip", "Holds a collection of UEditorExtension" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWorldExtensionCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::ClassParams = {
		&UEditorWorldExtensionCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorWorldExtensionCollection()
	{
		if (!Z_Registration_Info_UClass_UEditorWorldExtensionCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorWorldExtensionCollection.OuterSingleton, Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorWorldExtensionCollection.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorWorldExtensionCollection>()
	{
		return UEditorWorldExtensionCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWorldExtensionCollection);
	void UEditorWorldExtensionManager::StaticRegisterNativesUEditorWorldExtensionManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorWorldExtensionManager);
	UClass* Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister()
	{
		return UEditorWorldExtensionManager::StaticClass();
	}
	struct Z_Construct_UClass_UEditorWorldExtensionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorWorldExtensionCollection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorWorldExtensionCollection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorWorldExtensionCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorWorldExtensionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtensionManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a map of extension collections paired with worlds\n */" },
		{ "IncludePath", "EditorWorldExtension.h" },
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
		{ "ToolTip", "Holds a map of extension collections paired with worlds" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_Inner = { "EditorWorldExtensionCollection", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEditorWorldExtensionCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_MetaData[] = {
		{ "Comment", "/** Map of all the editor world maps */" },
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
		{ "ToolTip", "Map of all the editor world maps" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection = { "EditorWorldExtensionCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorWorldExtensionManager, EditorWorldExtensionCollection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorWorldExtensionManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorWorldExtensionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWorldExtensionManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorWorldExtensionManager_Statics::ClassParams = {
		&UEditorWorldExtensionManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorWorldExtensionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorWorldExtensionManager()
	{
		if (!Z_Registration_Info_UClass_UEditorWorldExtensionManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorWorldExtensionManager.OuterSingleton, Z_Construct_UClass_UEditorWorldExtensionManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorWorldExtensionManager.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorWorldExtensionManager>()
	{
		return UEditorWorldExtensionManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWorldExtensionManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_Statics::ScriptStructInfo[] = {
		{ FEditorWorldExtensionActorData::StaticStruct, Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewStructOps, TEXT("EditorWorldExtensionActorData"), &Z_Registration_Info_UScriptStruct_EditorWorldExtensionActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorWorldExtensionActorData), 3115664948U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorWorldExtension, UEditorWorldExtension::StaticClass, TEXT("UEditorWorldExtension"), &Z_Registration_Info_UClass_UEditorWorldExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorWorldExtension), 3811687657U) },
		{ Z_Construct_UClass_UEditorWorldExtensionCollection, UEditorWorldExtensionCollection::StaticClass, TEXT("UEditorWorldExtensionCollection"), &Z_Registration_Info_UClass_UEditorWorldExtensionCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorWorldExtensionCollection), 72565047U) },
		{ Z_Construct_UClass_UEditorWorldExtensionManager, UEditorWorldExtensionManager::StaticClass, TEXT("UEditorWorldExtensionManager"), &Z_Registration_Info_UClass_UEditorWorldExtensionManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorWorldExtensionManager), 1794312912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_3226223499(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorWorldExtension_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
