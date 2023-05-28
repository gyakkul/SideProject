// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceRenderTarget2D.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTarget2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceRenderTarget2D::StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRenderTarget2D);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister()
	{
		return UNiagaraDataInterfaceRenderTarget2D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipMapGeneration_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipMapGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MipMapGeneration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipMapGenerationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipMapGenerationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MipMapGenerationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderTargetFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideRenderTargetFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderTargetFilter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideRenderTargetFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritUserParameterSettings_MetaData[];
#endif
		static void NewProp_bInheritUserParameterSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritUserParameterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFormat_MetaData[];
#endif
		static void NewProp_bOverrideFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFormat;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewRenderTarget_MetaData[];
#endif
		static void NewProp_bPreviewRenderTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewRenderTarget;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ManagedRenderTargets_ValueProp;
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_ManagedRenderTargets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedRenderTargets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ManagedRenderTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Rendering" },
		{ "DisplayName", "Render Target 2D" },
		{ "IncludePath", "NiagaraDataInterfaceRenderTarget2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** Controls if and when we generate mips for the render target. */" },
		{ "DisplayPriority", "20" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "Controls if and when we generate mips for the render target." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration = { "MipMapGeneration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, MipMapGeneration), Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration_MetaData)) }; // 4040815115
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "21" },
		{ "EditCondition", "!bInheritUserParameterSettings && MipMapGeneration != ENiagaraMipMapGeneration::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType = { "MipMapGenerationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, MipMapGenerationType), Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType_MetaData)) }; // 4124762644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** When enabled overrides the format of the render target, otherwise uses the project default setting. */" },
		{ "DisplayPriority", "11" },
		{ "EditCondition", "!bInheritUserParameterSettings && bOverrideFormat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When enabled overrides the format of the render target, otherwise uses the project default setting." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFormat = { "OverrideRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFormat_MetaData)) }; // 1004718673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFilter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** When enabled overrides the filter of the render target, otherwise uses the project default setting. */" },
		{ "DisplayPriority", "12" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When enabled overrides the filter of the render target, otherwise uses the project default setting." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFilter = { "OverrideRenderTargetFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFilter_MetaData)) }; // 1243172109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/**\n\x09When enabled texture parameters (size / etc) are taken from the user provided render target.\n\x09If no valid user parameter is set the system will be invalid.\n\x09Note: The resource will be recreated if UAV access is not available, which will reset the contents.\n\x09*/" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When enabled texture parameters (size / etc) are taken from the user provided render target.\nIf no valid user parameter is set the system will be invalid.\nNote: The resource will be recreated if UAV access is not available, which will reset the contents." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRenderTarget2D*)Obj)->bInheritUserParameterSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings = { "bInheritUserParameterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2D), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "10" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRenderTarget2D*)Obj)->bOverrideFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat = { "bOverrideFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2D), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "30" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRenderTarget2D*)Obj)->bPreviewRenderTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget = { "bPreviewRenderTarget", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2D), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_RenderTargetUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_RenderTargetUserParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets_ValueProp = { "ManagedRenderTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets_Key_KeyProp = { "ManagedRenderTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets = { "ManagedRenderTargets", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, ManagedRenderTargets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_RenderTargetUserParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_ManagedRenderTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRenderTarget2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::ClassParams = {
		&UNiagaraDataInterfaceRenderTarget2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRenderTarget2D>()
	{
		return UNiagaraDataInterfaceRenderTarget2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRenderTarget2D);
	UNiagaraDataInterfaceRenderTarget2D::~UNiagaraDataInterfaceRenderTarget2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D, UNiagaraDataInterfaceRenderTarget2D::StaticClass, TEXT("UNiagaraDataInterfaceRenderTarget2D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRenderTarget2D), 1917401821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_2613960882(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
