// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimTimeline/AnimTimelineClipboard.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTimelineClipboard() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransformCurveChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorCurveChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve();
	PERSONA_API UClass* Z_Construct_UClass_UAnimCurveBaseCopyObject();
	PERSONA_API UClass* Z_Construct_UClass_UAnimCurveBaseCopyObject_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UAnimTimelineClipboardContent();
	PERSONA_API UClass* Z_Construct_UClass_UAnimTimelineClipboardContent_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UFloatCurveCopyObject();
	PERSONA_API UClass* Z_Construct_UClass_UFloatCurveCopyObject_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UTransformCurveCopyObject();
	PERSONA_API UClass* Z_Construct_UClass_UTransformCurveCopyObject_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UVectorCurveCopyObject();
	PERSONA_API UClass* Z_Construct_UClass_UVectorCurveCopyObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UAnimCurveBaseCopyObject::StaticRegisterNativesUAnimCurveBaseCopyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveBaseCopyObject);
	UClass* Z_Construct_UClass_UAnimCurveBaseCopyObject_NoRegister()
	{
		return UAnimCurveBaseCopyObject::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OriginName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Object used to export AnimCurves to clipboard */" },
		{ "IncludePath", "AnimTimeline/AnimTimelineClipboard.h" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
		{ "ToolTip", "Object used to export AnimCurves to clipboard" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "// SmartName Start\n" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
		{ "ToolTip", "SmartName Start" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveBaseCopyObject, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_UID_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveBaseCopyObject, UID), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_UID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_CurveType_MetaData[] = {
		{ "Comment", "// SmartName End\n" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
		{ "ToolTip", "SmartName End" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveBaseCopyObject, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_CurveType_MetaData)) }; // 1535854795
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Channel_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveBaseCopyObject, Channel), Z_Construct_UEnum_Engine_ETransformCurveChannel, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Channel_MetaData)) }; // 3582701664
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Axis_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveBaseCopyObject, Axis), Z_Construct_UEnum_Engine_EVectorCurveChannel, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Axis_MetaData)) }; // 2685186430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_OriginName_MetaData[] = {
		{ "Comment", "/** This curve's data owner name (ex. UAnimSequenceBase Name), if any. Used internally to check if the user is attempting to paste curve data into source curve. */" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
		{ "ToolTip", "This curve's data owner name (ex. UAnimSequenceBase Name), if any. Used internally to check if the user is attempting to paste curve data into source curve." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_OriginName = { "OriginName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveBaseCopyObject, OriginName), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_OriginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_OriginName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_UID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::NewProp_OriginName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveBaseCopyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::ClassParams = {
		&UAnimCurveBaseCopyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveBaseCopyObject()
	{
		if (!Z_Registration_Info_UClass_UAnimCurveBaseCopyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveBaseCopyObject.OuterSingleton, Z_Construct_UClass_UAnimCurveBaseCopyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCurveBaseCopyObject.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UAnimCurveBaseCopyObject>()
	{
		return UAnimCurveBaseCopyObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveBaseCopyObject);
	UAnimCurveBaseCopyObject::~UAnimCurveBaseCopyObject() {}
	void UFloatCurveCopyObject::StaticRegisterNativesUFloatCurveCopyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatCurveCopyObject);
	UClass* Z_Construct_UClass_UFloatCurveCopyObject_NoRegister()
	{
		return UFloatCurveCopyObject::StaticClass();
	}
	struct Z_Construct_UClass_UFloatCurveCopyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatCurveCopyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveBaseCopyObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatCurveCopyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTimeline/AnimTimelineClipboard.h" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatCurveCopyObject_Statics::NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloatCurveCopyObject_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloatCurveCopyObject, Curve), Z_Construct_UScriptStruct_FFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFloatCurveCopyObject_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatCurveCopyObject_Statics::NewProp_Curve_MetaData)) }; // 936738579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatCurveCopyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatCurveCopyObject_Statics::NewProp_Curve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatCurveCopyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatCurveCopyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatCurveCopyObject_Statics::ClassParams = {
		&UFloatCurveCopyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatCurveCopyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloatCurveCopyObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatCurveCopyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatCurveCopyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatCurveCopyObject()
	{
		if (!Z_Registration_Info_UClass_UFloatCurveCopyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatCurveCopyObject.OuterSingleton, Z_Construct_UClass_UFloatCurveCopyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatCurveCopyObject.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UFloatCurveCopyObject>()
	{
		return UFloatCurveCopyObject::StaticClass();
	}
	UFloatCurveCopyObject::UFloatCurveCopyObject() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatCurveCopyObject);
	UFloatCurveCopyObject::~UFloatCurveCopyObject() {}
	void UTransformCurveCopyObject::StaticRegisterNativesUTransformCurveCopyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformCurveCopyObject);
	UClass* Z_Construct_UClass_UTransformCurveCopyObject_NoRegister()
	{
		return UTransformCurveCopyObject::StaticClass();
	}
	struct Z_Construct_UClass_UTransformCurveCopyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformCurveCopyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveBaseCopyObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformCurveCopyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTimeline/AnimTimelineClipboard.h" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformCurveCopyObject_Statics::NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformCurveCopyObject_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformCurveCopyObject, Curve), Z_Construct_UScriptStruct_FTransformCurve, METADATA_PARAMS(Z_Construct_UClass_UTransformCurveCopyObject_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformCurveCopyObject_Statics::NewProp_Curve_MetaData)) }; // 2461261714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformCurveCopyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformCurveCopyObject_Statics::NewProp_Curve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformCurveCopyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformCurveCopyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformCurveCopyObject_Statics::ClassParams = {
		&UTransformCurveCopyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformCurveCopyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformCurveCopyObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformCurveCopyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformCurveCopyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformCurveCopyObject()
	{
		if (!Z_Registration_Info_UClass_UTransformCurveCopyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformCurveCopyObject.OuterSingleton, Z_Construct_UClass_UTransformCurveCopyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformCurveCopyObject.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UTransformCurveCopyObject>()
	{
		return UTransformCurveCopyObject::StaticClass();
	}
	UTransformCurveCopyObject::UTransformCurveCopyObject() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformCurveCopyObject);
	UTransformCurveCopyObject::~UTransformCurveCopyObject() {}
	void UVectorCurveCopyObject::StaticRegisterNativesUVectorCurveCopyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorCurveCopyObject);
	UClass* Z_Construct_UClass_UVectorCurveCopyObject_NoRegister()
	{
		return UVectorCurveCopyObject::StaticClass();
	}
	struct Z_Construct_UClass_UVectorCurveCopyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorCurveCopyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveBaseCopyObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorCurveCopyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTimeline/AnimTimelineClipboard.h" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorCurveCopyObject_Statics::NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVectorCurveCopyObject_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorCurveCopyObject, Curve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UClass_UVectorCurveCopyObject_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorCurveCopyObject_Statics::NewProp_Curve_MetaData)) }; // 639932431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorCurveCopyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorCurveCopyObject_Statics::NewProp_Curve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorCurveCopyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorCurveCopyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorCurveCopyObject_Statics::ClassParams = {
		&UVectorCurveCopyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVectorCurveCopyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVectorCurveCopyObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorCurveCopyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorCurveCopyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorCurveCopyObject()
	{
		if (!Z_Registration_Info_UClass_UVectorCurveCopyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorCurveCopyObject.OuterSingleton, Z_Construct_UClass_UVectorCurveCopyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVectorCurveCopyObject.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UVectorCurveCopyObject>()
	{
		return UVectorCurveCopyObject::StaticClass();
	}
	UVectorCurveCopyObject::UVectorCurveCopyObject() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorCurveCopyObject);
	UVectorCurveCopyObject::~UVectorCurveCopyObject() {}
	void UAnimTimelineClipboardContent::StaticRegisterNativesUAnimTimelineClipboardContent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimTimelineClipboardContent);
	UClass* Z_Construct_UClass_UAnimTimelineClipboardContent_NoRegister()
	{
		return UAnimTimelineClipboardContent::StaticClass();
	}
	struct Z_Construct_UClass_UAnimTimelineClipboardContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n// Animation Timeline Clipboard\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "AnimTimeline/AnimTimelineClipboard.h" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
		{ "ToolTip", "/\n Animation Timeline Clipboard\n/" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0004000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimCurveBaseCopyObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::NewProp_Curves_MetaData[] = {
		{ "Comment", "/** Animation Timeline Editor Curves */" },
		{ "ModuleRelativePath", "Private/AnimTimeline/AnimTimelineClipboard.h" },
		{ "ToolTip", "Animation Timeline Editor Curves" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0014000000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimTimelineClipboardContent, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::NewProp_Curves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::NewProp_Curves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimTimelineClipboardContent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::ClassParams = {
		&UAnimTimelineClipboardContent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimTimelineClipboardContent()
	{
		if (!Z_Registration_Info_UClass_UAnimTimelineClipboardContent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimTimelineClipboardContent.OuterSingleton, Z_Construct_UClass_UAnimTimelineClipboardContent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimTimelineClipboardContent.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UAnimTimelineClipboardContent>()
	{
		return UAnimTimelineClipboardContent::StaticClass();
	}
	UAnimTimelineClipboardContent::UAnimTimelineClipboardContent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimTimelineClipboardContent);
	UAnimTimelineClipboardContent::~UAnimTimelineClipboardContent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_AnimTimeline_AnimTimelineClipboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_AnimTimeline_AnimTimelineClipboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveBaseCopyObject, UAnimCurveBaseCopyObject::StaticClass, TEXT("UAnimCurveBaseCopyObject"), &Z_Registration_Info_UClass_UAnimCurveBaseCopyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveBaseCopyObject), 4050462669U) },
		{ Z_Construct_UClass_UFloatCurveCopyObject, UFloatCurveCopyObject::StaticClass, TEXT("UFloatCurveCopyObject"), &Z_Registration_Info_UClass_UFloatCurveCopyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatCurveCopyObject), 1598193165U) },
		{ Z_Construct_UClass_UTransformCurveCopyObject, UTransformCurveCopyObject::StaticClass, TEXT("UTransformCurveCopyObject"), &Z_Registration_Info_UClass_UTransformCurveCopyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformCurveCopyObject), 733337971U) },
		{ Z_Construct_UClass_UVectorCurveCopyObject, UVectorCurveCopyObject::StaticClass, TEXT("UVectorCurveCopyObject"), &Z_Registration_Info_UClass_UVectorCurveCopyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorCurveCopyObject), 837509252U) },
		{ Z_Construct_UClass_UAnimTimelineClipboardContent, UAnimTimelineClipboardContent::StaticClass, TEXT("UAnimTimelineClipboardContent"), &Z_Registration_Info_UClass_UAnimTimelineClipboardContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimTimelineClipboardContent), 3258167480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_AnimTimeline_AnimTimelineClipboard_h_912881147(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_AnimTimeline_AnimTimelineClipboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_AnimTimeline_AnimTimelineClipboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
