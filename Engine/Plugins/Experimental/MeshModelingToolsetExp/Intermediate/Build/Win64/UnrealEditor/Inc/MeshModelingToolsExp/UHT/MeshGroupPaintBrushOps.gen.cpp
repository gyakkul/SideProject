// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sculpting/MeshGroupPaintBrushOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshGroupPaintBrushOps() {}
// Cross Module References
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupEraseBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupPaintBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UGroupEraseBrushOpProps::StaticRegisterNativesUGroupEraseBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroupEraseBrushOpProps);
	UClass* Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister()
	{
		return UGroupEraseBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UGroupEraseBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyEraseCurrent_MetaData[];
#endif
		static void NewProp_bOnlyEraseCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyEraseCurrent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshGroupPaintBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshGroupPaintBrushOps.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "EraseBrush" },
		{ "Comment", "/** Group to set as Erased value */" },
		{ "DisplayName", "Erase Group" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshGroupPaintBrushOps.h" },
		{ "ToolTip", "Group to set as Erased value" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupEraseBrushOpProps, Group), METADATA_PARAMS(Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent_MetaData[] = {
		{ "Category", "EraseBrush" },
		{ "Comment", "/** When enabled, only the current group configured in the Paint brush is erased */" },
		{ "DisplayName", "Only Current" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshGroupPaintBrushOps.h" },
		{ "ToolTip", "When enabled, only the current group configured in the Paint brush is erased" },
	};
#endif
	void Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent_SetBit(void* Obj)
	{
		((UGroupEraseBrushOpProps*)Obj)->bOnlyEraseCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent = { "bOnlyEraseCurrent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupEraseBrushOpProps), &Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupEraseBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::ClassParams = {
		&UGroupEraseBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupEraseBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UGroupEraseBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroupEraseBrushOpProps.OuterSingleton, Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroupEraseBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UGroupEraseBrushOpProps>()
	{
		return UGroupEraseBrushOpProps::StaticClass();
	}
	UGroupEraseBrushOpProps::UGroupEraseBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupEraseBrushOpProps);
	UGroupEraseBrushOpProps::~UGroupEraseBrushOpProps() {}
	void UGroupPaintBrushOpProps::StaticRegisterNativesUGroupPaintBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroupPaintBrushOpProps);
	UClass* Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister()
	{
		return UGroupPaintBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UGroupPaintBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyPaintUngrouped_MetaData[];
#endif
		static void NewProp_bOnlyPaintUngrouped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyPaintUngrouped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshGroupPaintBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshGroupPaintBrushOps.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "Comment", "/** The group that will be assigned to triangles within the brush region */" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshGroupPaintBrushOps.h" },
		{ "ToolTip", "The group that will be assigned to triangles within the brush region" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushOpProps, Group), METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "Comment", "/** If true, only triangles with no group assigned will be painted */" },
		{ "DisplayName", "Only Ungrouped" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshGroupPaintBrushOps.h" },
		{ "ToolTip", "If true, only triangles with no group assigned will be painted" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped_SetBit(void* Obj)
	{
		((UGroupPaintBrushOpProps*)Obj)->bOnlyPaintUngrouped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped = { "bOnlyPaintUngrouped", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushOpProps), &Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupPaintBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::ClassParams = {
		&UGroupPaintBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupPaintBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UGroupPaintBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroupPaintBrushOpProps.OuterSingleton, Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroupPaintBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UGroupPaintBrushOpProps>()
	{
		return UGroupPaintBrushOpProps::StaticClass();
	}
	UGroupPaintBrushOpProps::UGroupPaintBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupPaintBrushOpProps);
	UGroupPaintBrushOpProps::~UGroupPaintBrushOpProps() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshGroupPaintBrushOps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshGroupPaintBrushOps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroupEraseBrushOpProps, UGroupEraseBrushOpProps::StaticClass, TEXT("UGroupEraseBrushOpProps"), &Z_Registration_Info_UClass_UGroupEraseBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroupEraseBrushOpProps), 4050058426U) },
		{ Z_Construct_UClass_UGroupPaintBrushOpProps, UGroupPaintBrushOpProps::StaticClass, TEXT("UGroupPaintBrushOpProps"), &Z_Registration_Info_UClass_UGroupPaintBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroupPaintBrushOpProps), 2631761645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshGroupPaintBrushOps_h_279951304(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshGroupPaintBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshGroupPaintBrushOps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
