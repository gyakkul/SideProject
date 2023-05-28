// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Data/Filters/ConjunctionFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConjunctionFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UConjunctionFilter();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UConjunctionFilter_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UNegatableFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	void UConjunctionFilter::StaticRegisterNativesUConjunctionFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConjunctionFilter);
	UClass* Z_Construct_UClass_UConjunctionFilter_NoRegister()
	{
		return UConjunctionFilter::StaticClass();
	}
	struct Z_Construct_UClass_UConjunctionFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreFilter_MetaData[];
#endif
		static void NewProp_bIgnoreFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConjunctionFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjunctionFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Returns the result of and-ing all child filters.\n * It is valid to have no children: in this case, this filter return false.\n */" },
		{ "IncludePath", "Data/Filters/ConjunctionFilter.h" },
		{ "InternalSnapshotFilter", "" },
		{ "ModuleRelativePath", "Private/Data/Filters/ConjunctionFilter.h" },
		{ "ToolTip", "* Returns the result of and-ing all child filters.\n* It is valid to have no children: in this case, this filter return false." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Data/Filters/ConjunctionFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNegatableFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Data/Filters/ConjunctionFilter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConjunctionFilter, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_bIgnoreFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/Filters/ConjunctionFilter.h" },
	};
#endif
	void Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_bIgnoreFilter_SetBit(void* Obj)
	{
		((UConjunctionFilter*)Obj)->bIgnoreFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_bIgnoreFilter = { "bIgnoreFilter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConjunctionFilter), &Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_bIgnoreFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_bIgnoreFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_bIgnoreFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConjunctionFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjunctionFilter_Statics::NewProp_bIgnoreFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConjunctionFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConjunctionFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConjunctionFilter_Statics::ClassParams = {
		&UConjunctionFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConjunctionFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConjunctionFilter_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConjunctionFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConjunctionFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConjunctionFilter()
	{
		if (!Z_Registration_Info_UClass_UConjunctionFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConjunctionFilter.OuterSingleton, Z_Construct_UClass_UConjunctionFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConjunctionFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<UConjunctionFilter>()
	{
		return UConjunctionFilter::StaticClass();
	}
	UConjunctionFilter::UConjunctionFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConjunctionFilter);
	UConjunctionFilter::~UConjunctionFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConjunctionFilter, UConjunctionFilter::StaticClass, TEXT("UConjunctionFilter"), &Z_Registration_Info_UClass_UConjunctionFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConjunctionFilter), 2535146415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_687443761(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
