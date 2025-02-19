// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataChunk() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavigationDataChunk::StaticRegisterNativesUNavigationDataChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationDataChunk);
	UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister()
	{
		return UNavigationDataChunk::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationDataChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationDataName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NavigationDataName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationDataChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * \n */" },
		{ "IncludePath", "AI/Navigation/NavigationDataChunk.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName_MetaData[] = {
		{ "Comment", "/** Name of NavigationData actor that owns this chunk */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
		{ "ToolTip", "Name of NavigationData actor that owns this chunk" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName = { "NavigationDataName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationDataChunk, NavigationDataName), METADATA_PARAMS(Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationDataChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationDataChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationDataChunk_Statics::ClassParams = {
		&UNavigationDataChunk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationDataChunk()
	{
		if (!Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton, Z_Construct_UClass_UNavigationDataChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNavigationDataChunk>()
	{
		return UNavigationDataChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationDataChunk);
	UNavigationDataChunk::~UNavigationDataChunk() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationDataChunk, UNavigationDataChunk::StaticClass, TEXT("UNavigationDataChunk"), &Z_Registration_Info_UClass_UNavigationDataChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationDataChunk), 1461742312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_2413712248(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
