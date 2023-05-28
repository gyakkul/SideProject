// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTerrainMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainMaterial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule;
class UScriptStruct* FPaperTerrainMaterialRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTerrainMaterialRule"));
	}
	return Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTerrainMaterialRule>()
{
	return FPaperTerrainMaterialRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StartCap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Body_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndCap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EndCap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DrawOrder;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Rule for a single section of a terrain material\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Rule for a single section of a terrain material" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTerrainMaterialRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use at the 'left' (closest to spline start) edge of the terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use at the 'left' (closest to spline start) edge of the terrain segment" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap = { "StartCap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, StartCap), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_Inner = { "Body", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// A set of sprites to randomly choose to fill up the interior space between the caps in a terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "A set of sprites to randomly choose to fill up the interior space between the caps in a terrain segment" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, Body), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use at the 'right' (closest to spline end) edge of the terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use at the 'right' (closest to spline end) edge of the terrain segment" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap = { "EndCap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, EndCap), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Minimum slope angle (in degrees) to apply this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Minimum slope angle (in degrees) to apply this rule" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle = { "MinimumAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, MinimumAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Maximum slope angle (in degrees) to apply this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Maximum slope angle (in degrees) to apply this rule" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle = { "MaximumAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, MaximumAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// If true, collision is enabled for sections matching this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "If true, collision is enabled for sections matching this rule" },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FPaperTerrainMaterialRule*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperTerrainMaterialRule), &Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// How much should the collision be lofted from the spline (positive values go out from the spline, negative values go in to the spline)\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "How much should the collision be lofted from the spline (positive values go out from the spline, negative values go in to the spline)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset = { "CollisionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, CollisionOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Specify a draw order for different materials in a spline. Smaller draw orders are drawn first, negative values are allowed.\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Specify a draw order for different materials in a spline. Smaller draw orders are drawn first, negative values are allowed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder = { "DrawOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, DrawOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Readable description for the rule (unused anywhere, just for clarity when editing the material)\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Readable description for the rule (unused anywhere, just for clarity when editing the material)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTerrainMaterialRule, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperTerrainMaterialRule",
		sizeof(FPaperTerrainMaterialRule),
		alignof(FPaperTerrainMaterialRule),
		Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.InnerSingleton, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.InnerSingleton;
	}
	void UPaperTerrainMaterial::StaticRegisterNativesUPaperTerrainMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTerrainMaterial);
	UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister()
	{
		return UPaperTerrainMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTerrainMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorFill_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteriorFill;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTerrainMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Paper Terrain Material\n *\n * 'Material' setup for a 2D terrain spline (stores references to sprites that will be instanced along the spline path, not actually related to UMaterialInterface).\n */" },
		{ "IncludePath", "PaperTerrainMaterial.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Paper Terrain Material\n\n'Material' setup for a 2D terrain spline (stores references to sprites that will be instanced along the spline path, not actually related to UMaterialInterface)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule, METADATA_PARAMS(nullptr, 0) }; // 4027625959
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainMaterial, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_MetaData)) }; // 4027625959
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use for an interior region fill\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use for an interior region fill" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill = { "InteriorFill", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTerrainMaterial, InteriorFill), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTerrainMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTerrainMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::ClassParams = {
		&UPaperTerrainMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTerrainMaterial()
	{
		if (!Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton, Z_Construct_UClass_UPaperTerrainMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UPaperTerrainMaterial>()
	{
		return UPaperTerrainMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTerrainMaterial);
	UPaperTerrainMaterial::~UPaperTerrainMaterial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ScriptStructInfo[] = {
		{ FPaperTerrainMaterialRule::StaticStruct, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewStructOps, TEXT("PaperTerrainMaterialRule"), &Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperTerrainMaterialRule), 4027625959U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTerrainMaterial, UPaperTerrainMaterial::StaticClass, TEXT("UPaperTerrainMaterial"), &Z_Registration_Info_UClass_UPaperTerrainMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTerrainMaterial), 874124673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_1040904471(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
