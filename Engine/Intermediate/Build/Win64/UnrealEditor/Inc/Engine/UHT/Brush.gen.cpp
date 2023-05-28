// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Brush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrush() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ABrush();
	ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECsgOper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECsgOper;
	static UEnum* ECsgOper_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECsgOper.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECsgOper.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECsgOper, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECsgOper"));
		}
		return Z_Registration_Info_UEnum_ECsgOper.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECsgOper>()
	{
		return ECsgOper_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECsgOper_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECsgOper_Statics::Enumerators[] = {
		{ "CSG_Active", (int64)CSG_Active },
		{ "CSG_Add", (int64)CSG_Add },
		{ "CSG_Subtract", (int64)CSG_Subtract },
		{ "CSG_Intersect", (int64)CSG_Intersect },
		{ "CSG_Deintersect", (int64)CSG_Deintersect },
		{ "CSG_None", (int64)CSG_None },
		{ "CSG_MAX", (int64)CSG_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECsgOper_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n// Variables.\n" },
		{ "CSG_Active.Comment", "/** Active brush. (deprecated, do not use.) */" },
		{ "CSG_Active.Name", "CSG_Active" },
		{ "CSG_Active.ToolTip", "Active brush. (deprecated, do not use.)" },
		{ "CSG_Add.Comment", "/** Add to world. (deprecated, do not use.) */" },
		{ "CSG_Add.Name", "CSG_Add" },
		{ "CSG_Add.ToolTip", "Add to world. (deprecated, do not use.)" },
		{ "CSG_Deintersect.Comment", "/** Form from negative intersection with world. */" },
		{ "CSG_Deintersect.Name", "CSG_Deintersect" },
		{ "CSG_Deintersect.ToolTip", "Form from negative intersection with world." },
		{ "CSG_Intersect.Comment", "/** Form from intersection with world. */" },
		{ "CSG_Intersect.Name", "CSG_Intersect" },
		{ "CSG_Intersect.ToolTip", "Form from intersection with world." },
		{ "CSG_MAX.Name", "CSG_MAX" },
		{ "CSG_None.Name", "CSG_None" },
		{ "CSG_Subtract.Comment", "/** Subtract from world. (deprecated, do not use.) */" },
		{ "CSG_Subtract.Name", "CSG_Subtract" },
		{ "CSG_Subtract.ToolTip", "Subtract from world. (deprecated, do not use.)" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Variables." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECsgOper_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECsgOper",
		"ECsgOper",
		Z_Construct_UEnum_Engine_ECsgOper_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECsgOper_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECsgOper_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECsgOper_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECsgOper()
	{
		if (!Z_Registration_Info_UEnum_ECsgOper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECsgOper.InnerSingleton, Z_Construct_UEnum_Engine_ECsgOper_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECsgOper.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBrushType;
	static UEnum* EBrushType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBrushType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBrushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBrushType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBrushType"));
		}
		return Z_Registration_Info_UEnum_EBrushType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBrushType>()
	{
		return EBrushType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBrushType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBrushType_Statics::Enumerators[] = {
		{ "Brush_Default", (int64)Brush_Default },
		{ "Brush_Add", (int64)Brush_Add },
		{ "Brush_Subtract", (int64)Brush_Subtract },
		{ "Brush_MAX", (int64)Brush_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBrushType_Statics::Enum_MetaDataParams[] = {
		{ "Brush_Add.Comment", "/** Add to world. */" },
		{ "Brush_Add.DisplayName", "Additive" },
		{ "Brush_Add.Name", "Brush_Add" },
		{ "Brush_Add.ToolTip", "Add to world." },
		{ "Brush_Default.Comment", "/** Default/builder brush. */" },
		{ "Brush_Default.Hidden", "" },
		{ "Brush_Default.Name", "Brush_Default" },
		{ "Brush_Default.ToolTip", "Default/builder brush." },
		{ "Brush_MAX.Name", "Brush_MAX" },
		{ "Brush_Subtract.Comment", "/** Subtract from world. */" },
		{ "Brush_Subtract.DisplayName", "Subtractive" },
		{ "Brush_Subtract.Name", "Brush_Subtract" },
		{ "Brush_Subtract.ToolTip", "Subtract from world." },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBrushType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBrushType",
		"EBrushType",
		Z_Construct_UEnum_Engine_EBrushType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBrushType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBrushType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBrushType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBrushType()
	{
		if (!Z_Registration_Info_UEnum_EBrushType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBrushType.InnerSingleton, Z_Construct_UEnum_Engine_EBrushType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBrushType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeomSelection;
class UScriptStruct* FGeomSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeomSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeomSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeomSelection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GeomSelection"));
	}
	return Z_Registration_Info_UScriptStruct_GeomSelection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGeomSelection>()
{
	return FGeomSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeomSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Selection information for geometry mode\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Selection information for geometry mode" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeomSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeomSelection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomSelection, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "// EGeometrySelectionType_\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "EGeometrySelectionType_" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomSelection, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex_MetaData[] = {
		{ "Comment", "// Index into the geometry data structures\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Index into the geometry data structures" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex = { "SelectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomSelection, SelectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeomSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GeomSelection",
		sizeof(FGeomSelection),
		alignof(FGeomSelection),
		Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_GeomSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeomSelection.InnerSingleton, Z_Construct_UScriptStruct_FGeomSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeomSelection.InnerSingleton;
	}
	void ABrush::StaticRegisterNativesABrush()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABrush);
	UClass* Z_Construct_UClass_ABrush_NoRegister()
	{
		return ABrush::StaticClass();
	}
	struct Z_Construct_UClass_ABrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BrushType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolyFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColored_MetaData[];
#endif
		static void NewProp_bColored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolidWhenSelected_MetaData[];
#endif
		static void NewProp_bSolidWhenSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidWhenSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceableFromClassBrowser_MetaData[];
#endif
		static void NewProp_bPlaceableFromClassBrowser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceableFromClassBrowser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotForClientOrServer_MetaData[];
#endif
		static void NewProp_bNotForClientOrServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotForClientOrServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushBuilder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushBuilder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayShadedVolume_MetaData[];
#endif
		static void NewProp_bDisplayShadedVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayShadedVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadedVolumeOpacityValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadedVolumeOpacityValue;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInManipulation_MetaData[];
#endif
		static void NewProp_bInManipulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInManipulation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedSelections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedSelections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedSelections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Collision Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/Brush.h" },
		{ "IsBlueprintBase", "false" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushType_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Type of brush */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Type of brush" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushType = { "BrushType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, BrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushType_MetaData)) }; // 133554834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor_MetaData[] = {
		{ "Comment", "// Information.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor = { "BrushColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, BrushColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags = { "PolyFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, PolyFlags), METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bColored_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bColored_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bColored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bColored = { "bColored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bColored_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bColored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bColored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bSolidWhenSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected = { "bSolidWhenSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_MetaData[] = {
		{ "Comment", "/** If true, this brush class can be placed using the class browser like other simple class types */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, this brush class can be placed using the class browser like other simple class types" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bPlaceableFromClassBrowser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser = { "bPlaceableFromClassBrowser", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_MetaData[] = {
		{ "Comment", "/** If true, this brush is a builder or otherwise does not need to be loaded into the game */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, this brush is a builder or otherwise does not need to be loaded into the game" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bNotForClientOrServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer = { "bNotForClientOrServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_Brush_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, Brush), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_Brush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent = { "BrushComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, BrushComponent), Z_Construct_UClass_UBrushComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder_MetaData[] = {
		{ "Category", "BrushBuilder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder = { "BrushBuilder", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, BrushBuilder), Z_Construct_UClass_UBrushBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** If true, display the brush with a shaded volume */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, display the brush with a shaded volume" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bDisplayShadedVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume = { "bDisplayShadedVolume", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_ShadedVolumeOpacityValue_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Value used to set the opacity for the shaded volume, between 0-1 */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Value used to set the opacity for the shaded volume, between 0-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_ShadedVolumeOpacityValue = { "ShadedVolumeOpacityValue", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, ShadedVolumeOpacityValue), METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_ShadedVolumeOpacityValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_ShadedVolumeOpacityValue_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_MetaData[] = {
		{ "Comment", "/** Flag set when we are in a manipulation (scaling, translation, brush builder param change etc.) */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Flag set when we are in a manipulation (scaling, translation, brush builder param change etc.)" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bInManipulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation = { "bInManipulation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_Inner = { "SavedSelections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeomSelection, METADATA_PARAMS(nullptr, 0) }; // 2956632390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores selection information from geometry mode.  This is the only information that we can't\n\x09 * regenerate by looking at the source brushes following an undo operation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Stores selection information from geometry mode.  This is the only information that we can't\nregenerate by looking at the source brushes following an undo operation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections = { "SavedSelections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABrush, SavedSelections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_MetaData)) }; // 2956632390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bColored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_Brush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_ShadedVolumeOpacityValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrush>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABrush_Statics::ClassParams = {
		&ABrush::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABrush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrush()
	{
		if (!Z_Registration_Info_UClass_ABrush.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABrush.OuterSingleton, Z_Construct_UClass_ABrush_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABrush.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ABrush>()
	{
		return ABrush::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrush);
	ABrush::~ABrush() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::EnumInfo[] = {
		{ ECsgOper_StaticEnum, TEXT("ECsgOper"), &Z_Registration_Info_UEnum_ECsgOper, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 956340304U) },
		{ EBrushType_StaticEnum, TEXT("EBrushType"), &Z_Registration_Info_UEnum_EBrushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 133554834U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ScriptStructInfo[] = {
		{ FGeomSelection::StaticStruct, Z_Construct_UScriptStruct_FGeomSelection_Statics::NewStructOps, TEXT("GeomSelection"), &Z_Registration_Info_UScriptStruct_GeomSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeomSelection), 2956632390U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABrush, ABrush::StaticClass, TEXT("ABrush"), &Z_Registration_Info_UClass_ABrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABrush), 3915606974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_1603482382(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
