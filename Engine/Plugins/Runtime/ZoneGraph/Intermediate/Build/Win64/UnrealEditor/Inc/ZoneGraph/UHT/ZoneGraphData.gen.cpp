// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphData.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneGraphData();
	ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneGraphData_NoRegister();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphRenderingComponent_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphStorage();
// End Cross Module References
	void AZoneGraphData::StaticRegisterNativesAZoneGraphData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZoneGraphData);
	UClass* Z_Construct_UClass_AZoneGraphData_NoRegister()
	{
		return AZoneGraphData::StaticClass();
	}
	struct Z_Construct_UClass_AZoneGraphData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDrawing_MetaData[];
#endif
		static void NewProp_bEnableDrawing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDrawing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneStorage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneStorage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinedShapeHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CombinedShapeHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZoneGraphData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZoneGraphData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ZoneGraphData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphData_Statics::NewProp_bEnableDrawing_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** if set to true then this zone graph data will be drawing itself when requested as part of \"show navigation\" */" },
		{ "ModuleRelativePath", "Public/ZoneGraphData.h" },
		{ "ToolTip", "if set to true then this zone graph data will be drawing itself when requested as part of \"show navigation\"" },
	};
#endif
	void Z_Construct_UClass_AZoneGraphData_Statics::NewProp_bEnableDrawing_SetBit(void* Obj)
	{
		((AZoneGraphData*)Obj)->bEnableDrawing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZoneGraphData_Statics::NewProp_bEnableDrawing = { "bEnableDrawing", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AZoneGraphData), &Z_Construct_UClass_AZoneGraphData_Statics::NewProp_bEnableDrawing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_bEnableDrawing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_bEnableDrawing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphData_Statics::NewProp_RenderingComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AZoneGraphData_Statics::NewProp_RenderingComp = { "RenderingComp", nullptr, (EPropertyFlags)0x0024080000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZoneGraphData, RenderingComp), Z_Construct_UClass_UZoneGraphRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_RenderingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_RenderingComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphData_Statics::NewProp_ZoneStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZoneGraphData_Statics::NewProp_ZoneStorage = { "ZoneStorage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZoneGraphData, ZoneStorage), Z_Construct_UScriptStruct_FZoneGraphStorage, METADATA_PARAMS(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_ZoneStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_ZoneStorage_MetaData)) }; // 1421378258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphData_Statics::NewProp_CombinedShapeHash_MetaData[] = {
		{ "Comment", "/** Combined hash of all ZoneShapes that were used to build the data. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphData.h" },
		{ "ToolTip", "Combined hash of all ZoneShapes that were used to build the data." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AZoneGraphData_Statics::NewProp_CombinedShapeHash = { "CombinedShapeHash", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZoneGraphData, CombinedShapeHash), METADATA_PARAMS(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_CombinedShapeHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphData_Statics::NewProp_CombinedShapeHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZoneGraphData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZoneGraphData_Statics::NewProp_bEnableDrawing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZoneGraphData_Statics::NewProp_RenderingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZoneGraphData_Statics::NewProp_ZoneStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZoneGraphData_Statics::NewProp_CombinedShapeHash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZoneGraphData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZoneGraphData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZoneGraphData_Statics::ClassParams = {
		&AZoneGraphData::StaticClass,
		"ZoneGraph",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZoneGraphData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphData_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_AZoneGraphData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZoneGraphData()
	{
		if (!Z_Registration_Info_UClass_AZoneGraphData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZoneGraphData.OuterSingleton, Z_Construct_UClass_AZoneGraphData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZoneGraphData.OuterSingleton;
	}
	template<> ZONEGRAPH_API UClass* StaticClass<AZoneGraphData>()
	{
		return AZoneGraphData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZoneGraphData);
	AZoneGraphData::~AZoneGraphData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZoneGraphData, AZoneGraphData::StaticClass, TEXT("AZoneGraphData"), &Z_Registration_Info_UClass_AZoneGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZoneGraphData), 2522286985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_2317925864(TEXT("/Script/ZoneGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
