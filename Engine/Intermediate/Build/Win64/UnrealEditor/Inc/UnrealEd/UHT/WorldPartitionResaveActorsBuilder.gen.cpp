// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionResaveActorsBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionResaveActorsBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionResaveActorsBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionResaveActorsBuilder::StaticRegisterNativesUWorldPartitionResaveActorsBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionResaveActorsBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_NoRegister()
	{
		return UWorldPartitionResaveActorsBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassesFromFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorClassesFromFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReportOnly_MetaData[];
#endif
		static void NewProp_bReportOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReportOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResaveDirtyActorDescsOnly_MetaData[];
#endif
		static void NewProp_bResaveDirtyActorDescsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResaveDirtyActorDescsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiffDirtyActorDescs_MetaData[];
#endif
		static void NewProp_bDiffDirtyActorDescs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiffDirtyActorDescs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwitchActorPackagingSchemeToReduced_MetaData[];
#endif
		static void NewProp_bSwitchActorPackagingSchemeToReduced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchActorPackagingSchemeToReduced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableActorFolders_MetaData[];
#endif
		static void NewProp_bEnableActorFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableActorFolders;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorTags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActorTags;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionResaveActorsBuilder [-ActorClassName=StaticMeshActor] [-SwitchActorPackagingSchemeToReduced] [-ActorTags=(Tag1,Tag2,...)] [-ActorProperties=((Property1,Value1),(Property2,Value2),...)]\n" },
		{ "IncludePath", "WorldPartition/WorldPartitionResaveActorsBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
		{ "ToolTip", "Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionResaveActorsBuilder [-ActorClassName=StaticMeshActor] [-SwitchActorPackagingSchemeToReduced] [-ActorTags=(Tag1,Tag2,...)] [-ActorProperties=((Property1,Value1),(Property2,Value2),...)]" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassName = { "ActorClassName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionResaveActorsBuilder, ActorClassName), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassesFromFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassesFromFile = { "ActorClassesFromFile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionResaveActorsBuilder, ActorClassesFromFile), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassesFromFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassesFromFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bReportOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bReportOnly_SetBit(void* Obj)
	{
		((UWorldPartitionResaveActorsBuilder*)Obj)->bReportOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bReportOnly = { "bReportOnly", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionResaveActorsBuilder), &Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bReportOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bReportOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bReportOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bResaveDirtyActorDescsOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bResaveDirtyActorDescsOnly_SetBit(void* Obj)
	{
		((UWorldPartitionResaveActorsBuilder*)Obj)->bResaveDirtyActorDescsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bResaveDirtyActorDescsOnly = { "bResaveDirtyActorDescsOnly", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionResaveActorsBuilder), &Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bResaveDirtyActorDescsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bResaveDirtyActorDescsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bResaveDirtyActorDescsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bDiffDirtyActorDescs_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bDiffDirtyActorDescs_SetBit(void* Obj)
	{
		((UWorldPartitionResaveActorsBuilder*)Obj)->bDiffDirtyActorDescs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bDiffDirtyActorDescs = { "bDiffDirtyActorDescs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionResaveActorsBuilder), &Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bDiffDirtyActorDescs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bDiffDirtyActorDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bDiffDirtyActorDescs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bSwitchActorPackagingSchemeToReduced_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bSwitchActorPackagingSchemeToReduced_SetBit(void* Obj)
	{
		((UWorldPartitionResaveActorsBuilder*)Obj)->bSwitchActorPackagingSchemeToReduced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bSwitchActorPackagingSchemeToReduced = { "bSwitchActorPackagingSchemeToReduced", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionResaveActorsBuilder), &Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bSwitchActorPackagingSchemeToReduced_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bSwitchActorPackagingSchemeToReduced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bSwitchActorPackagingSchemeToReduced_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bEnableActorFolders_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bEnableActorFolders_SetBit(void* Obj)
	{
		((UWorldPartitionResaveActorsBuilder*)Obj)->bEnableActorFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bEnableActorFolders = { "bEnableActorFolders", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionResaveActorsBuilder), &Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bEnableActorFolders_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bEnableActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bEnableActorFolders_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorTags_ElementProp = { "ActorTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorTags = { "ActorTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionResaveActorsBuilder, ActorTags), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorTags_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties_ValueProp = { "ActorProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties_Key_KeyProp = { "ActorProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionResaveActorsBuilder.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties = { "ActorProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionResaveActorsBuilder, ActorProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorClassesFromFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bReportOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bResaveDirtyActorDescsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bDiffDirtyActorDescs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bSwitchActorPackagingSchemeToReduced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_bEnableActorFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorTags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::NewProp_ActorProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionResaveActorsBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::ClassParams = {
		&UWorldPartitionResaveActorsBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionResaveActorsBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionResaveActorsBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionResaveActorsBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionResaveActorsBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionResaveActorsBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionResaveActorsBuilder>()
	{
		return UWorldPartitionResaveActorsBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionResaveActorsBuilder);
	UWorldPartitionResaveActorsBuilder::~UWorldPartitionResaveActorsBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionResaveActorsBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionResaveActorsBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionResaveActorsBuilder, UWorldPartitionResaveActorsBuilder::StaticClass, TEXT("UWorldPartitionResaveActorsBuilder"), &Z_Registration_Info_UClass_UWorldPartitionResaveActorsBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionResaveActorsBuilder), 2593078664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionResaveActorsBuilder_h_1295132902(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionResaveActorsBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionResaveActorsBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
