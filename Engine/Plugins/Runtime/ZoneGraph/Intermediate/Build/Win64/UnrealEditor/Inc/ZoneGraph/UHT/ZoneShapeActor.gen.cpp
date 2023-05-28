// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneShapeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneShapeActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneShape();
	ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneShape_NoRegister();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister();
// End Cross Module References
	void AZoneShape::StaticRegisterNativesAZoneShape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZoneShape);
	UClass* Z_Construct_UClass_AZoneShape_NoRegister()
	{
		return AZoneShape::StaticClass();
	}
	struct Z_Construct_UClass_AZoneShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShapeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZoneShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneShape_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Zone Shape actor for standalone zone markup. */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "ZoneShapeActor.h" },
		{ "ModuleRelativePath", "Public/ZoneShapeActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Zone Shape actor for standalone zone markup." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneShape_Statics::NewProp_ShapeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneShapeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AZoneShape_Statics::NewProp_ShapeComponent = { "ShapeComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZoneShape, ShapeComponent), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZoneShape_Statics::NewProp_ShapeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneShape_Statics::NewProp_ShapeComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZoneShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZoneShape_Statics::NewProp_ShapeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZoneShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZoneShape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZoneShape_Statics::ClassParams = {
		&AZoneShape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZoneShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZoneShape_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZoneShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZoneShape()
	{
		if (!Z_Registration_Info_UClass_AZoneShape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZoneShape.OuterSingleton, Z_Construct_UClass_AZoneShape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZoneShape.OuterSingleton;
	}
	template<> ZONEGRAPH_API UClass* StaticClass<AZoneShape>()
	{
		return AZoneShape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZoneShape);
	AZoneShape::~AZoneShape() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZoneShape, AZoneShape::StaticClass, TEXT("AZoneShape"), &Z_Registration_Info_UClass_AZoneShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZoneShape), 1995260085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_3616283318(TEXT("/Script/ZoneGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
