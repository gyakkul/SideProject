// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMeshClipMorph() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeModifierBase();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeMeshClipMorph::StaticRegisterNativesUCustomizableObjectNodeMeshClipMorph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMeshClipMorph);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_NoRegister()
	{
		return UCustomizableObjectNodeMeshClipMorph::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSkeletonIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReferenceSkeletonIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalStartOffset_MetaData[];
#endif
		static void NewProp_bLocalStartOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertNormal_MetaData[];
#endif
		static void NewProp_bInvertNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEffectRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEffectRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeModifierBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "MeshToClipAndMorph" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, BoneName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "MeshToClipAndMorph" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_ReferenceSkeletonIndex_MetaData[] = {
		{ "Category", "MeshToClipAndMorph" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_ReferenceSkeletonIndex = { "ReferenceSkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, ReferenceSkeletonIndex), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_ReferenceSkeletonIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_ReferenceSkeletonIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Morph Start Offset" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "Offset from the origin of the selected bone to the actual start of the morph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, StartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bLocalStartOffset_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Local Start Offset" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "Toggles between a local or global start offset." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bLocalStartOffset_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshClipMorph*)Obj)->bLocalStartOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bLocalStartOffset = { "bLocalStartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMeshClipMorph), &Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bLocalStartOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bLocalStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bLocalStartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_B_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Morph length" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "The length from the morph start to the clip plane." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, B), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Ellipse Radius 1" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "First radius of the ellipse that the mesh is morphed into." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, Radius), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius2_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Ellipse Radius 2" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "Second radius of the ellipse that the mesh is morphed into." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius2 = { "Radius2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, Radius2), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_RotationAngle_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Ellipse Rotation" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "Ellipse Rotation in degrees around the bone axis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, RotationAngle), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_RotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_RotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Exponent_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Morph Curve Control" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "Controls the morph curve shape. A value of 1 is linear, less than 1 is concave and greater than 1 convex." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, Exponent), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Exponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Exponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bInvertNormal_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Invert normal direction" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "Flag to invert the normal direction" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bInvertNormal_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshClipMorph*)Obj)->bInvertNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bInvertNormal = { "bInvertNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMeshClipMorph), &Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bInvertNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bInvertNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bInvertNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_MaxEffectRadius_MetaData[] = {
		{ "Category", "MeshClipParameters" },
		{ "DisplayName", "Max Effect Radius" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipMorph.h" },
		{ "ToolTip", "The maximum distance from the origin of the widget where vertices will be affected. If negative, there will be no limit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_MaxEffectRadius = { "MaxEffectRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipMorph, MaxEffectRadius), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_MaxEffectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_MaxEffectRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_ReferenceSkeletonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bLocalStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Radius2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_RotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Exponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_bInvertNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::NewProp_MaxEffectRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMeshClipMorph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::ClassParams = {
		&UCustomizableObjectNodeMeshClipMorph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipMorph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipMorph.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipMorph.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMeshClipMorph>()
	{
		return UCustomizableObjectNodeMeshClipMorph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMeshClipMorph);
	UCustomizableObjectNodeMeshClipMorph::~UCustomizableObjectNodeMeshClipMorph() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeMeshClipMorph)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipMorph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipMorph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeMeshClipMorph, UCustomizableObjectNodeMeshClipMorph::StaticClass, TEXT("UCustomizableObjectNodeMeshClipMorph"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipMorph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMeshClipMorph), 3326687354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipMorph_h_2121365761(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipMorph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipMorph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
