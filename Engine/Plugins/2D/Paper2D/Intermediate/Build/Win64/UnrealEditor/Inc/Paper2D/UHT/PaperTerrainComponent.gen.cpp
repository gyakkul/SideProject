// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTerrainComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainComponent();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	DEFINE_FUNCTION(UPaperTerrainComponent::execSetTerrainColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTerrainColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	void UPaperTerrainComponent::StaticRegisterNativesUPaperTerrainComponent()
	{
		UClass* Class = UPaperTerrainComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTerrainColor", &UPaperTerrainComponent::execSetTerrainColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics
	{
		struct PaperTerrainComponent_eventSetTerrainColor_Parms
		{
			FLinearColor NewColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperTerrainComponent_eventSetTerrainColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Set color of the terrain\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Set color of the terrain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTerrainComponent, nullptr, "SetTerrainColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PaperTerrainComponent_eventSetTerrainColor_Parms), Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTerrainComponent);
	UClass* Z_Construct_UClass_UPaperTerrainComponent_NoRegister()
	{
		return UPaperTerrainComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTerrainComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TerrainMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosedSpline_MetaData[];
#endif
		static void NewProp_bClosedSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilledSpline_MetaData[];
#endif
		static void NewProp_bFilledSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilledSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedSpline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentOverlapAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentOverlapAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TerrainColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReparamStepsPerSegment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReparamStepsPerSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteCollisionDomain_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpriteCollisionDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedBodySetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTerrainComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperTerrainComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor, "SetTerrainColor" }, // 3153198412
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The terrain visualization component for an associated spline component.\n * This takes a 2D terrain material and instances sprite geometry along the spline path.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "PaperTerrainComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The terrain visualization component for an associated spline component.\nThis takes a 2D terrain material and instances sprite geometry along the spline path." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainMaterial_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** The terrain material to apply to this component (set of rules for which sprites are used on different surfaces or the interior) */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The terrain material to apply to this component (set of rules for which sprites are used on different surfaces or the interior)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainMaterial = { "TerrainMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, TerrainMaterial), Z_Construct_UClass_UPaperTerrainMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_SetBit(void* Obj)
	{
		((UPaperTerrainComponent*)Obj)->bClosedSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline = { "bClosedSpline", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperTerrainComponent), &Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_MetaData[] = {
		{ "Category", "Sprite" },
		{ "EditCondition", "bClosedSpline" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_SetBit(void* Obj)
	{
		((UPaperTerrainComponent*)Obj)->bFilledSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline = { "bFilledSpline", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperTerrainComponent), &Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_AssociatedSpline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_AssociatedSpline = { "AssociatedSpline", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, AssociatedSpline), Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_AssociatedSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_AssociatedSpline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Random seed used for choosing which spline meshes to use. */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Random seed used for choosing which spline meshes to use." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SegmentOverlapAmount_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** The overlap amount between segments */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The overlap amount between segments" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SegmentOverlapAmount = { "SegmentOverlapAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, SegmentOverlapAmount), METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SegmentOverlapAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SegmentOverlapAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainColor_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** The color of the terrain (passed to the sprite material as a vertex color) */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The color of the terrain (passed to the sprite material as a vertex color)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainColor = { "TerrainColor", nullptr, (EPropertyFlags)0x0020080200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, TerrainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of steps per spline segment to place in the reparameterization table */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Number of steps per spline segment to place in the reparameterization table" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_ReparamStepsPerSegment = { "ReparamStepsPerSegment", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, ReparamStepsPerSegment), METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SpriteCollisionDomain_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision domain (no collision, 2D (experimental), or 3D) */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Collision domain (no collision, 2D (experimental), or 3D)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SpriteCollisionDomain = { "SpriteCollisionDomain", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, SpriteCollisionDomain), Z_Construct_UEnum_Paper2D_ESpriteCollisionMode, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SpriteCollisionDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SpriteCollisionDomain_MetaData)) }; // 2663272316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** The extrusion thickness of collision geometry when using a 3D collision domain */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "The extrusion thickness of collision geometry when using a 3D collision domain" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CachedBodySetup_MetaData[] = {
		{ "Comment", "/** Description of collision */" },
		{ "ModuleRelativePath", "Classes/PaperTerrainComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CachedBodySetup = { "CachedBodySetup", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainComponent, CachedBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CachedBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CachedBodySetup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTerrainComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_AssociatedSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SegmentOverlapAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_TerrainColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_ReparamStepsPerSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_SpriteCollisionDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_CachedBodySetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTerrainComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTerrainComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTerrainComponent_Statics::ClassParams = {
		&UPaperTerrainComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperTerrainComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTerrainComponent()
	{
		if (!Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton, Z_Construct_UClass_UPaperTerrainComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UPaperTerrainComponent>()
	{
		return UPaperTerrainComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTerrainComponent);
	UPaperTerrainComponent::~UPaperTerrainComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTerrainComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTerrainComponent, UPaperTerrainComponent::StaticClass, TEXT("UPaperTerrainComponent"), &Z_Registration_Info_UClass_UPaperTerrainComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTerrainComponent), 3666756738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_2569638318(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
