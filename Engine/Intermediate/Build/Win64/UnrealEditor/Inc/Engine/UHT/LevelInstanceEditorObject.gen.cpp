// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Private/LevelInstance/LevelInstanceEditorObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceEditorObject();
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceEditorObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelInstanceEditorObject::StaticRegisterNativesULevelInstanceEditorObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceEditorObject);
	UClass* Z_Construct_UClass_ULevelInstanceEditorObject_NoRegister()
	{
		return ULevelInstanceEditorObject::StaticClass();
	}
	struct Z_Construct_UClass_ULevelInstanceEditorObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMovedActors_MetaData[];
#endif
		static void NewProp_bMovedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovedActors;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OtherPackagesToSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherPackagesToSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherPackagesToSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelInstanceEditorObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceEditorObject.h" },
		{ "ModuleRelativePath", "Private/LevelInstance/LevelInstanceEditorObject.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_bMovedActors_MetaData[] = {
		{ "Comment", "// If current Level edit has moved actors in/out of the level\n" },
		{ "ModuleRelativePath", "Private/LevelInstance/LevelInstanceEditorObject.h" },
		{ "ToolTip", "If current Level edit has moved actors in/out of the level" },
	};
#endif
	void Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_bMovedActors_SetBit(void* Obj)
	{
		((ULevelInstanceEditorObject*)Obj)->bMovedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_bMovedActors = { "bMovedActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelInstanceEditorObject), &Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_bMovedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_bMovedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_bMovedActors_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_OtherPackagesToSave_Inner = { "OtherPackagesToSave", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_OtherPackagesToSave_MetaData[] = {
		{ "Comment", "// List of packages to save when committing level \n" },
		{ "ModuleRelativePath", "Private/LevelInstance/LevelInstanceEditorObject.h" },
		{ "ToolTip", "List of packages to save when committing level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_OtherPackagesToSave = { "OtherPackagesToSave", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelInstanceEditorObject, OtherPackagesToSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_OtherPackagesToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_OtherPackagesToSave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelInstanceEditorObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_bMovedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_OtherPackagesToSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorObject_Statics::NewProp_OtherPackagesToSave,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelInstanceEditorObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceEditorObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceEditorObject_Statics::ClassParams = {
		&ULevelInstanceEditorObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelInstanceEditorObject()
	{
		if (!Z_Registration_Info_UClass_ULevelInstanceEditorObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceEditorObject.OuterSingleton, Z_Construct_UClass_ULevelInstanceEditorObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelInstanceEditorObject.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelInstanceEditorObject>()
	{
		return ULevelInstanceEditorObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceEditorObject);
	ULevelInstanceEditorObject::~ULevelInstanceEditorObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceEditorObject, ULevelInstanceEditorObject::StaticClass, TEXT("ULevelInstanceEditorObject"), &Z_Registration_Info_UClass_ULevelInstanceEditorObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceEditorObject), 1493096165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_1452955089(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
