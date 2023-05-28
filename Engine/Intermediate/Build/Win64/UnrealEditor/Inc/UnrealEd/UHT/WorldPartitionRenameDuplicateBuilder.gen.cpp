// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionRenameDuplicateBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRenameDuplicateBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionRenameDuplicateBuilder::StaticRegisterNativesUWorldPartitionRenameDuplicateBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRenameDuplicateBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_NoRegister()
	{
		return UWorldPartitionRenameDuplicateBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DuplicatedObjects_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DuplicatedObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DuplicatedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionRenameDuplicateBuilder -NewPackage=NewPackage [Optional: -Rename]\n" },
		{ "IncludePath", "WorldPartition/WorldPartitionRenameDuplicateBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRenameDuplicateBuilder.h" },
		{ "ToolTip", "Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionRenameDuplicateBuilder -NewPackage=NewPackage [Optional: -Rename]" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects_ValueProp = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects_Key_KeyProp = { "DuplicatedObjects_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects_MetaData[] = {
		{ "Comment", "// Keep duplicated objects around through GC calls.\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRenameDuplicateBuilder.h" },
		{ "ToolTip", "Keep duplicated objects around through GC calls." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionRenameDuplicateBuilder, DuplicatedObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::NewProp_DuplicatedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRenameDuplicateBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::ClassParams = {
		&UWorldPartitionRenameDuplicateBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRenameDuplicateBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRenameDuplicateBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRenameDuplicateBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionRenameDuplicateBuilder>()
	{
		return UWorldPartitionRenameDuplicateBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRenameDuplicateBuilder);
	UWorldPartitionRenameDuplicateBuilder::~UWorldPartitionRenameDuplicateBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRenameDuplicateBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRenameDuplicateBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRenameDuplicateBuilder, UWorldPartitionRenameDuplicateBuilder::StaticClass, TEXT("UWorldPartitionRenameDuplicateBuilder"), &Z_Registration_Info_UClass_UWorldPartitionRenameDuplicateBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRenameDuplicateBuilder), 415739005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRenameDuplicateBuilder_h_329720714(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRenameDuplicateBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRenameDuplicateBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
