// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineComponentVisualizer.h"
#include "../../../Editor/UnrealEd/Public/ComponentVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineComponentVisualizer() {}
// Cross Module References
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USplineComponentVisualizerSelectionState();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USplineComponentVisualizerSelectionState_NoRegister();
	COMPONENTVISUALIZERS_API UEnum* Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FComponentPropertyPath();
	UPackage* Z_Construct_UPackage__Script_ComponentVisualizers();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectedTangentHandle;
	static UEnum* ESelectedTangentHandle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectedTangentHandle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectedTangentHandle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle, (UObject*)Z_Construct_UPackage__Script_ComponentVisualizers(), TEXT("ESelectedTangentHandle"));
		}
		return Z_Registration_Info_UEnum_ESelectedTangentHandle.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UEnum* StaticEnum<ESelectedTangentHandle>()
	{
		return ESelectedTangentHandle_StaticEnum();
	}
	struct Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::Enumerators[] = {
		{ "ESelectedTangentHandle::None", (int64)ESelectedTangentHandle::None },
		{ "ESelectedTangentHandle::Leave", (int64)ESelectedTangentHandle::Leave },
		{ "ESelectedTangentHandle::Arrive", (int64)ESelectedTangentHandle::Arrive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::Enum_MetaDataParams[] = {
		{ "Arrive.Name", "ESelectedTangentHandle::Arrive" },
		{ "Comment", "/** Tangent handle selection modes. */" },
		{ "Leave.Name", "ESelectedTangentHandle::Leave" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "None.Name", "ESelectedTangentHandle::None" },
		{ "ToolTip", "Tangent handle selection modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComponentVisualizers,
		nullptr,
		"ESelectedTangentHandle",
		"ESelectedTangentHandle",
		Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle()
	{
		if (!Z_Registration_Info_UEnum_ESelectedTangentHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectedTangentHandle.InnerSingleton, Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectedTangentHandle.InnerSingleton;
	}
	void USplineComponentVisualizerSelectionState::StaticRegisterNativesUSplineComponentVisualizerSelectionState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineComponentVisualizerSelectionState);
	UClass* Z_Construct_UClass_USplineComponentVisualizerSelectionState_NoRegister()
	{
		return USplineComponentVisualizerSelectionState::StaticClass();
	}
	struct Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplinePropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplinePropertyPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedKeys_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeys_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKeyIndexSelected_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastKeyIndexSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSegmentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedSegmentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTangentHandle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedTangentHandle;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectedTangentHandleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTangentHandleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedTangentHandleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSplinePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedSplinePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Selection state data that will be captured by scoped transactions.*/" },
		{ "IncludePath", "SplineComponentVisualizer.h" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Selection state data that will be captured by scoped transactions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SplinePropertyPath_MetaData[] = {
		{ "Comment", "/** Property path from the parent actor to the component */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Property path from the parent actor to the component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SplinePropertyPath = { "SplinePropertyPath", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, SplinePropertyPath), Z_Construct_UScriptStruct_FComponentPropertyPath, METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SplinePropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SplinePropertyPath_MetaData)) }; // 899123047
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedKeys_ElementProp = { "SelectedKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedKeys_MetaData[] = {
		{ "Comment", "/** Indices of keys we have selected */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Indices of keys we have selected" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedKeys = { "SelectedKeys", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, SelectedKeys), METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_LastKeyIndexSelected_MetaData[] = {
		{ "Comment", "/** Index of the last key we selected */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Index of the last key we selected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_LastKeyIndexSelected = { "LastKeyIndexSelected", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, LastKeyIndexSelected), METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_LastKeyIndexSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_LastKeyIndexSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex_MetaData[] = {
		{ "Comment", "/** Index of segment we have selected */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Index of segment we have selected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex = { "SelectedSegmentIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, SelectedSegmentIndex), METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandle_MetaData[] = {
		{ "Comment", "/** Index of tangent handle we have selected */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Index of tangent handle we have selected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandle = { "SelectedTangentHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, SelectedTangentHandle), METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandle_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandleType_MetaData[] = {
		{ "Comment", "/** The type of the selected tangent handle */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "The type of the selected tangent handle" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandleType = { "SelectedTangentHandleType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, SelectedTangentHandleType), Z_Construct_UEnum_ComponentVisualizers_ESelectedTangentHandle, METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandleType_MetaData)) }; // 926730542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSplinePosition_MetaData[] = {
		{ "Comment", "/** Position on spline we have selected */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Position on spline we have selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSplinePosition = { "SelectedSplinePosition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, SelectedSplinePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSplinePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSplinePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_CachedRotation_MetaData[] = {
		{ "Comment", "/** Cached rotation for this point */" },
		{ "ModuleRelativePath", "Public/SplineComponentVisualizer.h" },
		{ "ToolTip", "Cached rotation for this point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_CachedRotation = { "CachedRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponentVisualizerSelectionState, CachedRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_CachedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_CachedRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SplinePropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedKeys_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_LastKeyIndexSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSegmentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedTangentHandleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_SelectedSplinePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::NewProp_CachedRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineComponentVisualizerSelectionState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::ClassParams = {
		&USplineComponentVisualizerSelectionState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineComponentVisualizerSelectionState()
	{
		if (!Z_Registration_Info_UClass_USplineComponentVisualizerSelectionState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineComponentVisualizerSelectionState.OuterSingleton, Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplineComponentVisualizerSelectionState.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<USplineComponentVisualizerSelectionState>()
	{
		return USplineComponentVisualizerSelectionState::StaticClass();
	}
	USplineComponentVisualizerSelectionState::USplineComponentVisualizerSelectionState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineComponentVisualizerSelectionState);
	USplineComponentVisualizerSelectionState::~USplineComponentVisualizerSelectionState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_Statics::EnumInfo[] = {
		{ ESelectedTangentHandle_StaticEnum, TEXT("ESelectedTangentHandle"), &Z_Registration_Info_UEnum_ESelectedTangentHandle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 926730542U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplineComponentVisualizerSelectionState, USplineComponentVisualizerSelectionState::StaticClass, TEXT("USplineComponentVisualizerSelectionState"), &Z_Registration_Info_UClass_USplineComponentVisualizerSelectionState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineComponentVisualizerSelectionState), 2133828616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_1169825699(TEXT("/Script/ComponentVisualizers"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
