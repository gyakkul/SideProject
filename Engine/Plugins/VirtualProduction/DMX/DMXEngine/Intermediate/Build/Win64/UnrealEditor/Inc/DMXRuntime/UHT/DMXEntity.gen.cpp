// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXEntity() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXObjectBase();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXEntity::StaticRegisterNativesUDMXEntity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEntity);
	UClass* Z_Construct_UClass_UDMXEntity_NoRegister()
	{
		return UDMXEntity::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**  Base class for all entity types */" },
		{ "DisplayName", "DMX Entity" },
		{ "IncludePath", "Library/DMXEntity.h" },
		{ "ModuleRelativePath", "Public/Library/DMXEntity.h" },
		{ "ToolTip", "Base class for all entity types" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntity_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Entity Properties" },
		{ "DisplayName", "Name" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Library/DMXEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXEntity_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntity, Name), METADATA_PARAMS(Z_Construct_UClass_UDMXEntity_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntity_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntity_Statics::NewProp_ParentLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/DMXEntity.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXEntity_Statics::NewProp_ParentLibrary = { "ParentLibrary", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntity, ParentLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXEntity_Statics::NewProp_ParentLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntity_Statics::NewProp_ParentLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntity_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Uniquely identifies the parameter, used for fixing up Blueprints that reference this Entity when renaming. */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntity.h" },
		{ "ToolTip", "Uniquely identifies the parameter, used for fixing up Blueprints that reference this Entity when renaming." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEntity_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntity, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDMXEntity_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntity_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntity_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntity_Statics::NewProp_ParentLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntity_Statics::NewProp_Id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEntity_Statics::ClassParams = {
		&UDMXEntity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntity_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXEntity()
	{
		if (!Z_Registration_Info_UClass_UDMXEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEntity.OuterSingleton, Z_Construct_UClass_UDMXEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEntity.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXEntity>()
	{
		return UDMXEntity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEntity);
	UDMXEntity::~UDMXEntity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXEntity, UDMXEntity::StaticClass, TEXT("UDMXEntity"), &Z_Registration_Info_UClass_UDMXEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEntity), 3792081191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_738999186(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
