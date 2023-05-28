// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/StereoLayerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeCubemap();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeCubemap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeCylinder();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeCylinder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeEquirect();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeEquirect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeQuad();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeQuad_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStereoLayerShape();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStereoLayerType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEquirectProps();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStereoLayerType;
	static UEnum* EStereoLayerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStereoLayerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStereoLayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStereoLayerType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStereoLayerType"));
		}
		return Z_Registration_Info_UEnum_EStereoLayerType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStereoLayerType>()
	{
		return EStereoLayerType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EStereoLayerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EStereoLayerType_Statics::Enumerators[] = {
		{ "SLT_WorldLocked", (int64)SLT_WorldLocked },
		{ "SLT_TrackerLocked", (int64)SLT_TrackerLocked },
		{ "SLT_FaceLocked", (int64)SLT_FaceLocked },
		{ "SLT_MAX", (int64)SLT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EStereoLayerType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Used by IStereoLayer */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "SLT_FaceLocked.Comment", "/** Location within the view space */" },
		{ "SLT_FaceLocked.DisplayName", "Face Locked" },
		{ "SLT_FaceLocked.Name", "SLT_FaceLocked" },
		{ "SLT_FaceLocked.ToolTip", "Location within the view space" },
		{ "SLT_MAX.Name", "SLT_MAX" },
		{ "SLT_TrackerLocked.Comment", "/** Location within the HMD tracking space */" },
		{ "SLT_TrackerLocked.DisplayName", "Tracker Locked" },
		{ "SLT_TrackerLocked.Name", "SLT_TrackerLocked" },
		{ "SLT_TrackerLocked.ToolTip", "Location within the HMD tracking space" },
		{ "SLT_WorldLocked.Comment", "/** Location within the world */" },
		{ "SLT_WorldLocked.DisplayName", "World Locked" },
		{ "SLT_WorldLocked.Name", "SLT_WorldLocked" },
		{ "SLT_WorldLocked.ToolTip", "Location within the world" },
		{ "ToolTip", "Used by IStereoLayer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStereoLayerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EStereoLayerType",
		"EStereoLayerType",
		Z_Construct_UEnum_Engine_EStereoLayerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStereoLayerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EStereoLayerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStereoLayerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EStereoLayerType()
	{
		if (!Z_Registration_Info_UEnum_EStereoLayerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStereoLayerType.InnerSingleton, Z_Construct_UEnum_Engine_EStereoLayerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStereoLayerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStereoLayerShape;
	static UEnum* EStereoLayerShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStereoLayerShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStereoLayerShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStereoLayerShape, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStereoLayerShape"));
		}
		return Z_Registration_Info_UEnum_EStereoLayerShape.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStereoLayerShape>()
	{
		return EStereoLayerShape_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EStereoLayerShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::Enumerators[] = {
		{ "SLSH_QuadLayer", (int64)SLSH_QuadLayer },
		{ "SLSH_CylinderLayer", (int64)SLSH_CylinderLayer },
		{ "SLSH_CubemapLayer", (int64)SLSH_CubemapLayer },
		{ "SLSH_EquirectLayer", (int64)SLSH_EquirectLayer },
		{ "SLSH_MAX", (int64)SLSH_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The shape to use for the stereo layer.  Note that some shapes might not be supported on all platforms! */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "SLSH_CubemapLayer.Comment", "/** Cubemap layer */" },
		{ "SLSH_CubemapLayer.DisplayName", "Cubemap Layer" },
		{ "SLSH_CubemapLayer.Name", "SLSH_CubemapLayer" },
		{ "SLSH_CubemapLayer.ToolTip", "Cubemap layer" },
		{ "SLSH_CylinderLayer.Comment", "/** Cylinder layer */" },
		{ "SLSH_CylinderLayer.DisplayName", "Cylinder Layer" },
		{ "SLSH_CylinderLayer.Name", "SLSH_CylinderLayer" },
		{ "SLSH_CylinderLayer.ToolTip", "Cylinder layer" },
		{ "SLSH_EquirectLayer.Comment", "/** Equirect layer */" },
		{ "SLSH_EquirectLayer.DisplayName", "Equirect Layer" },
		{ "SLSH_EquirectLayer.Name", "SLSH_EquirectLayer" },
		{ "SLSH_EquirectLayer.ToolTip", "Equirect layer" },
		{ "SLSH_MAX.Name", "SLSH_MAX" },
		{ "SLSH_QuadLayer.Comment", "/** Quad layer */" },
		{ "SLSH_QuadLayer.DisplayName", "Quad Layer" },
		{ "SLSH_QuadLayer.Name", "SLSH_QuadLayer" },
		{ "SLSH_QuadLayer.ToolTip", "Quad layer" },
		{ "ToolTip", "The shape to use for the stereo layer.  Note that some shapes might not be supported on all platforms!" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EStereoLayerShape",
		"EStereoLayerShape",
		Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EStereoLayerShape()
	{
		if (!Z_Registration_Info_UEnum_EStereoLayerShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStereoLayerShape.InnerSingleton, Z_Construct_UEnum_Engine_EStereoLayerShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStereoLayerShape.InnerSingleton;
	}
	void UStereoLayerShape::StaticRegisterNativesUStereoLayerShape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoLayerShape);
	UClass* Z_Construct_UClass_UStereoLayerShape_NoRegister()
	{
		return UStereoLayerShape::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShape_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/StereoLayerComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerShape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerShape_Statics::ClassParams = {
		&UStereoLayerShape::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerShape()
	{
		if (!Z_Registration_Info_UClass_UStereoLayerShape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoLayerShape.OuterSingleton, Z_Construct_UClass_UStereoLayerShape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStereoLayerShape.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStereoLayerShape>()
	{
		return UStereoLayerShape::StaticClass();
	}
	UStereoLayerShape::UStereoLayerShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerShape);
	UStereoLayerShape::~UStereoLayerShape() {}
	void UStereoLayerShapeQuad::StaticRegisterNativesUStereoLayerShapeQuad()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoLayerShapeQuad);
	UClass* Z_Construct_UClass_UStereoLayerShapeQuad_NoRegister()
	{
		return UStereoLayerShapeQuad::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerShapeQuad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerShapeQuad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerShape,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeQuad_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Quad Layer" },
		{ "IncludePath", "Components/StereoLayerComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerShapeQuad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerShapeQuad>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerShapeQuad_Statics::ClassParams = {
		&UStereoLayerShapeQuad::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeQuad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeQuad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerShapeQuad()
	{
		if (!Z_Registration_Info_UClass_UStereoLayerShapeQuad.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoLayerShapeQuad.OuterSingleton, Z_Construct_UClass_UStereoLayerShapeQuad_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStereoLayerShapeQuad.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStereoLayerShapeQuad>()
	{
		return UStereoLayerShapeQuad::StaticClass();
	}
	UStereoLayerShapeQuad::UStereoLayerShapeQuad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerShapeQuad);
	UStereoLayerShapeQuad::~UStereoLayerShapeQuad() {}
	DEFINE_FUNCTION(UStereoLayerShapeCylinder::execSetHeight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeight(Z_Param_InHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerShapeCylinder::execSetOverlayArc)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOverlayArc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayArc(Z_Param_InOverlayArc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerShapeCylinder::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_InRadius);
		P_NATIVE_END;
	}
	void UStereoLayerShapeCylinder::StaticRegisterNativesUStereoLayerShapeCylinder()
	{
		UClass* Class = UStereoLayerShapeCylinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHeight", &UStereoLayerShapeCylinder::execSetHeight },
			{ "SetOverlayArc", &UStereoLayerShapeCylinder::execSetOverlayArc },
			{ "SetRadius", &UStereoLayerShapeCylinder::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics
	{
		struct StereoLayerShapeCylinder_eventSetHeight_Parms
		{
			int32 InHeight;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerShapeCylinder_eventSetHeight_Parms, InHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::NewProp_InHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerShapeCylinder, nullptr, "SetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::StereoLayerShapeCylinder_eventSetHeight_Parms), Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics
	{
		struct StereoLayerShapeCylinder_eventSetOverlayArc_Parms
		{
			float InOverlayArc;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOverlayArc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::NewProp_InOverlayArc = { "InOverlayArc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerShapeCylinder_eventSetOverlayArc_Parms, InOverlayArc), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::NewProp_InOverlayArc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerShapeCylinder, nullptr, "SetOverlayArc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::StereoLayerShapeCylinder_eventSetOverlayArc_Parms), Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics
	{
		struct StereoLayerShapeCylinder_eventSetRadius_Parms
		{
			float InRadius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerShapeCylinder_eventSetRadius_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::NewProp_InRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerShapeCylinder, nullptr, "SetRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::StereoLayerShapeCylinder_eventSetRadius_Parms), Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoLayerShapeCylinder);
	UClass* Z_Construct_UClass_UStereoLayerShapeCylinder_NoRegister()
	{
		return UStereoLayerShapeCylinder::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerShapeCylinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayArc_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayArc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerShape,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerShapeCylinder_SetHeight, "SetHeight" }, // 260485416
		{ &Z_Construct_UFunction_UStereoLayerShapeCylinder_SetOverlayArc, "SetOverlayArc" }, // 338672446
		{ &Z_Construct_UFunction_UStereoLayerShapeCylinder_SetRadius, "SetRadius" }, // 1995872378
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Cylinder Layer" },
		{ "IncludePath", "Components/StereoLayerComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Cylinder Properties" },
		{ "Comment", "/** Radial size of the rendered stereo layer cylinder **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Radial size of the rendered stereo layer cylinder *" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeCylinder, Radius), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_OverlayArc_MetaData[] = {
		{ "Category", "Cylinder Properties" },
		{ "Comment", "/** Arc angle for the stereo layer cylinder **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Arc angle for the stereo layer cylinder *" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_OverlayArc = { "OverlayArc", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeCylinder, OverlayArc), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_OverlayArc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_OverlayArc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Cylinder Properties" },
		{ "Comment", "/** Height of the stereo layer cylinder **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Height of the stereo layer cylinder *" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeCylinder, Height), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_OverlayArc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::NewProp_Height,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerShapeCylinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::ClassParams = {
		&UStereoLayerShapeCylinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerShapeCylinder()
	{
		if (!Z_Registration_Info_UClass_UStereoLayerShapeCylinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoLayerShapeCylinder.OuterSingleton, Z_Construct_UClass_UStereoLayerShapeCylinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStereoLayerShapeCylinder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStereoLayerShapeCylinder>()
	{
		return UStereoLayerShapeCylinder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerShapeCylinder);
	UStereoLayerShapeCylinder::~UStereoLayerShapeCylinder() {}
	void UStereoLayerShapeCubemap::StaticRegisterNativesUStereoLayerShapeCubemap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoLayerShapeCubemap);
	UClass* Z_Construct_UClass_UStereoLayerShapeCubemap_NoRegister()
	{
		return UStereoLayerShapeCubemap::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerShapeCubemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerShapeCubemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerShape,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeCubemap_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Cubemap Layer" },
		{ "IncludePath", "Components/StereoLayerComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerShapeCubemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerShapeCubemap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerShapeCubemap_Statics::ClassParams = {
		&UStereoLayerShapeCubemap::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeCubemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeCubemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerShapeCubemap()
	{
		if (!Z_Registration_Info_UClass_UStereoLayerShapeCubemap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoLayerShapeCubemap.OuterSingleton, Z_Construct_UClass_UStereoLayerShapeCubemap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStereoLayerShapeCubemap.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStereoLayerShapeCubemap>()
	{
		return UStereoLayerShapeCubemap::StaticClass();
	}
	UStereoLayerShapeCubemap::UStereoLayerShapeCubemap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerShapeCubemap);
	UStereoLayerShapeCubemap::~UStereoLayerShapeCubemap() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquirectProps;
class UScriptStruct* FEquirectProps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquirectProps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquirectProps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquirectProps, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EquirectProps"));
	}
	return Z_Registration_Info_UScriptStruct_EquirectProps.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEquirectProps>()
{
	return FEquirectProps::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquirectProps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftUVRect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftUVRect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightUVRect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightUVRect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquirectProps_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Properties for equirect layers */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Properties for equirect layers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquirectProps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquirectProps>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftUVRect_MetaData[] = {
		{ "Category", "StereoLayer | Equirect Layer Properties" },
		{ "Comment", "/** Left source texture UVRect, specifying portion of input texture corresponding to left eye. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Left source texture UVRect, specifying portion of input texture corresponding to left eye." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftUVRect = { "LeftUVRect", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquirectProps, LeftUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftUVRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftUVRect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightUVRect_MetaData[] = {
		{ "Category", "StereoLayer | Equirect Layer Properties" },
		{ "Comment", "/** Right source texture UVRect, specifying portion of input texture corresponding to right eye. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Right source texture UVRect, specifying portion of input texture corresponding to right eye." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightUVRect = { "RightUVRect", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquirectProps, RightUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightUVRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightUVRect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftScale_MetaData[] = {
		{ "Category", "StereoLayer | Equirect Layer Properties" },
		{ "Comment", "/** Left eye's texture coordinate scale after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Left eye's texture coordinate scale after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftScale = { "LeftScale", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquirectProps, LeftScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightScale_MetaData[] = {
		{ "Category", "StereoLayer | Equirect Layer Properties" },
		{ "Comment", "/** Right eye's texture coordinate scale after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Right eye's texture coordinate scale after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightScale = { "RightScale", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquirectProps, RightScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftBias_MetaData[] = {
		{ "Category", "StereoLayer | Equirect Layer Properties" },
		{ "Comment", "/** Left eye's texture coordinate bias after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Left eye's texture coordinate bias after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftBias = { "LeftBias", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquirectProps, LeftBias), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightBias_MetaData[] = {
		{ "Category", "StereoLayer | Equirect Layer Properties" },
		{ "Comment", "/** Right eye's texture coordinate bias after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Right eye's texture coordinate bias after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightBias = { "RightBias", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquirectProps, RightBias), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightBias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquirectProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftUVRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightUVRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_LeftBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquirectProps_Statics::NewProp_RightBias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquirectProps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EquirectProps",
		sizeof(FEquirectProps),
		alignof(FEquirectProps),
		Z_Construct_UScriptStruct_FEquirectProps_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquirectProps_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquirectProps_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquirectProps()
	{
		if (!Z_Registration_Info_UScriptStruct_EquirectProps.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquirectProps.InnerSingleton, Z_Construct_UScriptStruct_FEquirectProps_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquirectProps.InnerSingleton;
	}
	DEFINE_FUNCTION(UStereoLayerShapeEquirect::execSetEquirectProps)
	{
		P_GET_STRUCT(FEquirectProps,Z_Param_InScaleBiases);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquirectProps(Z_Param_InScaleBiases);
		P_NATIVE_END;
	}
	void UStereoLayerShapeEquirect::StaticRegisterNativesUStereoLayerShapeEquirect()
	{
		UClass* Class = UStereoLayerShapeEquirect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEquirectProps", &UStereoLayerShapeEquirect::execSetEquirectProps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics
	{
		struct StereoLayerShapeEquirect_eventSetEquirectProps_Parms
		{
			FEquirectProps InScaleBiases;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScaleBiases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::NewProp_InScaleBiases = { "InScaleBiases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerShapeEquirect_eventSetEquirectProps_Parms, InScaleBiases), Z_Construct_UScriptStruct_FEquirectProps, METADATA_PARAMS(nullptr, 0) }; // 3392085623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::NewProp_InScaleBiases,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/**\n\x09 * Set Equirect layer properties: UVRect, Scale, and Bias\n\x09 * @param\x09LeftScale: Scale for left eye\n\x09 * @param\x09LeftBias: Bias for left eye\n\x09 * @param\x09RightScale: Scale for right eye\n\x09 * @param\x09RightBias: Bias for right eye\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Set Equirect layer properties: UVRect, Scale, and Bias\n@param       LeftScale: Scale for left eye\n@param       LeftBias: Bias for left eye\n@param       RightScale: Scale for right eye\n@param       RightBias: Bias for right eye" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerShapeEquirect, nullptr, "SetEquirectProps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::StereoLayerShapeEquirect_eventSetEquirectProps_Parms), Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoLayerShapeEquirect);
	UClass* Z_Construct_UClass_UStereoLayerShapeEquirect_NoRegister()
	{
		return UStereoLayerShapeEquirect::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerShapeEquirect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftUVRect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftUVRect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightUVRect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightUVRect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerShape,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerShapeEquirect_SetEquirectProps, "SetEquirectProps" }, // 1665771125
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Equirect Layer" },
		{ "IncludePath", "Components/StereoLayerComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftUVRect_MetaData[] = {
		{ "Category", "Equirect Properties" },
		{ "Comment", "/** Left source texture UVRect, specifying portion of input texture corresponding to left eye. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Left source texture UVRect, specifying portion of input texture corresponding to left eye." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftUVRect = { "LeftUVRect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeEquirect, LeftUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftUVRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftUVRect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightUVRect_MetaData[] = {
		{ "Category", "Equirect Properties" },
		{ "Comment", "/** Right source texture UVRect, specifying portion of input texture corresponding to right eye. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Right source texture UVRect, specifying portion of input texture corresponding to right eye." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightUVRect = { "RightUVRect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeEquirect, RightUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightUVRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightUVRect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftScale_MetaData[] = {
		{ "Category", "Equirect Properties" },
		{ "Comment", "/** Left eye's texture coordinate scale after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Left eye's texture coordinate scale after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftScale = { "LeftScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeEquirect, LeftScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightScale_MetaData[] = {
		{ "Category", "Equirect Properties" },
		{ "Comment", "/** Right eye's texture coordinate scale after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Right eye's texture coordinate scale after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightScale = { "RightScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeEquirect, RightScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftBias_MetaData[] = {
		{ "Category", "Equirect Properties" },
		{ "Comment", "/** Left eye's texture coordinate bias after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Left eye's texture coordinate bias after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftBias = { "LeftBias", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeEquirect, LeftBias), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightBias_MetaData[] = {
		{ "Category", "Equirect Properties" },
		{ "Comment", "/** Right eye's texture coordinate bias after mapping to 2D. */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Right eye's texture coordinate bias after mapping to 2D." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightBias = { "RightBias", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerShapeEquirect, RightBias), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightBias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftUVRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightUVRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_LeftBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::NewProp_RightBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerShapeEquirect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::ClassParams = {
		&UStereoLayerShapeEquirect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerShapeEquirect()
	{
		if (!Z_Registration_Info_UClass_UStereoLayerShapeEquirect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoLayerShapeEquirect.OuterSingleton, Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStereoLayerShapeEquirect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStereoLayerShapeEquirect>()
	{
		return UStereoLayerShapeEquirect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerShapeEquirect);
	UStereoLayerShapeEquirect::~UStereoLayerShapeEquirect() {}
	DEFINE_FUNCTION(UStereoLayerComponent::execMarkTextureForUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkTextureForUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_InPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execSetEquirectProps)
	{
		P_GET_STRUCT(FEquirectProps,Z_Param_InScaleBiases);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquirectProps(Z_Param_InScaleBiases);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execGetUVRect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox2D*)Z_Param__Result=P_THIS->GetUVRect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execSetUVRect)
	{
		P_GET_STRUCT(FBox2D,Z_Param_InUVRect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUVRect(Z_Param_InUVRect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execGetQuadSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetQuadSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execSetQuadSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InQuadSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuadSize(Z_Param_InQuadSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execGetLeftTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetLeftTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execGetTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execSetLeftTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeftTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerComponent::execSetTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	void UStereoLayerComponent::StaticRegisterNativesUStereoLayerComponent()
	{
		UClass* Class = UStereoLayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeftTexture", &UStereoLayerComponent::execGetLeftTexture },
			{ "GetPriority", &UStereoLayerComponent::execGetPriority },
			{ "GetQuadSize", &UStereoLayerComponent::execGetQuadSize },
			{ "GetTexture", &UStereoLayerComponent::execGetTexture },
			{ "GetUVRect", &UStereoLayerComponent::execGetUVRect },
			{ "MarkTextureForUpdate", &UStereoLayerComponent::execMarkTextureForUpdate },
			{ "SetEquirectProps", &UStereoLayerComponent::execSetEquirectProps },
			{ "SetLeftTexture", &UStereoLayerComponent::execSetLeftTexture },
			{ "SetPriority", &UStereoLayerComponent::execSetPriority },
			{ "SetQuadSize", &UStereoLayerComponent::execSetQuadSize },
			{ "SetTexture", &UStereoLayerComponent::execSetTexture },
			{ "SetUVRect", &UStereoLayerComponent::execSetUVRect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics
	{
		struct StereoLayerComponent_eventGetLeftTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetLeftTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the texture mapped to the stereo layer for left eye, if stereoscopic layer textures are supported on the platform.\n" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the texture mapped to the stereo layer for left eye, if stereoscopic layer textures are supported on the platform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetLeftTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::StereoLayerComponent_eventGetLeftTexture_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics
	{
		struct StereoLayerComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the render priority\n" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the render priority" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::StereoLayerComponent_eventGetPriority_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics
	{
		struct StereoLayerComponent_eventGetQuadSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetQuadSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the height and width of the rendered quad\n" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the height and width of the rendered quad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetQuadSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::StereoLayerComponent_eventGetQuadSize_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics
	{
		struct StereoLayerComponent_eventGetTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the texture mapped to the stereo layer.\n" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the texture mapped to the stereo layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::StereoLayerComponent_eventGetTexture_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics
	{
		struct StereoLayerComponent_eventGetUVRect_Parms
		{
			FBox2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetUVRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the UV coordinates mapped to the quad face\n" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the UV coordinates mapped to the quad face" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetUVRect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::StereoLayerComponent_eventGetUVRect_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetUVRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// Manually mark the stereo layer texture for updating\n" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Manually mark the stereo layer texture for updating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "MarkTextureForUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics
	{
		struct StereoLayerComponent_eventSetEquirectProps_Parms
		{
			FEquirectProps InScaleBiases;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScaleBiases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::NewProp_InScaleBiases = { "InScaleBiases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetEquirectProps_Parms, InScaleBiases), Z_Construct_UScriptStruct_FEquirectProps, METADATA_PARAMS(nullptr, 0) }; // 3392085623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::NewProp_InScaleBiases,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/**\n\x09 * Set Equirect layer properties: UVRect, Scale, and Bias\n\x09 * @param\x09LeftScale: Scale for left eye\n\x09 * @param\x09LeftBias: Bias for left eye\n\x09 * @param\x09RightScale: Scale for right eye\n\x09 * @param\x09RightBias: Bias for right eye\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use UStereoLayerShapeEquirect::SetEquirectProps() instead." },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Set Equirect layer properties: UVRect, Scale, and Bias\n@param       LeftScale: Scale for left eye\n@param       LeftBias: Bias for left eye\n@param       RightScale: Scale for right eye\n@param       RightBias: Bias for right eye" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetEquirectProps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::StereoLayerComponent_eventSetEquirectProps_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics
	{
		struct StereoLayerComponent_eventSetLeftTexture_Parms
		{
			UTexture* InTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetLeftTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** \n\x09 * Change the texture displayed on the stereo layer for left eye, if stereoscopic layer textures are supported on the platform.\n\x09 * @param\x09InTexture: new Texture2D\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the texture displayed on the stereo layer for left eye, if stereoscopic layer textures are supported on the platform.\n@param       InTexture: new Texture2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetLeftTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::StereoLayerComponent_eventSetLeftTexture_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics
	{
		struct StereoLayerComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** \n\x09 * Change the layer's render priority, higher priorities render on top of lower priorities\n\x09 * @param\x09InPriority: Priority value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the layer's render priority, higher priorities render on top of lower priorities\n@param       InPriority: Priority value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::StereoLayerComponent_eventSetPriority_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics
	{
		struct StereoLayerComponent_eventSetQuadSize_Parms
		{
			FVector2D InQuadSize;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InQuadSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::NewProp_InQuadSize = { "InQuadSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetQuadSize_Parms, InQuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::NewProp_InQuadSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** \n\x09 * Change the quad size. This is the unscaled height and width, before component scale is applied.\n\x09 * @param\x09InQuadSize: new quad size.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the quad size. This is the unscaled height and width, before component scale is applied.\n@param       InQuadSize: new quad size." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetQuadSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::StereoLayerComponent_eventSetQuadSize_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics
	{
		struct StereoLayerComponent_eventSetTexture_Parms
		{
			UTexture* InTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** \n\x09 * Change the texture displayed on the stereo layer. \n\x09 *\n\x09 * If stereoscopic layer textures are supported on the platform and LeftTexture is set, this property controls the texture for the right eye.\n\x09 * @param\x09InTexture: new Texture2D\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the texture displayed on the stereo layer.\n\nIf stereoscopic layer textures are supported on the platform and LeftTexture is set, this property controls the texture for the right eye.\n@param       InTexture: new Texture2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::StereoLayerComponent_eventSetTexture_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics
	{
		struct StereoLayerComponent_eventSetUVRect_Parms
		{
			FBox2D InUVRect;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUVRect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::NewProp_InUVRect = { "InUVRect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetUVRect_Parms, InUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::NewProp_InUVRect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** \n\x09 * Change the UV coordinates mapped to the quad face\n\x09 * @param\x09InUVRect: Min and Max UV coordinates\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the UV coordinates mapped to the quad face\n@param       InUVRect: Min and Max UV coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetUVRect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::StereoLayerComponent_eventSetUVRect_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetUVRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoLayerComponent);
	UClass* Z_Construct_UClass_UStereoLayerComponent_NoRegister()
	{
		return UStereoLayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLiveTexture_MetaData[];
#endif
		static void NewProp_bLiveTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDepth_MetaData[];
#endif
		static void NewProp_bSupportsDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[];
#endif
		static void NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuadSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVRect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVRect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CylinderRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CylinderOverlayArc_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderOverlayArc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CylinderHeight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CylinderHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquirectProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquirectProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoLayerType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StereoLayerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoLayerShape_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StereoLayerShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoLayerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetLeftTexture, "GetLeftTexture" }, // 1243901329
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetPriority, "GetPriority" }, // 3520593953
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize, "GetQuadSize" }, // 218874040
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetTexture, "GetTexture" }, // 3558446514
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetUVRect, "GetUVRect" }, // 3442659741
		{ &Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate, "MarkTextureForUpdate" }, // 3209698967
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetEquirectProps, "SetEquirectProps" }, // 356536426
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetLeftTexture, "SetLeftTexture" }, // 2382310929
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetPriority, "SetPriority" }, // 3722262430
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize, "SetQuadSize" }, // 2824718101
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetTexture, "SetTexture" }, // 2053710800
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetUVRect, "SetUVRect" }, // 1496130502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "HeadMountedDisplay" },
		{ "Comment", "/** \n * A geometry layer within the stereo rendered viewport.\n */" },
		{ "DisplayName", "Stereo Layer" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "Components/StereoLayerComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "A geometry layer within the stereo rendered viewport." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the stereo layer texture needs to update itself every frame(scene capture, video, etc.) */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the stereo layer texture needs to update itself every frame(scene capture, video, etc.)" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bLiveTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture = { "bLiveTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bSupportsDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth = { "bSupportsDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the texture should not use its own alpha channel (1.0 will be substituted) */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bNoAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Texture displayed on the stereo layer (if stereoscopic textures are supported on the platform and more than one texture is provided, this will be the right eye) **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Texture displayed on the stereo layer (if stereoscopic textures are supported on the platform and more than one texture is provided, this will be the right eye) *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture_MetaData[] = {
		{ "Category", "Stereoscopic Properties" },
		{ "Comment", "/** Texture displayed on the stereo layer for left eye, if stereoscopic textures are supported on the platform and by the layer shape **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Texture displayed on the stereo layer for left eye, if stereoscopic textures are supported on the platform and by the layer shape *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture = { "LeftTexture", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, LeftTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the quad should internally set it's Y value based on the set texture's dimensions */" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bQuadPreserveTextureRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio = { "bQuadPreserveTextureRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Size of the rendered stereo layer quad **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Size of the rendered stereo layer quad *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize = { "QuadSize", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, QuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** UV coordinates mapped to the quad face **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "UV coordinates mapped to the quad face *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect = { "UVRect", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, UVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius = { "CylinderRadius", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, CylinderRadius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc = { "CylinderOverlayArc", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, CylinderOverlayArc_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight = { "CylinderHeight", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, CylinderHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_EquirectProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_EquirectProps = { "EquirectProps", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, EquirectProps_DEPRECATED), Z_Construct_UScriptStruct_FEquirectProps, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_EquirectProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_EquirectProps_MetaData)) }; // 3392085623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Specifies how and where the quad is rendered to the screen **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Specifies how and where the quad is rendered to the screen *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType = { "StereoLayerType", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, StereoLayerType), Z_Construct_UEnum_Engine_EStereoLayerType, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType_MetaData)) }; // 212003641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape = { "StereoLayerShape", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, StereoLayerShape_DEPRECATED), Z_Construct_UEnum_Engine_EStereoLayerShape, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape_MetaData)) }; // 875910051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! **/" },
		{ "DisplayName", "Stereo Layer Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x002608000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, Shape), Z_Construct_UClass_UStereoLayerShape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Shape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Render priority among all stereo layers, higher priority render on top of lower priority **/" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoLayerComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoLayerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_EquirectProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerComponent_Statics::ClassParams = {
		&UStereoLayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStereoLayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerComponent()
	{
		if (!Z_Registration_Info_UClass_UStereoLayerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoLayerComponent.OuterSingleton, Z_Construct_UClass_UStereoLayerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStereoLayerComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStereoLayerComponent>()
	{
		return UStereoLayerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerComponent);
	UStereoLayerComponent::~UStereoLayerComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStereoLayerComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::EnumInfo[] = {
		{ EStereoLayerType_StaticEnum, TEXT("EStereoLayerType"), &Z_Registration_Info_UEnum_EStereoLayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 212003641U) },
		{ EStereoLayerShape_StaticEnum, TEXT("EStereoLayerShape"), &Z_Registration_Info_UEnum_EStereoLayerShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 875910051U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::ScriptStructInfo[] = {
		{ FEquirectProps::StaticStruct, Z_Construct_UScriptStruct_FEquirectProps_Statics::NewStructOps, TEXT("EquirectProps"), &Z_Registration_Info_UScriptStruct_EquirectProps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquirectProps), 3392085623U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStereoLayerShape, UStereoLayerShape::StaticClass, TEXT("UStereoLayerShape"), &Z_Registration_Info_UClass_UStereoLayerShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoLayerShape), 1730370506U) },
		{ Z_Construct_UClass_UStereoLayerShapeQuad, UStereoLayerShapeQuad::StaticClass, TEXT("UStereoLayerShapeQuad"), &Z_Registration_Info_UClass_UStereoLayerShapeQuad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoLayerShapeQuad), 4059679701U) },
		{ Z_Construct_UClass_UStereoLayerShapeCylinder, UStereoLayerShapeCylinder::StaticClass, TEXT("UStereoLayerShapeCylinder"), &Z_Registration_Info_UClass_UStereoLayerShapeCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoLayerShapeCylinder), 3417327301U) },
		{ Z_Construct_UClass_UStereoLayerShapeCubemap, UStereoLayerShapeCubemap::StaticClass, TEXT("UStereoLayerShapeCubemap"), &Z_Registration_Info_UClass_UStereoLayerShapeCubemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoLayerShapeCubemap), 2937988783U) },
		{ Z_Construct_UClass_UStereoLayerShapeEquirect, UStereoLayerShapeEquirect::StaticClass, TEXT("UStereoLayerShapeEquirect"), &Z_Registration_Info_UClass_UStereoLayerShapeEquirect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoLayerShapeEquirect), 1315325350U) },
		{ Z_Construct_UClass_UStereoLayerComponent, UStereoLayerComponent::StaticClass, TEXT("UStereoLayerComponent"), &Z_Registration_Info_UClass_UStereoLayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoLayerComponent), 41460312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_765516675(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
