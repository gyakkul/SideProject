// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Commandlets/ChunkDependencyInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkDependencyInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UChunkDependencyInfo();
	UNREALED_API UClass* Z_Construct_UClass_UChunkDependencyInfo_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FChunkDependency();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkDependency;
class UScriptStruct* FChunkDependency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkDependency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkDependency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkDependency, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ChunkDependency"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkDependency.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FChunkDependency>()
{
	return FChunkDependency::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkDependency_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentChunkID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentChunkID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDependency_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single dependency, read from ini file */" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "A single dependency, read from ini file" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkDependency>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "Comment", "/** The child chunk */" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "The child chunk" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID = { "ChunkID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkDependency, ChunkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "Comment", "/** Parent chunk, anything in both Parent and Child is only placed into Parent */" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "Parent chunk, anything in both Parent and Child is only placed into Parent" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID = { "ParentChunkID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkDependency, ParentChunkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ChunkID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDependency_Statics::NewProp_ParentChunkID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ChunkDependency",
		sizeof(FChunkDependency),
		alignof(FChunkDependency),
		Z_Construct_UScriptStruct_FChunkDependency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkDependency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkDependency()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkDependency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkDependency.InnerSingleton, Z_Construct_UScriptStruct_FChunkDependency_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkDependency.InnerSingleton;
	}
	void UChunkDependencyInfo::StaticRegisterNativesUChunkDependencyInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChunkDependencyInfo);
	UClass* Z_Construct_UClass_UChunkDependencyInfo_NoRegister()
	{
		return UChunkDependencyInfo::StaticClass();
	}
	struct Z_Construct_UClass_UChunkDependencyInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DependencyArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DependencyArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChunkDependencyInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChunkDependencyInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This is read out of config and defines a tree of chunk dependencies */" },
		{ "IncludePath", "Commandlets/ChunkDependencyInfo.h" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "This is read out of config and defines a tree of chunk dependencies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_Inner = { "DependencyArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChunkDependency, METADATA_PARAMS(nullptr, 0) }; // 853972485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_MetaData[] = {
		{ "Comment", "/** List of dependencies used to remove redundant chunks */" },
		{ "ModuleRelativePath", "Public/Commandlets/ChunkDependencyInfo.h" },
		{ "ToolTip", "List of dependencies used to remove redundant chunks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray = { "DependencyArray", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChunkDependencyInfo, DependencyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_MetaData)) }; // 853972485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChunkDependencyInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChunkDependencyInfo_Statics::NewProp_DependencyArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChunkDependencyInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChunkDependencyInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChunkDependencyInfo_Statics::ClassParams = {
		&UChunkDependencyInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChunkDependencyInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChunkDependencyInfo_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UChunkDependencyInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChunkDependencyInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChunkDependencyInfo()
	{
		if (!Z_Registration_Info_UClass_UChunkDependencyInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChunkDependencyInfo.OuterSingleton, Z_Construct_UClass_UChunkDependencyInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChunkDependencyInfo.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UChunkDependencyInfo>()
	{
		return UChunkDependencyInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChunkDependencyInfo);
	UChunkDependencyInfo::~UChunkDependencyInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_Statics::ScriptStructInfo[] = {
		{ FChunkDependency::StaticStruct, Z_Construct_UScriptStruct_FChunkDependency_Statics::NewStructOps, TEXT("ChunkDependency"), &Z_Registration_Info_UScriptStruct_ChunkDependency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkDependency), 853972485U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChunkDependencyInfo, UChunkDependencyInfo::StaticClass, TEXT("UChunkDependencyInfo"), &Z_Registration_Info_UClass_UChunkDependencyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChunkDependencyInfo), 263421787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_2723531133(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
