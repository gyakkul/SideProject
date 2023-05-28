// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/GeometryFramework/Public/Components/BaseDynamicMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDynamicMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode();
	GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode;
	static UEnum* EDynamicMeshComponentTangentsMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshComponentTangentsMode"));
		}
		return Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentTangentsMode>()
	{
		return EDynamicMeshComponentTangentsMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enumerators[] = {
		{ "EDynamicMeshComponentTangentsMode::NoTangents", (int64)EDynamicMeshComponentTangentsMode::NoTangents },
		{ "EDynamicMeshComponentTangentsMode::AutoCalculated", (int64)EDynamicMeshComponentTangentsMode::AutoCalculated },
		{ "EDynamicMeshComponentTangentsMode::ExternallyProvided", (int64)EDynamicMeshComponentTangentsMode::ExternallyProvided },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enum_MetaDataParams[] = {
		{ "AutoCalculated.Comment", "/** Tangents will be automatically calculated on demand. Note that mesh changes due to tangents calculation will *not* be broadcast via MeshChange events! */" },
		{ "AutoCalculated.Name", "EDynamicMeshComponentTangentsMode::AutoCalculated" },
		{ "AutoCalculated.ToolTip", "Tangents will be automatically calculated on demand. Note that mesh changes due to tangents calculation will *not* be broadcast via MeshChange events!" },
		{ "Comment", "/**\n * Tangent calculation modes\n */" },
		{ "ExternallyProvided.Comment", "/** Tangents are externally provided via the FDynamicMesh3 AttributeSet */" },
		{ "ExternallyProvided.Name", "EDynamicMeshComponentTangentsMode::ExternallyProvided" },
		{ "ExternallyProvided.ToolTip", "Tangents are externally provided via the FDynamicMesh3 AttributeSet" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "NoTangents.Comment", "/** Tangents are not used/available, proceed accordingly (eg generate arbitrary orthogonal basis) */" },
		{ "NoTangents.Name", "EDynamicMeshComponentTangentsMode::NoTangents" },
		{ "NoTangents.ToolTip", "Tangents are not used/available, proceed accordingly (eg generate arbitrary orthogonal basis)" },
		{ "ToolTip", "Tangent calculation modes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
		nullptr,
		"EDynamicMeshComponentTangentsMode",
		"EDynamicMeshComponentTangentsMode",
		Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode;
	static UEnum* EDynamicMeshComponentColorOverrideMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshComponentColorOverrideMode"));
		}
		return Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentColorOverrideMode>()
	{
		return EDynamicMeshComponentColorOverrideMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enumerators[] = {
		{ "EDynamicMeshComponentColorOverrideMode::None", (int64)EDynamicMeshComponentColorOverrideMode::None },
		{ "EDynamicMeshComponentColorOverrideMode::VertexColors", (int64)EDynamicMeshComponentColorOverrideMode::VertexColors },
		{ "EDynamicMeshComponentColorOverrideMode::Polygroups", (int64)EDynamicMeshComponentColorOverrideMode::Polygroups },
		{ "EDynamicMeshComponentColorOverrideMode::Constant", (int64)EDynamicMeshComponentColorOverrideMode::Constant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Color Override Modes\n */" },
		{ "Constant.Comment", "/** Constant Color is displayed */" },
		{ "Constant.Name", "EDynamicMeshComponentColorOverrideMode::Constant" },
		{ "Constant.ToolTip", "Constant Color is displayed" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "None.Comment", "/** No Color Override enabled */" },
		{ "None.Name", "EDynamicMeshComponentColorOverrideMode::None" },
		{ "None.ToolTip", "No Color Override enabled" },
		{ "Polygroups.Comment", "/** Polygroup Colors are displayed */" },
		{ "Polygroups.Name", "EDynamicMeshComponentColorOverrideMode::Polygroups" },
		{ "Polygroups.ToolTip", "Polygroup Colors are displayed" },
		{ "ToolTip", "Color Override Modes" },
		{ "VertexColors.Comment", "/** Vertex Colors are displayed */" },
		{ "VertexColors.Name", "EDynamicMeshComponentColorOverrideMode::VertexColors" },
		{ "VertexColors.ToolTip", "Vertex Colors are displayed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
		nullptr,
		"EDynamicMeshComponentColorOverrideMode",
		"EDynamicMeshComponentColorOverrideMode",
		Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetEnableRaytracing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableRaytracing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetEnableRaytracing)
	{
		P_GET_UBOOL(Z_Param_bSetEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableRaytracing(Z_Param_bSetEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetSecondaryBuffersVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSecondaryBuffersVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetSecondaryBuffersVisibility)
	{
		P_GET_UBOOL(Z_Param_bSetVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSecondaryBuffersVisibility(Z_Param_bSetVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetSecondaryRenderMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetSecondaryRenderMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execClearSecondaryRenderMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSecondaryRenderMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetSecondaryRenderMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSecondaryRenderMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetOverrideRenderMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetOverrideRenderMaterial(Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execHasOverrideRenderMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_k);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOverrideRenderMaterial(Z_Param_k);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execClearOverrideRenderMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOverrideRenderMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetOverrideRenderMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideRenderMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetViewModeOverridesEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetViewModeOverridesEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetViewModeOverridesEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewModeOverridesEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetShadowsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShadowsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetShadowsEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowsEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetFlatShadingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFlatShadingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetEnableFlatShading)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableFlatShading(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetConstantOverrideColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetConstantOverrideColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetConstantOverrideColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstantOverrideColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetColorOverrideMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDynamicMeshComponentColorOverrideMode*)Z_Param__Result=P_THIS->GetColorOverrideMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetColorOverrideMode)
	{
		P_GET_ENUM(EDynamicMeshComponentColorOverrideMode,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode(Z_Param_NewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetEnableWireframeRenderPass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableWireframeRenderPass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetEnableWireframeRenderPass)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableWireframeRenderPass(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetDynamicMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=P_THIS->GetDynamicMesh();
		P_NATIVE_END;
	}
	void UBaseDynamicMeshComponent::StaticRegisterNativesUBaseDynamicMeshComponent()
	{
		UClass* Class = UBaseDynamicMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearOverrideRenderMaterial", &UBaseDynamicMeshComponent::execClearOverrideRenderMaterial },
			{ "ClearSecondaryRenderMaterial", &UBaseDynamicMeshComponent::execClearSecondaryRenderMaterial },
			{ "GetColorOverrideMode", &UBaseDynamicMeshComponent::execGetColorOverrideMode },
			{ "GetConstantOverrideColor", &UBaseDynamicMeshComponent::execGetConstantOverrideColor },
			{ "GetDynamicMesh", &UBaseDynamicMeshComponent::execGetDynamicMesh },
			{ "GetEnableRaytracing", &UBaseDynamicMeshComponent::execGetEnableRaytracing },
			{ "GetEnableWireframeRenderPass", &UBaseDynamicMeshComponent::execGetEnableWireframeRenderPass },
			{ "GetFlatShadingEnabled", &UBaseDynamicMeshComponent::execGetFlatShadingEnabled },
			{ "GetOverrideRenderMaterial", &UBaseDynamicMeshComponent::execGetOverrideRenderMaterial },
			{ "GetSecondaryBuffersVisibility", &UBaseDynamicMeshComponent::execGetSecondaryBuffersVisibility },
			{ "GetSecondaryRenderMaterial", &UBaseDynamicMeshComponent::execGetSecondaryRenderMaterial },
			{ "GetShadowsEnabled", &UBaseDynamicMeshComponent::execGetShadowsEnabled },
			{ "GetViewModeOverridesEnabled", &UBaseDynamicMeshComponent::execGetViewModeOverridesEnabled },
			{ "HasOverrideRenderMaterial", &UBaseDynamicMeshComponent::execHasOverrideRenderMaterial },
			{ "SetColorOverrideMode", &UBaseDynamicMeshComponent::execSetColorOverrideMode },
			{ "SetConstantOverrideColor", &UBaseDynamicMeshComponent::execSetConstantOverrideColor },
			{ "SetEnableFlatShading", &UBaseDynamicMeshComponent::execSetEnableFlatShading },
			{ "SetEnableRaytracing", &UBaseDynamicMeshComponent::execSetEnableRaytracing },
			{ "SetEnableWireframeRenderPass", &UBaseDynamicMeshComponent::execSetEnableWireframeRenderPass },
			{ "SetOverrideRenderMaterial", &UBaseDynamicMeshComponent::execSetOverrideRenderMaterial },
			{ "SetSecondaryBuffersVisibility", &UBaseDynamicMeshComponent::execSetSecondaryBuffersVisibility },
			{ "SetSecondaryRenderMaterial", &UBaseDynamicMeshComponent::execSetSecondaryRenderMaterial },
			{ "SetShadowsEnabled", &UBaseDynamicMeshComponent::execSetShadowsEnabled },
			{ "SetViewModeOverridesEnabled", &UBaseDynamicMeshComponent::execSetViewModeOverridesEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Clear any active override render material\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Clear any active override render material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "ClearOverrideRenderMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Clear any active secondary render material\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Clear any active secondary render material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "ClearSecondaryRenderMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics
	{
		struct BaseDynamicMeshComponent_eventGetColorOverrideMode_Parms
		{
			EDynamicMeshComponentColorOverrideMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetColorOverrideMode_Parms, ReturnValue), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, METADATA_PARAMS(nullptr, 0) }; // 106237050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * @return active Color Override mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active Color Override mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetColorOverrideMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::BaseDynamicMeshComponent_eventGetColorOverrideMode_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics
	{
		struct BaseDynamicMeshComponent_eventGetConstantOverrideColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetConstantOverrideColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * @return active Color used for Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active Color used for Constant Color Override Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetConstantOverrideColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::BaseDynamicMeshComponent_eventGetConstantOverrideColor_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics
	{
		struct BaseDynamicMeshComponent_eventGetDynamicMesh_Parms
		{
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return the child UDynamicMesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return the child UDynamicMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetDynamicMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::BaseDynamicMeshComponent_eventGetDynamicMesh_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics
	{
		struct BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if raytracing support is currently enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if raytracing support is currently enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetEnableRaytracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics
	{
		struct BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if wireframe rendering pass is enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if wireframe rendering pass is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetEnableWireframeRenderPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics
	{
		struct BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * @return active Color used for Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active Color used for Constant Color Override Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetFlatShadingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics
	{
		struct BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return active override render material for the given MaterialIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active override render material for the given MaterialIndex" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetOverrideRenderMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics
	{
		struct BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if secondary buffers are currently set to be visible\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if secondary buffers are currently set to be visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetSecondaryBuffersVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics
	{
		struct BaseDynamicMeshComponent_eventGetSecondaryRenderMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetSecondaryRenderMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return active secondary render material\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active secondary render material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetSecondaryRenderMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::BaseDynamicMeshComponent_eventGetSecondaryRenderMaterial_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics
	{
		struct BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetShadowsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics
	{
		struct BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetViewModeOverridesEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics
	{
		struct BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms
		{
			int32 k;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_k;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms, k), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_k,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if an override render material is currently enabled for the given MaterialIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if an override render material is currently enabled for the given MaterialIndex" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "HasOverrideRenderMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics
	{
		struct BaseDynamicMeshComponent_eventSetColorOverrideMode_Parms
		{
			EDynamicMeshComponentColorOverrideMode NewMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetColorOverrideMode_Parms, NewMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, METADATA_PARAMS(nullptr, 0) }; // 106237050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Configure the active Color Override\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure the active Color Override" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetColorOverrideMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::BaseDynamicMeshComponent_eventSetColorOverrideMode_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics
	{
		struct BaseDynamicMeshComponent_eventSetConstantOverrideColor_Parms
		{
			FColor NewColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetConstantOverrideColor_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Configure the Color used with Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure the Color used with Constant Color Override Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetConstantOverrideColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::BaseDynamicMeshComponent_eventSetConstantOverrideColor_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics
	{
		struct BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Configure the Color used with Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure the Color used with Constant Color Override Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetEnableFlatShading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics
	{
		struct BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms
		{
			bool bSetEnabled;
		};
		static void NewProp_bSetEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms*)Obj)->bSetEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled = { "bSetEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Enable/Disable raytracing support. This is an expensive call as it flushes\n\x09 * the rendering queue and forces an immediate rebuild of the SceneProxy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Enable/Disable raytracing support. This is an expensive call as it flushes\nthe rendering queue and forces an immediate rebuild of the SceneProxy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetEnableRaytracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics
	{
		struct BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Configure whether wireframe rendering is enabled or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure whether wireframe rendering is enabled or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetEnableWireframeRenderPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics
	{
		struct BaseDynamicMeshComponent_eventSetOverrideRenderMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetOverrideRenderMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set an active override render material. This should replace all materials during rendering.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Set an active override render material. This should replace all materials during rendering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetOverrideRenderMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventSetOverrideRenderMaterial_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics
	{
		struct BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms
		{
			bool bSetVisible;
		};
		static void NewProp_bSetVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms*)Obj)->bSetVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible = { "bSetVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Show/Hide the secondary triangle buffers. Does not invalidate SceneProxy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Show/Hide the secondary triangle buffers. Does not invalidate SceneProxy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetSecondaryBuffersVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics
	{
		struct BaseDynamicMeshComponent_eventSetSecondaryRenderMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetSecondaryRenderMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set an active secondary render material. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Set an active secondary render material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetSecondaryRenderMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::BaseDynamicMeshComponent_eventSetSecondaryRenderMaterial_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics
	{
		struct BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetShadowsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics
	{
		struct BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetViewModeOverridesEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseDynamicMeshComponent);
	UClass* Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister()
	{
		return UBaseDynamicMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseDynamicMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitShowWireframe_MetaData[];
#endif
		static void NewProp_bExplicitShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitShowWireframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFlatShading_MetaData[];
#endif
		static void NewProp_bEnableFlatShading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFlatShading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewModeOverrides_MetaData[];
#endif
		static void NewProp_bEnableViewModeOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewModeOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideRenderMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRenderMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SecondaryRenderMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRaytracing_MetaData[];
#endif
		static void NewProp_bEnableRaytracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRaytracing;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial, "ClearOverrideRenderMaterial" }, // 2752213952
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial, "ClearSecondaryRenderMaterial" }, // 3669769246
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode, "GetColorOverrideMode" }, // 438360487
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor, "GetConstantOverrideColor" }, // 968420765
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh, "GetDynamicMesh" }, // 1894973469
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing, "GetEnableRaytracing" }, // 2528021448
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass, "GetEnableWireframeRenderPass" }, // 1122498464
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled, "GetFlatShadingEnabled" }, // 2058495829
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial, "GetOverrideRenderMaterial" }, // 1822432673
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility, "GetSecondaryBuffersVisibility" }, // 1185216380
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial, "GetSecondaryRenderMaterial" }, // 3347544305
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled, "GetShadowsEnabled" }, // 507688639
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled, "GetViewModeOverridesEnabled" }, // 524333269
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial, "HasOverrideRenderMaterial" }, // 2518616296
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode, "SetColorOverrideMode" }, // 3563802951
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor, "SetConstantOverrideColor" }, // 3224131152
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading, "SetEnableFlatShading" }, // 527629897
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing, "SetEnableRaytracing" }, // 2510693296
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass, "SetEnableWireframeRenderPass" }, // 1361134877
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial, "SetOverrideRenderMaterial" }, // 3066025968
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility, "SetSecondaryBuffersVisibility" }, // 604273358
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial, "SetSecondaryRenderMaterial" }, // 531634633
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled, "SetShadowsEnabled" }, // 3461251634
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled, "SetViewModeOverridesEnabled" }, // 3770503452
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * UBaseDynamicMeshComponent is a base interface for a UMeshComponent based on a UDynamicMesh.\n */" },
		{ "HideCategories", "LOD Mobility Trigger" },
		{ "IncludePath", "Components/BaseDynamicMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "UBaseDynamicMeshComponent is a base interface for a UMeshComponent based on a UDynamicMesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * If true, render the Wireframe on top of the Shaded Mesh\n\x09 */" },
		{ "DisplayName", "Wireframe Overlay" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "If true, render the Wireframe on top of the Shaded Mesh" },
	};
#endif
	void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_SetBit(void* Obj)
	{
		((UBaseDynamicMeshComponent*)Obj)->bExplicitShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe = { "bExplicitShowWireframe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_WireframeColor_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Constant Color used when Override Color Mode is set to Constant\n\x09 */" },
		{ "DisplayName", "Wireframe Color" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Constant Color used when Override Color Mode is set to Constant" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseDynamicMeshComponent, WireframeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_WireframeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_WireframeColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "DisplayName", "Color Override" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode = { "ColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseDynamicMeshComponent, ColorMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode_MetaData)) }; // 106237050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ConstantColor_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Constant Color used when Override Color Mode is set to Constant\n\x09 */" },
		{ "DisplayName", "Constant Color" },
		{ "EditCondition", "ColorMode==EDynamicMeshComponentColorOverrideMode::Constant" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Constant Color used when Override Color Mode is set to Constant" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ConstantColor = { "ConstantColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseDynamicMeshComponent, ConstantColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ConstantColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ConstantColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Enable use of per-triangle facet normals in place of mesh normals\n\x09 */" },
		{ "DisplayName", "Flat Shading" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Enable use of per-triangle facet normals in place of mesh normals" },
	};
#endif
	void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_SetBit(void* Obj)
	{
		((UBaseDynamicMeshComponent*)Obj)->bEnableFlatShading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading = { "bEnableFlatShading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/** \n\x09 * This flag controls whether Editor View Mode Overrides are enabled for this mesh. For example, this controls hidden-line removal on the wireframe \n\x09 * in Wireframe View Mode, and whether the normal map will be disabled in Lighting-Only View Mode, as well as various other things.\n\x09 * Use SetViewModeOverridesEnabled() to control this setting in Blueprints/C++.\n\x09 */" },
		{ "DisplayName", "View Mode Overrides" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "This flag controls whether Editor View Mode Overrides are enabled for this mesh. For example, this controls hidden-line removal on the wireframe\nin Wireframe View Mode, and whether the normal map will be disabled in Lighting-Only View Mode, as well as various other things.\nUse SetViewModeOverridesEnabled() to control this setting in Blueprints/C++." },
	};
#endif
	void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_SetBit(void* Obj)
	{
		((UBaseDynamicMeshComponent*)Obj)->bEnableViewModeOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides = { "bEnableViewModeOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_OverrideRenderMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_OverrideRenderMaterial = { "OverrideRenderMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseDynamicMeshComponent, OverrideRenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_OverrideRenderMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_OverrideRenderMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_SecondaryRenderMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_SecondaryRenderMaterial = { "SecondaryRenderMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseDynamicMeshComponent, SecondaryRenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_SecondaryRenderMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_SecondaryRenderMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Enable/disable Raytracing support on this Mesh, if Raytracing is currently enabled in the Project Settings.\n\x09 * Use SetEnableRaytracing() to configure this flag in Blueprints/C++.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Enable/disable Raytracing support on this Mesh, if Raytracing is currently enabled in the Project Settings.\nUse SetEnableRaytracing() to configure this flag in Blueprints/C++." },
	};
#endif
	void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_SetBit(void* Obj)
	{
		((UBaseDynamicMeshComponent*)Obj)->bEnableRaytracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing = { "bEnableRaytracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials_Inner = { "BaseMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials = { "BaseMaterials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseDynamicMeshComponent, BaseMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_WireframeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ConstantColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_OverrideRenderMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_SecondaryRenderMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UToolFrameworkComponent_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IToolFrameworkComponent), false },  // 1654421247
			{ Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IMeshVertexCommandChangeTarget), false },  // 84206154
			{ Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IMeshCommandChangeTarget), false },  // 4016242093
			{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IMeshReplacementCommandChangeTarget), false },  // 2403131168
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseDynamicMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::ClassParams = {
		&UBaseDynamicMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseDynamicMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton, Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UBaseDynamicMeshComponent>()
	{
		return UBaseDynamicMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseDynamicMeshComponent);
	UBaseDynamicMeshComponent::~UBaseDynamicMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::EnumInfo[] = {
		{ EDynamicMeshComponentTangentsMode_StaticEnum, TEXT("EDynamicMeshComponentTangentsMode"), &Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4168816382U) },
		{ EDynamicMeshComponentColorOverrideMode_StaticEnum, TEXT("EDynamicMeshComponentColorOverrideMode"), &Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 106237050U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseDynamicMeshComponent, UBaseDynamicMeshComponent::StaticClass, TEXT("UBaseDynamicMeshComponent"), &Z_Registration_Info_UClass_UBaseDynamicMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseDynamicMeshComponent), 2327662221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_4094179107(TEXT("/Script/GeometryFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
