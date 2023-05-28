// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/BaseVoxelTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseVoxelTool() {}
// Cross Module References
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UVoxelProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UBaseVoxelTool::StaticRegisterNativesUBaseVoxelTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseVoxelTool);
	UClass* Z_Construct_UClass_UBaseVoxelTool_NoRegister()
	{
		return UBaseVoxelTool::StaticClass();
	}
	struct Z_Construct_UClass_UBaseVoxelTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VoxProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseVoxelTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseVoxelTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for Voxel tools\n */" },
		{ "IncludePath", "BaseTools/BaseVoxelTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseVoxelTool.h" },
		{ "ToolTip", "Base for Voxel tools" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseVoxelTool_Statics::NewProp_VoxProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseVoxelTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseVoxelTool_Statics::NewProp_VoxProperties = { "VoxProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseVoxelTool, VoxProperties), Z_Construct_UClass_UVoxelProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseVoxelTool_Statics::NewProp_VoxProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVoxelTool_Statics::NewProp_VoxProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseVoxelTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVoxelTool_Statics::NewProp_VoxProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseVoxelTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseVoxelTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseVoxelTool_Statics::ClassParams = {
		&UBaseVoxelTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseVoxelTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVoxelTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseVoxelTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVoxelTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseVoxelTool()
	{
		if (!Z_Registration_Info_UClass_UBaseVoxelTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseVoxelTool.OuterSingleton, Z_Construct_UClass_UBaseVoxelTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseVoxelTool.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBaseVoxelTool>()
	{
		return UBaseVoxelTool::StaticClass();
	}
	UBaseVoxelTool::UBaseVoxelTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseVoxelTool);
	UBaseVoxelTool::~UBaseVoxelTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseVoxelTool, UBaseVoxelTool::StaticClass, TEXT("UBaseVoxelTool"), &Z_Registration_Info_UClass_UBaseVoxelTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseVoxelTool), 124756492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_1186112203(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
