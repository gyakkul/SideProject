// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingMatrixCellComponent.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingMatrixCellComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingMatrixCellComponent::StaticRegisterNativesUDMXPixelMappingMatrixCellComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingMatrixCellComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_NoRegister()
	{
		return UDMXPixelMappingMatrixCellComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchMatrixRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchMatrixRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Matrix pixel component\n */" },
		{ "IncludePath", "Components/DMXPixelMappingMatrixCellComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixCellComponent.h" },
		{ "ToolTip", "Matrix pixel component" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellID_MetaData[] = {
		{ "Category", "Cell Settings" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixCellComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellID = { "CellID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixCellComponent, CellID), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_FixturePatchMatrixRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixCellComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_FixturePatchMatrixRef = { "FixturePatchMatrixRef", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixCellComponent, FixturePatchMatrixRef_DEPRECATED), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_FixturePatchMatrixRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_FixturePatchMatrixRef_MetaData)) }; // 1707509301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixCellComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixCellComponent, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellCoordinate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_FixturePatchMatrixRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::NewProp_CellCoordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingMatrixCellComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::ClassParams = {
		&UDMXPixelMappingMatrixCellComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingMatrixCellComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingMatrixCellComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingMatrixCellComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingMatrixCellComponent>()
	{
		return UDMXPixelMappingMatrixCellComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingMatrixCellComponent);
	UDMXPixelMappingMatrixCellComponent::~UDMXPixelMappingMatrixCellComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixCellComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixCellComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingMatrixCellComponent, UDMXPixelMappingMatrixCellComponent::StaticClass, TEXT("UDMXPixelMappingMatrixCellComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingMatrixCellComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingMatrixCellComponent), 1934624751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixCellComponent_h_2888312980(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixCellComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixCellComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
