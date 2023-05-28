// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ZoneShapeComponentVisualizer.h"
#include "../../../Editor/UnrealEd/Public/ComponentVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneShapeComponentVisualizer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FComponentPropertyPath();
	UPackage* Z_Construct_UPackage__Script_ZoneGraphEditor();
	ZONEGRAPHEDITOR_API UClass* Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState();
	ZONEGRAPHEDITOR_API UClass* Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_NoRegister();
	ZONEGRAPHEDITOR_API UEnum* Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FZoneShapeControlPointType;
	static UEnum* FZoneShapeControlPointType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FZoneShapeControlPointType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FZoneShapeControlPointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType, (UObject*)Z_Construct_UPackage__Script_ZoneGraphEditor(), TEXT("FZoneShapeControlPointType"));
		}
		return Z_Registration_Info_UEnum_FZoneShapeControlPointType.OuterSingleton;
	}
	template<> ZONEGRAPHEDITOR_API UEnum* StaticEnum<FZoneShapeControlPointType>()
	{
		return FZoneShapeControlPointType_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::Enumerators[] = {
		{ "FZoneShapeControlPointType::None", (int64)FZoneShapeControlPointType::None },
		{ "FZoneShapeControlPointType::In", (int64)FZoneShapeControlPointType::In },
		{ "FZoneShapeControlPointType::Out", (int64)FZoneShapeControlPointType::Out },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::Enum_MetaDataParams[] = {
		{ "In.Name", "FZoneShapeControlPointType::In" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "None.Name", "FZoneShapeControlPointType::None" },
		{ "Out.Name", "FZoneShapeControlPointType::Out" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraphEditor,
		nullptr,
		"FZoneShapeControlPointType",
		"FZoneShapeControlPointType",
		Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType()
	{
		if (!Z_Registration_Info_UEnum_FZoneShapeControlPointType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FZoneShapeControlPointType.InnerSingleton, Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FZoneShapeControlPointType.InnerSingleton;
	}
	void UZoneShapeComponentVisualizerSelectionState::StaticRegisterNativesUZoneShapeComponentVisualizerSelectionState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneShapeComponentVisualizerSelectionState);
	UClass* Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_NoRegister()
	{
		return UZoneShapeComponentVisualizerSelectionState::StaticClass();
	}
	struct Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapePropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapePropertyPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPoints_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPoints_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPointIndexSelected_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastPointIndexSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSegmentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedSegmentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSegmentPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedSegmentPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSegmentT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectedSegmentT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedControlPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedControlPoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedControlPointType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedControlPointType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedControlPointType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Selection state data that will be captured by scoped transactions.*/" },
		{ "IncludePath", "ZoneShapeComponentVisualizer.h" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Selection state data that will be captured by scoped transactions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_ShapePropertyPath_MetaData[] = {
		{ "Comment", "/** Property path from the parent actor to the component */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Property path from the parent actor to the component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_ShapePropertyPath = { "ShapePropertyPath", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, ShapePropertyPath), Z_Construct_UScriptStruct_FComponentPropertyPath, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_ShapePropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_ShapePropertyPath_MetaData)) }; // 899123047
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedPoints_ElementProp = { "SelectedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedPoints_MetaData[] = {
		{ "Comment", "/** Index of keys we have selected */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Index of keys we have selected" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedPoints = { "SelectedPoints", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, SelectedPoints), METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_LastPointIndexSelected_MetaData[] = {
		{ "Comment", "/** Index of the last key we selected */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Index of the last key we selected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_LastPointIndexSelected = { "LastPointIndexSelected", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, LastPointIndexSelected), METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_LastPointIndexSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_LastPointIndexSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex_MetaData[] = {
		{ "Comment", "/** Index of segment we have selected */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Index of segment we have selected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex = { "SelectedSegmentIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, SelectedSegmentIndex), METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentPoint_MetaData[] = {
		{ "Comment", "/** Position on selected segment */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Position on selected segment" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentPoint = { "SelectedSegmentPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, SelectedSegmentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentT_MetaData[] = {
		{ "Comment", "/** Interpolation value along the selected segment */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Interpolation value along the selected segment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentT = { "SelectedSegmentT", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, SelectedSegmentT), METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPoint_MetaData[] = {
		{ "Comment", "/** Index of tangent handle we have selected */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "Index of tangent handle we have selected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPoint = { "SelectedControlPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, SelectedControlPoint), METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPoint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPointType_MetaData[] = {
		{ "Comment", "/** The type of the selected tangent handle */" },
		{ "ModuleRelativePath", "Private/ZoneShapeComponentVisualizer.h" },
		{ "ToolTip", "The type of the selected tangent handle" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPointType = { "SelectedControlPointType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponentVisualizerSelectionState, SelectedControlPointType), Z_Construct_UEnum_ZoneGraphEditor_FZoneShapeControlPointType, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPointType_MetaData)) }; // 3424891832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_ShapePropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedPoints_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_LastPointIndexSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPointType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::NewProp_SelectedControlPointType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneShapeComponentVisualizerSelectionState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::ClassParams = {
		&UZoneShapeComponentVisualizerSelectionState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState()
	{
		if (!Z_Registration_Info_UClass_UZoneShapeComponentVisualizerSelectionState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneShapeComponentVisualizerSelectionState.OuterSingleton, Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneShapeComponentVisualizerSelectionState.OuterSingleton;
	}
	template<> ZONEGRAPHEDITOR_API UClass* StaticClass<UZoneShapeComponentVisualizerSelectionState>()
	{
		return UZoneShapeComponentVisualizerSelectionState::StaticClass();
	}
	UZoneShapeComponentVisualizerSelectionState::UZoneShapeComponentVisualizerSelectionState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneShapeComponentVisualizerSelectionState);
	UZoneShapeComponentVisualizerSelectionState::~UZoneShapeComponentVisualizerSelectionState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_Statics::EnumInfo[] = {
		{ FZoneShapeControlPointType_StaticEnum, TEXT("FZoneShapeControlPointType"), &Z_Registration_Info_UEnum_FZoneShapeControlPointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3424891832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState, UZoneShapeComponentVisualizerSelectionState::StaticClass, TEXT("UZoneShapeComponentVisualizerSelectionState"), &Z_Registration_Info_UClass_UZoneShapeComponentVisualizerSelectionState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneShapeComponentVisualizerSelectionState), 3732538390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_1916294043(TEXT("/Script/ZoneGraphEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
