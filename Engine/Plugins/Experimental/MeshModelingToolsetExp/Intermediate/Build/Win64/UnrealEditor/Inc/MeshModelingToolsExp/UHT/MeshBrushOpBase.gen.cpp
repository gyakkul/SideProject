// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sculpting/MeshBrushOpBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBrushOpBase() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlaneBrushSideMode;
	static UEnum* EPlaneBrushSideMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPlaneBrushSideMode"));
		}
		return Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPlaneBrushSideMode>()
	{
		return EPlaneBrushSideMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::Enumerators[] = {
		{ "EPlaneBrushSideMode::BothSides", (int64)EPlaneBrushSideMode::BothSides },
		{ "EPlaneBrushSideMode::PushDown", (int64)EPlaneBrushSideMode::PushDown },
		{ "EPlaneBrushSideMode::PullTowards", (int64)EPlaneBrushSideMode::PullTowards },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::Enum_MetaDataParams[] = {
		{ "BothSides.Name", "EPlaneBrushSideMode::BothSides" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshBrushOpBase.h" },
		{ "PullTowards.Name", "EPlaneBrushSideMode::PullTowards" },
		{ "PushDown.Name", "EPlaneBrushSideMode::PushDown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EPlaneBrushSideMode",
		"EPlaneBrushSideMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode()
	{
		if (!Z_Registration_Info_UEnum_EPlaneBrushSideMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlaneBrushSideMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlaneBrushSideMode.InnerSingleton;
	}
	void UMeshSculptBrushOpProps::StaticRegisterNativesUMeshSculptBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSculptBrushOpProps);
	UClass* Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister()
	{
		return UMeshSculptBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSculptBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshBrushOpBase.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshBrushOpBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSculptBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::ClassParams = {
		&UMeshSculptBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSculptBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UMeshSculptBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSculptBrushOpProps.OuterSingleton, Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSculptBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSculptBrushOpProps>()
	{
		return UMeshSculptBrushOpProps::StaticClass();
	}
	UMeshSculptBrushOpProps::UMeshSculptBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSculptBrushOpProps);
	UMeshSculptBrushOpProps::~UMeshSculptBrushOpProps() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_Statics::EnumInfo[] = {
		{ EPlaneBrushSideMode_StaticEnum, TEXT("EPlaneBrushSideMode"), &Z_Registration_Info_UEnum_EPlaneBrushSideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 865554240U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSculptBrushOpProps, UMeshSculptBrushOpProps::StaticClass, TEXT("UMeshSculptBrushOpProps"), &Z_Registration_Info_UClass_UMeshSculptBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSculptBrushOpProps), 2342503323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_716909482(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshBrushOpBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
