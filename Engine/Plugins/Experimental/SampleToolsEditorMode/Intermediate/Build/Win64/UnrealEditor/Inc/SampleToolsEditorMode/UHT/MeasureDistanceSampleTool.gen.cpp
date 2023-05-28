// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SampleTools/MeasureDistanceSampleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeasureDistanceSampleTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UMeasureDistanceProperties();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UMeasureDistanceProperties_NoRegister();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UMeasureDistanceSampleTool();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UMeasureDistanceSampleTool_NoRegister();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UMeasureDistanceSampleToolBuilder();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SampleToolsEditorMode();
// End Cross Module References
	void UMeasureDistanceSampleToolBuilder::StaticRegisterNativesUMeasureDistanceSampleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeasureDistanceSampleToolBuilder);
	UClass* Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_NoRegister()
	{
		return UMeasureDistanceSampleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UMeasureDistanceSampleTool\n */" },
		{ "IncludePath", "SampleTools/MeasureDistanceSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/MeasureDistanceSampleTool.h" },
		{ "ToolTip", "Builder for UMeasureDistanceSampleTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeasureDistanceSampleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics::ClassParams = {
		&UMeasureDistanceSampleToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeasureDistanceSampleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeasureDistanceSampleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeasureDistanceSampleToolBuilder.OuterSingleton, Z_Construct_UClass_UMeasureDistanceSampleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeasureDistanceSampleToolBuilder.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UMeasureDistanceSampleToolBuilder>()
	{
		return UMeasureDistanceSampleToolBuilder::StaticClass();
	}
	UMeasureDistanceSampleToolBuilder::UMeasureDistanceSampleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeasureDistanceSampleToolBuilder);
	UMeasureDistanceSampleToolBuilder::~UMeasureDistanceSampleToolBuilder() {}
	void UMeasureDistanceProperties::StaticRegisterNativesUMeasureDistanceProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeasureDistanceProperties);
	UClass* Z_Construct_UClass_UMeasureDistanceProperties_NoRegister()
	{
		return UMeasureDistanceProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeasureDistanceProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeasureDistanceProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasureDistanceProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property set for the UMeasureDistanceSampleTool\n */" },
		{ "IncludePath", "SampleTools/MeasureDistanceSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/MeasureDistanceSampleTool.h" },
		{ "ToolTip", "Property set for the UMeasureDistanceSampleTool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** First point of measurement */" },
		{ "ModuleRelativePath", "Private/SampleTools/MeasureDistanceSampleTool.h" },
		{ "ToolTip", "First point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeasureDistanceProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Second point of measurement */" },
		{ "ModuleRelativePath", "Private/SampleTools/MeasureDistanceSampleTool.h" },
		{ "ToolTip", "Second point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeasureDistanceProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Current distance measurement */" },
		{ "ModuleRelativePath", "Private/SampleTools/MeasureDistanceSampleTool.h" },
		{ "ToolTip", "Current distance measurement" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeasureDistanceProperties, Distance), METADATA_PARAMS(Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeasureDistanceProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeasureDistanceProperties_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeasureDistanceProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeasureDistanceProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeasureDistanceProperties_Statics::ClassParams = {
		&UMeasureDistanceProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeasureDistanceProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeasureDistanceProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeasureDistanceProperties()
	{
		if (!Z_Registration_Info_UClass_UMeasureDistanceProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeasureDistanceProperties.OuterSingleton, Z_Construct_UClass_UMeasureDistanceProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeasureDistanceProperties.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UMeasureDistanceProperties>()
	{
		return UMeasureDistanceProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeasureDistanceProperties);
	UMeasureDistanceProperties::~UMeasureDistanceProperties() {}
	void UMeasureDistanceSampleTool::StaticRegisterNativesUMeasureDistanceSampleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeasureDistanceSampleTool);
	UClass* Z_Construct_UClass_UMeasureDistanceSampleTool_NoRegister()
	{
		return UMeasureDistanceSampleTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeasureDistanceSampleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeasureDistanceSampleTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
		{ "IncludePath", "SampleTools/MeasureDistanceSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/MeasureDistanceSampleTool.h" },
		{ "ToolTip", "UMeasureDistanceSampleTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "/** Properties of the tool are stored here */" },
		{ "ModuleRelativePath", "Private/SampleTools/MeasureDistanceSampleTool.h" },
		{ "ToolTip", "Properties of the tool are stored here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeasureDistanceSampleTool, Properties), Z_Construct_UClass_UMeasureDistanceProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeasureDistanceSampleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::ClassParams = {
		&UMeasureDistanceSampleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeasureDistanceSampleTool()
	{
		if (!Z_Registration_Info_UClass_UMeasureDistanceSampleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeasureDistanceSampleTool.OuterSingleton, Z_Construct_UClass_UMeasureDistanceSampleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeasureDistanceSampleTool.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UMeasureDistanceSampleTool>()
	{
		return UMeasureDistanceSampleTool::StaticClass();
	}
	UMeasureDistanceSampleTool::UMeasureDistanceSampleTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeasureDistanceSampleTool);
	UMeasureDistanceSampleTool::~UMeasureDistanceSampleTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_MeasureDistanceSampleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_MeasureDistanceSampleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeasureDistanceSampleToolBuilder, UMeasureDistanceSampleToolBuilder::StaticClass, TEXT("UMeasureDistanceSampleToolBuilder"), &Z_Registration_Info_UClass_UMeasureDistanceSampleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeasureDistanceSampleToolBuilder), 1485630884U) },
		{ Z_Construct_UClass_UMeasureDistanceProperties, UMeasureDistanceProperties::StaticClass, TEXT("UMeasureDistanceProperties"), &Z_Registration_Info_UClass_UMeasureDistanceProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeasureDistanceProperties), 1738315504U) },
		{ Z_Construct_UClass_UMeasureDistanceSampleTool, UMeasureDistanceSampleTool::StaticClass, TEXT("UMeasureDistanceSampleTool"), &Z_Registration_Info_UClass_UMeasureDistanceSampleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeasureDistanceSampleTool), 2395067106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_MeasureDistanceSampleTool_h_3161003754(TEXT("/Script/SampleToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_MeasureDistanceSampleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_MeasureDistanceSampleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
