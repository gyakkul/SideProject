// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Text3DComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeText3DComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	TEXT3D_API UEnum* Z_Construct_UEnum_Text3D_EText3DBevelType();
	TEXT3D_API UEnum* Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment();
	TEXT3D_API UEnum* Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment();
	TEXT3D_API UFunction* Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Text3D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EText3DVerticalTextAlignment;
	static UEnum* EText3DVerticalTextAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EText3DVerticalTextAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EText3DVerticalTextAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment, (UObject*)Z_Construct_UPackage__Script_Text3D(), TEXT("EText3DVerticalTextAlignment"));
		}
		return Z_Registration_Info_UEnum_EText3DVerticalTextAlignment.OuterSingleton;
	}
	template<> TEXT3D_API UEnum* StaticEnum<EText3DVerticalTextAlignment>()
	{
		return EText3DVerticalTextAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::Enumerators[] = {
		{ "EText3DVerticalTextAlignment::FirstLine", (int64)EText3DVerticalTextAlignment::FirstLine },
		{ "EText3DVerticalTextAlignment::Top", (int64)EText3DVerticalTextAlignment::Top },
		{ "EText3DVerticalTextAlignment::Center", (int64)EText3DVerticalTextAlignment::Center },
		{ "EText3DVerticalTextAlignment::Bottom", (int64)EText3DVerticalTextAlignment::Bottom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::Enum_MetaDataParams[] = {
		{ "Bottom.DisplayName", "Bottom" },
		{ "Bottom.Name", "EText3DVerticalTextAlignment::Bottom" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EText3DVerticalTextAlignment::Center" },
		{ "FirstLine.DisplayName", "First Line" },
		{ "FirstLine.Name", "EText3DVerticalTextAlignment::FirstLine" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "Top.DisplayName", "Top" },
		{ "Top.Name", "EText3DVerticalTextAlignment::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Text3D,
		nullptr,
		"EText3DVerticalTextAlignment",
		"EText3DVerticalTextAlignment",
		Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment()
	{
		if (!Z_Registration_Info_UEnum_EText3DVerticalTextAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EText3DVerticalTextAlignment.InnerSingleton, Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EText3DVerticalTextAlignment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment;
	static UEnum* EText3DHorizontalTextAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment, (UObject*)Z_Construct_UPackage__Script_Text3D(), TEXT("EText3DHorizontalTextAlignment"));
		}
		return Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment.OuterSingleton;
	}
	template<> TEXT3D_API UEnum* StaticEnum<EText3DHorizontalTextAlignment>()
	{
		return EText3DHorizontalTextAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::Enumerators[] = {
		{ "EText3DHorizontalTextAlignment::Left", (int64)EText3DHorizontalTextAlignment::Left },
		{ "EText3DHorizontalTextAlignment::Center", (int64)EText3DHorizontalTextAlignment::Center },
		{ "EText3DHorizontalTextAlignment::Right", (int64)EText3DHorizontalTextAlignment::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::Enum_MetaDataParams[] = {
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EText3DHorizontalTextAlignment::Center" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EText3DHorizontalTextAlignment::Left" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EText3DHorizontalTextAlignment::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Text3D,
		nullptr,
		"EText3DHorizontalTextAlignment",
		"EText3DHorizontalTextAlignment",
		Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment()
	{
		if (!Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment.InnerSingleton, Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Delegate called after text is rebuilt\n\x09 */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Delegate called after text is rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "TextGenerated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UText3DComponent::FTextGenerated_DelegateWrapper(const FMulticastScriptDelegate& TextGenerated)
{
	TextGenerated.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UText3DComponent::execGetTextScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTextScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execGetGlyphMeshComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetGlyphMeshComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execGetGlyphMeshComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetGlyphMeshComponent(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execGetGlyphKerningComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USceneComponent*>*)Z_Param__Result=P_THIS->GetGlyphKerningComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execGetGlyphKerningComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetGlyphKerningComponent(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execGetGlyphCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGlyphCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execGetBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBounds(Z_Param_Out_Origin,Z_Param_Out_BoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetCastShadow)
	{
		P_GET_UBOOL(Z_Param_NewCastShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastShadow(Z_Param_NewCastShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetFreeze)
	{
		P_GET_UBOOL(Z_Param_bFreeze);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFreeze(Z_Param_bFreeze);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetScaleProportionally)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleProportionally(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetMaxHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxHeight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetHasMaxHeight)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasMaxHeight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetMaxWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxWidth(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetHasMaxWidth)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasMaxWidth(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetVerticalAlignment)
	{
		P_GET_ENUM(EText3DVerticalTextAlignment,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EText3DVerticalTextAlignment(Z_Param_value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetHorizontalAlignment)
	{
		P_GET_ENUM(EText3DHorizontalTextAlignment,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EText3DHorizontalTextAlignment(Z_Param_value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetWordSpacing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWordSpacing(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetLineSpacing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLineSpacing(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetKerning)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKerning(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetBackMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackMaterial(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetExtrudeMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtrudeMaterial(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetBevelMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBevelMaterial(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetFrontMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrontMaterial(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetBevelSegments)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBevelSegments(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetBevelType)
	{
		P_GET_ENUM(EText3DBevelType,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBevelType(EText3DBevelType(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetBevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBevel(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetExtrude)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtrude(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetOutlineExpand)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlineExpand(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetOutline)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutline(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetFont)
	{
		P_GET_OBJECT(UFont,Z_Param_InFont);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFont(Z_Param_InFont);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DComponent::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UText3DComponent::StaticRegisterNativesUText3DComponent()
	{
		UClass* Class = UText3DComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBounds", &UText3DComponent::execGetBounds },
			{ "GetGlyphCount", &UText3DComponent::execGetGlyphCount },
			{ "GetGlyphKerningComponent", &UText3DComponent::execGetGlyphKerningComponent },
			{ "GetGlyphKerningComponents", &UText3DComponent::execGetGlyphKerningComponents },
			{ "GetGlyphMeshComponent", &UText3DComponent::execGetGlyphMeshComponent },
			{ "GetGlyphMeshComponents", &UText3DComponent::execGetGlyphMeshComponents },
			{ "GetTextScale", &UText3DComponent::execGetTextScale },
			{ "SetBackMaterial", &UText3DComponent::execSetBackMaterial },
			{ "SetBevel", &UText3DComponent::execSetBevel },
			{ "SetBevelMaterial", &UText3DComponent::execSetBevelMaterial },
			{ "SetBevelSegments", &UText3DComponent::execSetBevelSegments },
			{ "SetBevelType", &UText3DComponent::execSetBevelType },
			{ "SetCastShadow", &UText3DComponent::execSetCastShadow },
			{ "SetExtrude", &UText3DComponent::execSetExtrude },
			{ "SetExtrudeMaterial", &UText3DComponent::execSetExtrudeMaterial },
			{ "SetFont", &UText3DComponent::execSetFont },
			{ "SetFreeze", &UText3DComponent::execSetFreeze },
			{ "SetFrontMaterial", &UText3DComponent::execSetFrontMaterial },
			{ "SetHasMaxHeight", &UText3DComponent::execSetHasMaxHeight },
			{ "SetHasMaxWidth", &UText3DComponent::execSetHasMaxWidth },
			{ "SetHorizontalAlignment", &UText3DComponent::execSetHorizontalAlignment },
			{ "SetKerning", &UText3DComponent::execSetKerning },
			{ "SetLineSpacing", &UText3DComponent::execSetLineSpacing },
			{ "SetMaxHeight", &UText3DComponent::execSetMaxHeight },
			{ "SetMaxWidth", &UText3DComponent::execSetMaxWidth },
			{ "SetOutline", &UText3DComponent::execSetOutline },
			{ "SetOutlineExpand", &UText3DComponent::execSetOutlineExpand },
			{ "SetScaleProportionally", &UText3DComponent::execSetScaleProportionally },
			{ "SetText", &UText3DComponent::execSetText },
			{ "SetVerticalAlignment", &UText3DComponent::execSetVerticalAlignment },
			{ "SetWordSpacing", &UText3DComponent::execSetWordSpacing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UText3DComponent_GetBounds_Statics
	{
		struct Text3DComponent_eventGetBounds_Parms
		{
			FVector Origin;
			FVector BoxExtent;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetBounds_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::NewProp_BoxExtent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::Text3DComponent_eventGetBounds_Parms), Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics
	{
		struct Text3DComponent_eventGetGlyphCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetGlyphCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Gets the number of font glyphs that are currently used */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Gets the number of font glyphs that are currently used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "GetGlyphCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::Text3DComponent_eventGetGlyphCount_Parms), Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_GetGlyphCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_GetGlyphCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics
	{
		struct Text3DComponent_eventGetGlyphKerningComponent_Parms
		{
			int32 Index;
			USceneComponent* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetGlyphKerningComponent_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetGlyphKerningComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Gets the USceneComponent that a glyph is attached to */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Gets the USceneComponent that a glyph is attached to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "GetGlyphKerningComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::Text3DComponent_eventGetGlyphKerningComponent_Parms), Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics
	{
		struct Text3DComponent_eventGetGlyphKerningComponents_Parms
		{
			TArray<USceneComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetGlyphKerningComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Gets all the glyph kerning components */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Gets all the glyph kerning components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "GetGlyphKerningComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::Text3DComponent_eventGetGlyphKerningComponents_Parms), Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics
	{
		struct Text3DComponent_eventGetGlyphMeshComponent_Parms
		{
			int32 Index;
			UStaticMeshComponent* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetGlyphMeshComponent_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetGlyphMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Gets the StaticMeshComponent of a glyph */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Gets the StaticMeshComponent of a glyph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "GetGlyphMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::Text3DComponent_eventGetGlyphMeshComponent_Parms), Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics
	{
		struct Text3DComponent_eventGetGlyphMeshComponents_Parms
		{
			TArray<UStaticMeshComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetGlyphMeshComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Gets all the glyph meshes*/" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Gets all the glyph meshes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "GetGlyphMeshComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::Text3DComponent_eventGetGlyphMeshComponents_Parms), Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics
	{
		struct Text3DComponent_eventGetTextScale_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventGetTextScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Gets the scale of actual text geometry, taking into account MaxWidth and MaxHeight constraints. This function will NOT return the component scale*/" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Gets the scale of actual text geometry, taking into account MaxWidth and MaxHeight constraints. This function will NOT return the component scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "GetTextScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::Text3DComponent_eventGetTextScale_Parms), Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_GetTextScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_GetTextScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics
	{
		struct Text3DComponent_eventSetBackMaterial_Parms
		{
			UMaterialInterface* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetBackMaterial_Parms, Value), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the text back material */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the text back material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetBackMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::Text3DComponent_eventSetBackMaterial_Parms), Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetBackMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetBackMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetBevel_Statics
	{
		struct Text3DComponent_eventSetBevel_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetBevel_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the 3d bevel value */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the 3d bevel value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetBevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::Text3DComponent_eventSetBevel_Parms), Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetBevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetBevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics
	{
		struct Text3DComponent_eventSetBevelMaterial_Parms
		{
			UMaterialInterface* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetBevelMaterial_Parms, Value), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the text bevel material */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the text bevel material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetBevelMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::Text3DComponent_eventSetBevelMaterial_Parms), Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetBevelMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetBevelMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics
	{
		struct Text3DComponent_eventSetBevelSegments_Parms
		{
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetBevelSegments_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the amount of segments that will be used to tesselate the Bevel */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the amount of segments that will be used to tesselate the Bevel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetBevelSegments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::Text3DComponent_eventSetBevelSegments_Parms), Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetBevelSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetBevelSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics
	{
		struct Text3DComponent_eventSetBevelType_Parms
		{
			EText3DBevelType Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetBevelType_Parms, Value), Z_Construct_UEnum_Text3D_EText3DBevelType, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::NewProp_Value_MetaData)) }; // 1380692899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::NewProp_Value_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the 3d bevel type */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the 3d bevel type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetBevelType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::Text3DComponent_eventSetBevelType_Parms), Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetBevelType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetBevelType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics
	{
		struct Text3DComponent_eventSetCastShadow_Parms
		{
			bool NewCastShadow;
		};
		static void NewProp_NewCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCastShadow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::NewProp_NewCastShadow_SetBit(void* Obj)
	{
		((Text3DComponent_eventSetCastShadow_Parms*)Obj)->NewCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::NewProp_NewCastShadow = { "NewCastShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DComponent_eventSetCastShadow_Parms), &Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::NewProp_NewCastShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::NewProp_NewCastShadow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Changes the value of CastShadow. */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Changes the value of CastShadow." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetCastShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::Text3DComponent_eventSetCastShadow_Parms), Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetCastShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetCastShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics
	{
		struct Text3DComponent_eventSetExtrude_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetExtrude_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the text extrusion size and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the text extrusion size and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetExtrude", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::Text3DComponent_eventSetExtrude_Parms), Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetExtrude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetExtrude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics
	{
		struct Text3DComponent_eventSetExtrudeMaterial_Parms
		{
			UMaterialInterface* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetExtrudeMaterial_Parms, Value), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the text extrude material */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the text extrude material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetExtrudeMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::Text3DComponent_eventSetExtrudeMaterial_Parms), Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetFont_Statics
	{
		struct Text3DComponent_eventSetFont_Parms
		{
			const UFont* InFont;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetFont_Statics::NewProp_InFont_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_SetFont_Statics::NewProp_InFont = { "InFont", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetFont_Parms, InFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetFont_Statics::NewProp_InFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFont_Statics::NewProp_InFont_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetFont_Statics::NewProp_InFont,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the text font and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the text font and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetFont", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetFont_Statics::Text3DComponent_eventSetFont_Parms), Z_Construct_UFunction_UText3DComponent_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics
	{
		struct Text3DComponent_eventSetFreeze_Parms
		{
			bool bFreeze;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreeze_MetaData[];
#endif
		static void NewProp_bFreeze_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreeze;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::NewProp_bFreeze_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::NewProp_bFreeze_SetBit(void* Obj)
	{
		((Text3DComponent_eventSetFreeze_Parms*)Obj)->bFreeze = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::NewProp_bFreeze = { "bFreeze", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DComponent_eventSetFreeze_Parms), &Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::NewProp_bFreeze_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::NewProp_bFreeze_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::NewProp_bFreeze_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::NewProp_bFreeze,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Freeze mesh rebuild, to avoid unnecessary mesh rebuilds when setting a few properties together */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Freeze mesh rebuild, to avoid unnecessary mesh rebuilds when setting a few properties together" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetFreeze", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::Text3DComponent_eventSetFreeze_Parms), Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetFreeze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetFreeze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics
	{
		struct Text3DComponent_eventSetFrontMaterial_Parms
		{
			UMaterialInterface* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetFrontMaterial_Parms, Value), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the text front material */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the text front material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetFrontMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::Text3DComponent_eventSetFrontMaterial_Parms), Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetFrontMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetFrontMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics
	{
		struct Text3DComponent_eventSetHasMaxHeight_Parms
		{
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((Text3DComponent_eventSetHasMaxHeight_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DComponent_eventSetHasMaxHeight_Parms), &Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Enable / Disable a Maximum Height */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Enable / Disable a Maximum Height" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetHasMaxHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::Text3DComponent_eventSetHasMaxHeight_Parms), Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics
	{
		struct Text3DComponent_eventSetHasMaxWidth_Parms
		{
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((Text3DComponent_eventSetHasMaxWidth_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DComponent_eventSetHasMaxWidth_Parms), &Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Enable / Disable a Maximum Width */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Enable / Disable a Maximum Width" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetHasMaxWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::Text3DComponent_eventSetHasMaxWidth_Parms), Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics
	{
		struct Text3DComponent_eventSetHorizontalAlignment_Parms
		{
			EText3DHorizontalTextAlignment value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_value_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::NewProp_value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetHorizontalAlignment_Parms, value), Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::NewProp_value_MetaData)) }; // 3352878627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::NewProp_value_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the horizontal alignment value and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the horizontal alignment value and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::Text3DComponent_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetKerning_Statics
	{
		struct Text3DComponent_eventSetKerning_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetKerning_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the kerning value and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the kerning value and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetKerning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::Text3DComponent_eventSetKerning_Parms), Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetKerning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetKerning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics
	{
		struct Text3DComponent_eventSetLineSpacing_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetLineSpacing_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the line spacing value and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the line spacing value and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetLineSpacing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::Text3DComponent_eventSetLineSpacing_Parms), Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetLineSpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetLineSpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics
	{
		struct Text3DComponent_eventSetMaxHeight_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetMaxHeight_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the Maximum Height - If height is larger, mesh will scale down to fit MaxHeight value */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the Maximum Height - If height is larger, mesh will scale down to fit MaxHeight value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetMaxHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::Text3DComponent_eventSetMaxHeight_Parms), Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetMaxHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetMaxHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics
	{
		struct Text3DComponent_eventSetMaxWidth_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetMaxWidth_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the Maximum Width - If width is larger, mesh will scale down to fit MaxWidth value */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the Maximum Width - If width is larger, mesh will scale down to fit MaxWidth value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetMaxWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::Text3DComponent_eventSetMaxWidth_Parms), Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetMaxWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetMaxWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetOutline_Statics
	{
		struct Text3DComponent_eventSetOutline_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((Text3DComponent_eventSetOutline_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DComponent_eventSetOutline_Parms), &Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetOutline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::Text3DComponent_eventSetOutline_Parms), Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics
	{
		struct Text3DComponent_eventSetOutlineExpand_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetOutlineExpand_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetOutlineExpand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::Text3DComponent_eventSetOutlineExpand_Parms), Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetOutlineExpand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetOutlineExpand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics
	{
		struct Text3DComponent_eventSetScaleProportionally_Parms
		{
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((Text3DComponent_eventSetScaleProportionally_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DComponent_eventSetScaleProportionally_Parms), &Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set if the mesh should scale proportionally when Max Width/Height is set */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set if the mesh should scale proportionally when Max Width/Height is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetScaleProportionally", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::Text3DComponent_eventSetScaleProportionally_Parms), Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetScaleProportionally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetScaleProportionally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetText_Statics
	{
		struct Text3DComponent_eventSetText_Parms
		{
			FText Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UText3DComponent_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetText_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetText_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the text value and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the text value and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetText_Statics::Text3DComponent_eventSetText_Parms), Z_Construct_UFunction_UText3DComponent_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics
	{
		struct Text3DComponent_eventSetVerticalAlignment_Parms
		{
			EText3DVerticalTextAlignment value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_value_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::NewProp_value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetVerticalAlignment_Parms, value), Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::NewProp_value_MetaData)) }; // 2797262463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::NewProp_value_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the vertical alignment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the vertical alignment and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::Text3DComponent_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics
	{
		struct Text3DComponent_eventSetWordSpacing_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DComponent_eventSetWordSpacing_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Text3D" },
		{ "Comment", "/** Set the word spacing value and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Set the word spacing value and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DComponent, nullptr, "SetWordSpacing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::Text3DComponent_eventSetWordSpacing_Parms), Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DComponent_SetWordSpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DComponent_SetWordSpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UText3DComponent);
	UClass* Z_Construct_UClass_UText3DComponent_NoRegister()
	{
		return UText3DComponent::StaticClass();
	}
	struct Z_Construct_UClass_UText3DComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extrude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Extrude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BevelType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BevelType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BevelSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutline_MetaData[];
#endif
		static void NewProp_bOutline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineExpand_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineExpand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FrontMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BevelMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExtrudeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Font;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HorizontalAlignment;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Kerning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WordSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WordSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaxWidth_MetaData[];
#endif
		static void NewProp_bHasMaxWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaxHeight_MetaData[];
#endif
		static void NewProp_bHasMaxHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleProportionally_MetaData[];
#endif
		static void NewProp_bScaleProportionally_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleProportionally;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextGeneratedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TextGeneratedDelegate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterKernings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterKernings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterKernings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UText3DComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Text3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UText3DComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UText3DComponent_GetBounds, "GetBounds" }, // 3342017991
		{ &Z_Construct_UFunction_UText3DComponent_GetGlyphCount, "GetGlyphCount" }, // 41502480
		{ &Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponent, "GetGlyphKerningComponent" }, // 872612746
		{ &Z_Construct_UFunction_UText3DComponent_GetGlyphKerningComponents, "GetGlyphKerningComponents" }, // 161963540
		{ &Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponent, "GetGlyphMeshComponent" }, // 2407570108
		{ &Z_Construct_UFunction_UText3DComponent_GetGlyphMeshComponents, "GetGlyphMeshComponents" }, // 2542354595
		{ &Z_Construct_UFunction_UText3DComponent_GetTextScale, "GetTextScale" }, // 585203000
		{ &Z_Construct_UFunction_UText3DComponent_SetBackMaterial, "SetBackMaterial" }, // 3827124276
		{ &Z_Construct_UFunction_UText3DComponent_SetBevel, "SetBevel" }, // 858805478
		{ &Z_Construct_UFunction_UText3DComponent_SetBevelMaterial, "SetBevelMaterial" }, // 292516023
		{ &Z_Construct_UFunction_UText3DComponent_SetBevelSegments, "SetBevelSegments" }, // 1962642345
		{ &Z_Construct_UFunction_UText3DComponent_SetBevelType, "SetBevelType" }, // 111489875
		{ &Z_Construct_UFunction_UText3DComponent_SetCastShadow, "SetCastShadow" }, // 852236892
		{ &Z_Construct_UFunction_UText3DComponent_SetExtrude, "SetExtrude" }, // 2817025534
		{ &Z_Construct_UFunction_UText3DComponent_SetExtrudeMaterial, "SetExtrudeMaterial" }, // 3872408597
		{ &Z_Construct_UFunction_UText3DComponent_SetFont, "SetFont" }, // 1228114197
		{ &Z_Construct_UFunction_UText3DComponent_SetFreeze, "SetFreeze" }, // 75988224
		{ &Z_Construct_UFunction_UText3DComponent_SetFrontMaterial, "SetFrontMaterial" }, // 2120276436
		{ &Z_Construct_UFunction_UText3DComponent_SetHasMaxHeight, "SetHasMaxHeight" }, // 2014392998
		{ &Z_Construct_UFunction_UText3DComponent_SetHasMaxWidth, "SetHasMaxWidth" }, // 1921546398
		{ &Z_Construct_UFunction_UText3DComponent_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3887843696
		{ &Z_Construct_UFunction_UText3DComponent_SetKerning, "SetKerning" }, // 1327041053
		{ &Z_Construct_UFunction_UText3DComponent_SetLineSpacing, "SetLineSpacing" }, // 785130672
		{ &Z_Construct_UFunction_UText3DComponent_SetMaxHeight, "SetMaxHeight" }, // 2843911709
		{ &Z_Construct_UFunction_UText3DComponent_SetMaxWidth, "SetMaxWidth" }, // 914843528
		{ &Z_Construct_UFunction_UText3DComponent_SetOutline, "SetOutline" }, // 634772764
		{ &Z_Construct_UFunction_UText3DComponent_SetOutlineExpand, "SetOutlineExpand" }, // 282871681
		{ &Z_Construct_UFunction_UText3DComponent_SetScaleProportionally, "SetScaleProportionally" }, // 1738310470
		{ &Z_Construct_UFunction_UText3DComponent_SetText, "SetText" }, // 467806980
		{ &Z_Construct_UFunction_UText3DComponent_SetVerticalAlignment, "SetVerticalAlignment" }, // 3440943241
		{ &Z_Construct_UFunction_UText3DComponent_SetWordSpacing, "SetWordSpacing" }, // 1945887211
		{ &Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature, "TextGenerated__DelegateSignature" }, // 56387816
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Text3D" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Text3DComponent.h" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_Text_MetaData[] = {
		{ "BlueprintSetter", "SetText" },
		{ "Category", "Text3D" },
		{ "Comment", "/** The text to generate a 3d mesh */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The text to generate a 3d mesh" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, Text), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_Extrude_MetaData[] = {
		{ "BlueprintSetter", "SetExtrude" },
		{ "Category", "Text3D" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Size of the extrude */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Size of the extrude" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_Extrude = { "Extrude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, Extrude), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Extrude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Extrude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_Bevel_MetaData[] = {
		{ "BlueprintSetter", "SetBevel" },
		{ "Category", "Text3D" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Size of bevel */" },
		{ "EditCondition", "!bOutline" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Size of bevel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_Bevel = { "Bevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, Bevel), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Bevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Bevel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelType_MetaData[] = {
		{ "BlueprintSetter", "SetBevelType" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Bevel Type */" },
		{ "EditCondition", "!bOutline" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Bevel Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelType = { "BevelType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, BevelType), Z_Construct_UEnum_Text3D_EText3DBevelType, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelType_MetaData)) }; // 1380692899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelSegments_MetaData[] = {
		{ "BlueprintSetter", "SetBevelSegments" },
		{ "Category", "Text3D" },
		{ "ClampMax", "15" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Bevel Segments (Defines the amount of tesselation for the bevel part) */" },
		{ "EditCondition", "!bOutline" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Bevel Segments (Defines the amount of tesselation for the bevel part)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelSegments = { "BevelSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, BevelSegments), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_bOutline_MetaData[] = {
		{ "BlueprintSetter", "SetOutline" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Generate Outline */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Generate Outline" },
	};
#endif
	void Z_Construct_UClass_UText3DComponent_Statics::NewProp_bOutline_SetBit(void* Obj)
	{
		((UText3DComponent*)Obj)->bOutline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_bOutline = { "bOutline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DComponent), &Z_Construct_UClass_UText3DComponent_Statics::NewProp_bOutline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bOutline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_OutlineExpand_MetaData[] = {
		{ "BlueprintSetter", "SetOutlineExpand" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Outline expand/offset amount */" },
		{ "EditCondition", "bOutline" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Outline expand/offset amount" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_OutlineExpand = { "OutlineExpand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, OutlineExpand), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_OutlineExpand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_OutlineExpand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_FrontMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetFrontMaterial" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Material for the front part */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Material for the front part" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_FrontMaterial = { "FrontMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, FrontMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_FrontMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_FrontMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetBevelMaterial" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Material for the bevel part */" },
		{ "EditCondition", "!bOutline" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Material for the bevel part" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelMaterial = { "BevelMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, BevelMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_ExtrudeMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetExtrudeMaterial" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Material for the extruded part */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Material for the extruded part" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_ExtrudeMaterial = { "ExtrudeMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, ExtrudeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_ExtrudeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_ExtrudeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_BackMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetBackMaterial" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Material for the back part */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Material for the back part" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_BackMaterial = { "BackMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, BackMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BackMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_BackMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_Font_MetaData[] = {
		{ "BlueprintSetter", "SetFont" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Text font */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Text font" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Font_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Horizontal text alignment */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Horizontal text alignment" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, HorizontalAlignment), Z_Construct_UEnum_Text3D_EText3DHorizontalTextAlignment, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 3352878627
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Vertical text alignment */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Vertical text alignment" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, VerticalAlignment), Z_Construct_UEnum_Text3D_EText3DVerticalTextAlignment, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_VerticalAlignment_MetaData)) }; // 2797262463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_Kerning_MetaData[] = {
		{ "BlueprintSetter", "SetKerning" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Text kerning */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Text kerning" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, Kerning), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Kerning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_Kerning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_LineSpacing_MetaData[] = {
		{ "BlueprintSetter", "SetLineSpacing" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Extra line spacing */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Extra line spacing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_LineSpacing = { "LineSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, LineSpacing), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_LineSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_LineSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_WordSpacing_MetaData[] = {
		{ "BlueprintSetter", "SetWordSpacing" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Extra word spacing */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Extra word spacing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_WordSpacing = { "WordSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, WordSpacing), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_WordSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_WordSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxWidth_MetaData[] = {
		{ "BlueprintSetter", "SetHasMaxWidth" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Enables a maximum width to the 3D Text */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Enables a maximum width to the 3D Text" },
	};
#endif
	void Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxWidth_SetBit(void* Obj)
	{
		((UText3DComponent*)Obj)->bHasMaxWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxWidth = { "bHasMaxWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DComponent), &Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxWidth_MetaData[] = {
		{ "BlueprintSetter", "SetMaxWidth" },
		{ "Category", "Text3D" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets a maximum width to the 3D Text */" },
		{ "EditCondition", "bHasMaxWidth" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Sets a maximum width to the 3D Text" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, MaxWidth), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxHeight_MetaData[] = {
		{ "BlueprintSetter", "SetHasMaxHeight" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Enables a maximum height to the 3D Text */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Enables a maximum height to the 3D Text" },
	};
#endif
	void Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxHeight_SetBit(void* Obj)
	{
		((UText3DComponent*)Obj)->bHasMaxHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxHeight = { "bHasMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DComponent), &Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "BlueprintSetter", "SetMaxHeight" },
		{ "Category", "Text3D" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets a maximum height to the 3D Text */" },
		{ "EditCondition", "bHasMaxHeight" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Sets a maximum height to the 3D Text" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_bScaleProportionally_MetaData[] = {
		{ "BlueprintSetter", "SetScaleProportionally" },
		{ "Category", "Text3D" },
		{ "Comment", "/** Should the mesh scale proportionally when Max Width/Height is set */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Should the mesh scale proportionally when Max Width/Height is set" },
	};
#endif
	void Z_Construct_UClass_UText3DComponent_Statics::NewProp_bScaleProportionally_SetBit(void* Obj)
	{
		((UText3DComponent*)Obj)->bScaleProportionally = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_bScaleProportionally = { "bScaleProportionally", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DComponent), &Z_Construct_UClass_UText3DComponent_Statics::NewProp_bScaleProportionally_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bScaleProportionally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bScaleProportionally_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "BlueprintSetter", "SetCastShadow" },
		{ "Category", "Lighting" },
		{ "Comment", "/** Controls whether the text glyphs should cast a shadow or not. */" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
		{ "ToolTip", "Controls whether the text glyphs should cast a shadow or not." },
	};
#endif
	void Z_Construct_UClass_UText3DComponent_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((UText3DComponent*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DComponent), &Z_Construct_UClass_UText3DComponent_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextRoot = { "TextRoot", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, TextRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextGeneratedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "DisplayName", "On Text Generated" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextGeneratedDelegate = { "TextGeneratedDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, TextGeneratedDelegate), Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextGeneratedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextGeneratedDelegate_MetaData)) }; // 56387816
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterKernings_Inner = { "CharacterKernings", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterKernings_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterKernings = { "CharacterKernings", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, CharacterKernings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterKernings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterKernings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterMeshes_Inner = { "CharacterMeshes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text3DComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterMeshes = { "CharacterMeshes", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DComponent, CharacterMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterMeshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UText3DComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_Extrude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_Bevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_bOutline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_OutlineExpand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_FrontMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_BevelMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_ExtrudeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_BackMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_VerticalAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_Kerning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_LineSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_WordSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_bHasMaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_bScaleProportionally,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_TextGeneratedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterKernings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterKernings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DComponent_Statics::NewProp_CharacterMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UText3DComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UText3DComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UText3DComponent_Statics::ClassParams = {
		&UText3DComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UText3DComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UText3DComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UText3DComponent()
	{
		if (!Z_Registration_Info_UClass_UText3DComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UText3DComponent.OuterSingleton, Z_Construct_UClass_UText3DComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UText3DComponent.OuterSingleton;
	}
	template<> TEXT3D_API UClass* StaticClass<UText3DComponent>()
	{
		return UText3DComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UText3DComponent);
	UText3DComponent::~UText3DComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_Statics::EnumInfo[] = {
		{ EText3DVerticalTextAlignment_StaticEnum, TEXT("EText3DVerticalTextAlignment"), &Z_Registration_Info_UEnum_EText3DVerticalTextAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2797262463U) },
		{ EText3DHorizontalTextAlignment_StaticEnum, TEXT("EText3DHorizontalTextAlignment"), &Z_Registration_Info_UEnum_EText3DHorizontalTextAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3352878627U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UText3DComponent, UText3DComponent::StaticClass, TEXT("UText3DComponent"), &Z_Registration_Info_UClass_UText3DComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UText3DComponent), 2604728882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_2137570073(TEXT("/Script/Text3D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
