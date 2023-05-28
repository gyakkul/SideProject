// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hierarchies/BaseModifierGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseModifierGroup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UBaseModifierGroup();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UBaseModifierGroup_NoRegister();
// End Cross Module References
	void UBaseModifierGroup::StaticRegisterNativesUBaseModifierGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseModifierGroup);
	UClass* Z_Construct_UClass_UBaseModifierGroup_NoRegister()
	{
		return UBaseModifierGroup::StaticClass();
	}
	struct Z_Construct_UClass_UBaseModifierGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseModifierGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Implements base logic to keep group names unique within a hierachy */" },
		{ "IncludePath", "Hierarchies/BaseModifierGroup.h" },
		{ "ModuleRelativePath", "Public/Hierarchies/BaseModifierGroup.h" },
		{ "ToolTip", "Implements base logic to keep group names unique within a hierachy" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierGroup_Statics::NewProp_NodeName_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/Hierarchies/BaseModifierGroup.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseModifierGroup_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseModifierGroup, NodeName), METADATA_PARAMS(Z_Construct_UClass_UBaseModifierGroup_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierGroup_Statics::NewProp_NodeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseModifierGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseModifierGroup_Statics::NewProp_NodeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseModifierGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseModifierGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseModifierGroup_Statics::ClassParams = {
		&UBaseModifierGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseModifierGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierGroup_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseModifierGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseModifierGroup()
	{
		if (!Z_Registration_Info_UClass_UBaseModifierGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseModifierGroup.OuterSingleton, Z_Construct_UClass_UBaseModifierGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseModifierGroup.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UBaseModifierGroup>()
	{
		return UBaseModifierGroup::StaticClass();
	}
	UBaseModifierGroup::UBaseModifierGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseModifierGroup);
	UBaseModifierGroup::~UBaseModifierGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseModifierGroup, UBaseModifierGroup::StaticClass, TEXT("UBaseModifierGroup"), &Z_Registration_Info_UClass_UBaseModifierGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseModifierGroup), 633906336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_31349706(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
