// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Layers/Layer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer();
	ENGINE_API UClass* Z_Construct_UClass_ULayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerActorStats;
class UScriptStruct* FLayerActorStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerActorStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerActorStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerActorStats, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LayerActorStats"));
	}
	return Z_Registration_Info_UScriptStruct_LayerActorStats.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLayerActorStats>()
{
	return FLayerActorStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLayerActorStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerActorStats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** A Type of Actor currently associated with the Layer */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "A Type of Actor currently associated with the Layer" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerActorStats, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total_MetaData[] = {
		{ "Comment", "/** The total number of Actors of Type assigned to the Layer */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "The total number of Actors of Type assigned to the Layer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerActorStats, Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LayerActorStats",
		sizeof(FLayerActorStats),
		alignof(FLayerActorStats),
		Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats()
	{
		if (!Z_Registration_Info_UScriptStruct_LayerActorStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerActorStats.InnerSingleton, Z_Construct_UScriptStruct_FLayerActorStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LayerActorStats.InnerSingleton;
	}
	void ULayer::StaticRegisterNativesULayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayer);
	UClass* Z_Construct_UClass_ULayer_NoRegister()
	{
		return ULayer::StaticClass();
	}
	struct Z_Construct_UClass_ULayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorStats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorStats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Layers/Layer.h" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "Comment", "/** The display name of the layer */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "The display name of the layer" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULayer, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** Whether actors associated with the layer are visible in the viewport */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "Whether actors associated with the layer are visible in the viewport" },
	};
#endif
	void Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ULayer*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULayer), &Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_Inner = { "ActorStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLayerActorStats, METADATA_PARAMS(nullptr, 0) }; // 4182655384
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_MetaData[] = {
		{ "Comment", "/** \n\x09 * Basic stats regarding the number of Actors and their types currently assigned to the Layer \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "Basic stats regarding the number of Actors and their types currently assigned to the Layer" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats = { "ActorStats", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULayer, ActorStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_MetaData)) }; // 4182655384
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayer_Statics::ClassParams = {
		&ULayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULayer()
	{
		if (!Z_Registration_Info_UClass_ULayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayer.OuterSingleton, Z_Construct_UClass_ULayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULayer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULayer>()
	{
		return ULayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayer);
	ULayer::~ULayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ScriptStructInfo[] = {
		{ FLayerActorStats::StaticStruct, Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewStructOps, TEXT("LayerActorStats"), &Z_Registration_Info_UScriptStruct_LayerActorStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerActorStats), 4182655384U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULayer, ULayer::StaticClass, TEXT("ULayer"), &Z_Registration_Info_UClass_ULayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayer), 1298874398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_2080584905(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
