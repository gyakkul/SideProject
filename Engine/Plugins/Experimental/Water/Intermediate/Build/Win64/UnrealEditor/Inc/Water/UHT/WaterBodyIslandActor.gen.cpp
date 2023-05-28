// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyIslandActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WaterBodyHeightmapSettings.h"
#include "WaterBodyWeightmapSettings.h"
#include "WaterCurveSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyIslandActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyIsland();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyIsland_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBrushActorInterface_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineComponent_NoRegister();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterCurveSettings();
// End Cross Module References
	DEFINE_FUNCTION(AWaterBodyIsland::execGetWaterSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaterSplineComponent**)Z_Param__Result=P_THIS->GetWaterSpline();
		P_NATIVE_END;
	}
	void AWaterBodyIsland::StaticRegisterNativesAWaterBodyIsland()
	{
		UClass* Class = AWaterBodyIsland::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWaterSpline", &AWaterBodyIsland::execGetWaterSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics
	{
		struct WaterBodyIsland_eventGetWaterSpline_Parms
		{
			UWaterSplineComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyIsland_eventGetWaterSpline_Parms, ReturnValue), Z_Construct_UClass_UWaterSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "//~ End IWaterBrushActorInterface interface\n" },
		{ "ModuleRelativePath", "Public/WaterBodyIslandActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBodyIsland, nullptr, "GetWaterSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::WaterBodyIsland_eventGetWaterSpline_Parms), Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBodyIsland);
	UClass* Z_Construct_UClass_AWaterBodyIsland_NoRegister()
	{
		return AWaterBodyIsland::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBodyIsland_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterCurveSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterCurveSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterHeightmapSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterWeightmapSettings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WaterWeightmapSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterWeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WaterWeightmapSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorIcon;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBodyIsland_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaterBodyIsland_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaterBodyIsland_GetWaterSpline, "GetWaterSpline" }, // 2983859464
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyIsland_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "IncludePath", "WaterBodyIslandActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyIslandActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterCurveSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterBodyIslandActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterCurveSettings = { "WaterCurveSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyIsland, WaterCurveSettings), Z_Construct_UScriptStruct_FWaterCurveSettings, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterCurveSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterCurveSettings_MetaData)) }; // 1417696216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterHeightmapSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterBodyIslandActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterHeightmapSettings = { "WaterHeightmapSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyIsland, WaterHeightmapSettings), Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterHeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterHeightmapSettings_MetaData)) }; // 2800671282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings_ValueProp = { "WaterWeightmapSettings", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings, METADATA_PARAMS(nullptr, 0) }; // 1437509207
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings_Key_KeyProp = { "WaterWeightmapSettings_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterBodyIslandActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings = { "WaterWeightmapSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyIsland, WaterWeightmapSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings_MetaData)) }; // 1437509207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_ActorIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyIslandActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_ActorIcon = { "ActorIcon", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyIsland, ActorIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_ActorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_ActorIcon_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_SplineComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "Comment", "/**\n\x09 * The spline data attached to this water type.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyIslandActor.h" },
		{ "ToolTip", "The spline data attached to this water type." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyIsland, SplineComp), Z_Construct_UClass_UWaterSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_SplineComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBodyIsland_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterCurveSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterHeightmapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_WaterWeightmapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_ActorIcon,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyIsland_Statics::NewProp_SplineComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWaterBodyIsland_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWaterBrushActorInterface_NoRegister, (int32)VTABLE_OFFSET(AWaterBodyIsland, IWaterBrushActorInterface), false },  // 2607518085
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBodyIsland_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBodyIsland>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBodyIsland_Statics::ClassParams = {
		&AWaterBodyIsland::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaterBodyIsland_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyIsland_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBodyIsland_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyIsland_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBodyIsland()
	{
		if (!Z_Registration_Info_UClass_AWaterBodyIsland.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBodyIsland.OuterSingleton, Z_Construct_UClass_AWaterBodyIsland_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBodyIsland.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterBodyIsland>()
	{
		return AWaterBodyIsland::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBodyIsland);
	AWaterBodyIsland::~AWaterBodyIsland() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBodyIsland)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaterBodyIsland, AWaterBodyIsland::StaticClass, TEXT("AWaterBodyIsland"), &Z_Registration_Info_UClass_AWaterBodyIsland, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBodyIsland), 4065260419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_832465464(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
