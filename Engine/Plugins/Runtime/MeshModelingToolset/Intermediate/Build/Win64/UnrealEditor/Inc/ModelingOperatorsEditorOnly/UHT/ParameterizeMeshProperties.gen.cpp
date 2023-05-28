// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Properties/ParameterizeMeshProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterizeMeshProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolProperties();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod();
	UPackage* Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParameterizeMeshUVMethod;
	static UEnum* EParameterizeMeshUVMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParameterizeMeshUVMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParameterizeMeshUVMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly(), TEXT("EParameterizeMeshUVMethod"));
		}
		return Z_Registration_Info_UEnum_EParameterizeMeshUVMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<EParameterizeMeshUVMethod>()
	{
		return EParameterizeMeshUVMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::Enumerators[] = {
		{ "EParameterizeMeshUVMethod::PatchBuilder", (int64)EParameterizeMeshUVMethod::PatchBuilder },
		{ "EParameterizeMeshUVMethod::UVAtlas", (int64)EParameterizeMeshUVMethod::UVAtlas },
		{ "EParameterizeMeshUVMethod::XAtlas", (int64)EParameterizeMeshUVMethod::XAtlas },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "PatchBuilder.Comment", "/** Compute automatic UVs using the Patch Builder technique */" },
		{ "PatchBuilder.Name", "EParameterizeMeshUVMethod::PatchBuilder" },
		{ "PatchBuilder.ToolTip", "Compute automatic UVs using the Patch Builder technique" },
		{ "UVAtlas.Comment", "/** Compute automatic UVs using the UVAtlas technique */" },
		{ "UVAtlas.Name", "EParameterizeMeshUVMethod::UVAtlas" },
		{ "UVAtlas.ToolTip", "Compute automatic UVs using the UVAtlas technique" },
		{ "XAtlas.Comment", "/** Compute automatic UVs using the XAtlas technique */" },
		{ "XAtlas.Name", "EParameterizeMeshUVMethod::XAtlas" },
		{ "XAtlas.ToolTip", "Compute automatic UVs using the XAtlas technique" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
		nullptr,
		"EParameterizeMeshUVMethod",
		"EParameterizeMeshUVMethod",
		Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod()
	{
		if (!Z_Registration_Info_UEnum_EParameterizeMeshUVMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParameterizeMeshUVMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParameterizeMeshUVMethod.InnerSingleton;
	}
	void UParameterizeMeshToolProperties::StaticRegisterNativesUParameterizeMeshToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterizeMeshToolProperties);
	UClass* Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister()
	{
		return UParameterizeMeshToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UParameterizeMeshToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/ParameterizeMeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "AutoUV" },
		{ "Comment", "/** Automatic UV generation technique to use */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Automatic UV generation technique to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolProperties, Method), Z_Construct_UEnum_ModelingOperatorsEditorOnly_EParameterizeMeshUVMethod, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::NewProp_Method_MetaData)) }; // 2825439104
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::NewProp_Method,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterizeMeshToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::ClassParams = {
		&UParameterizeMeshToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParameterizeMeshToolProperties()
	{
		if (!Z_Registration_Info_UClass_UParameterizeMeshToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterizeMeshToolProperties.OuterSingleton, Z_Construct_UClass_UParameterizeMeshToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterizeMeshToolProperties.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UClass* StaticClass<UParameterizeMeshToolProperties>()
	{
		return UParameterizeMeshToolProperties::StaticClass();
	}
	UParameterizeMeshToolProperties::UParameterizeMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterizeMeshToolProperties);
	UParameterizeMeshToolProperties::~UParameterizeMeshToolProperties() {}
	void UParameterizeMeshToolUVAtlasProperties::StaticRegisterNativesUParameterizeMeshToolUVAtlasProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterizeMeshToolUVAtlasProperties);
	UClass* Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister()
	{
		return UParameterizeMeshToolUVAtlasProperties::StaticClass();
	}
	struct Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IslandStretch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IslandStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIslands_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumIslands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TextureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePolygroups_MetaData[];
#endif
		static void NewProp_bUsePolygroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePolygroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLayoutUDIMPerPolygroup_MetaData[];
#endif
		static void NewProp_bLayoutUDIMPerPolygroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLayoutUDIMPerPolygroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPolygroupsEnabled_MetaData[];
#endif
		static void NewProp_bPolygroupsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPolygroupsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUDIMsEnabled_MetaData[];
#endif
		static void NewProp_bUDIMsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUDIMsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the UVAtlas Automatic UV Generation Method\n */" },
		{ "IncludePath", "Properties/ParameterizeMeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Settings for the UVAtlas Automatic UV Generation Method" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_IslandStretch_MetaData[] = {
		{ "Category", "UVAtlas" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum amount of stretch, from none to unbounded. If zero stretch is specified, each triangle will likely be its own UV island. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Maximum amount of stretch, from none to unbounded. If zero stretch is specified, each triangle will likely be its own UV island." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_IslandStretch = { "IslandStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolUVAtlasProperties, IslandStretch), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_IslandStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_IslandStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_NumIslands_MetaData[] = {
		{ "Category", "UVAtlas" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Hint at number of UV islands. The default of 0 means it is determined automatically. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Hint at number of UV islands. The default of 0 means it is determined automatically." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_NumIslands = { "NumIslands", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolUVAtlasProperties, NumIslands), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_NumIslands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_NumIslands_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_TextureResolution_MetaData[] = {
		{ "Category", "UVAtlas" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts." },
		{ "UIMax", "2048" },
		{ "UIMin", "64" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolUVAtlasProperties, TextureResolution), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_TextureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_TextureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUsePolygroups_MetaData[] = {
		{ "Category", "UVAtlas" },
		{ "Comment", "/** Generate new UVs based on polygroups from specified layer. */" },
		{ "DisplayName", "Constrain to PolyGroups" },
		{ "EditCondition", "bPolygroupsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Generate new UVs based on polygroups from specified layer." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUsePolygroups_SetBit(void* Obj)
	{
		((UParameterizeMeshToolUVAtlasProperties*)Obj)->bUsePolygroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUsePolygroups = { "bUsePolygroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolUVAtlasProperties), &Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUsePolygroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUsePolygroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUsePolygroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_MetaData[] = {
		{ "Category", "UVAtlas" },
		{ "Comment", "/** Layout resulting islands on UDIMs based on polygroups. */" },
		{ "EditCondition", "bUsePolygroups && bUDIMsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Layout resulting islands on UDIMs based on polygroups." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_SetBit(void* Obj)
	{
		((UParameterizeMeshToolUVAtlasProperties*)Obj)->bLayoutUDIMPerPolygroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bLayoutUDIMPerPolygroup = { "bLayoutUDIMPerPolygroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolUVAtlasProperties), &Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bPolygroupsEnabled_MetaData[] = {
		{ "Comment", "/** Controls if polygroup options are available to the user. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Controls if polygroup options are available to the user." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bPolygroupsEnabled_SetBit(void* Obj)
	{
		((UParameterizeMeshToolUVAtlasProperties*)Obj)->bPolygroupsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bPolygroupsEnabled = { "bPolygroupsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolUVAtlasProperties), &Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bPolygroupsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bPolygroupsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bPolygroupsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUDIMsEnabled_MetaData[] = {
		{ "Comment", "/** Controls if UDIM options are available to the user. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Controls if UDIM options are available to the user." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUDIMsEnabled_SetBit(void* Obj)
	{
		((UParameterizeMeshToolUVAtlasProperties*)Obj)->bUDIMsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUDIMsEnabled = { "bUDIMsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolUVAtlasProperties), &Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUDIMsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUDIMsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUDIMsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_IslandStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_NumIslands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_TextureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUsePolygroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bLayoutUDIMPerPolygroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bPolygroupsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::NewProp_bUDIMsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterizeMeshToolUVAtlasProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::ClassParams = {
		&UParameterizeMeshToolUVAtlasProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties()
	{
		if (!Z_Registration_Info_UClass_UParameterizeMeshToolUVAtlasProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterizeMeshToolUVAtlasProperties.OuterSingleton, Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterizeMeshToolUVAtlasProperties.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UClass* StaticClass<UParameterizeMeshToolUVAtlasProperties>()
	{
		return UParameterizeMeshToolUVAtlasProperties::StaticClass();
	}
	UParameterizeMeshToolUVAtlasProperties::UParameterizeMeshToolUVAtlasProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterizeMeshToolUVAtlasProperties);
	UParameterizeMeshToolUVAtlasProperties::~UParameterizeMeshToolUVAtlasProperties() {}
	void UParameterizeMeshToolXAtlasProperties::StaticRegisterNativesUParameterizeMeshToolXAtlasProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterizeMeshToolXAtlasProperties);
	UClass* Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister()
	{
		return UParameterizeMeshToolXAtlasProperties::StaticClass();
	}
	struct Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxIterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/ParameterizeMeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "XAtlas" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of solve iterations; higher values generally result in better UV islands. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Number of solve iterations; higher values generally result in better UV islands." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolXAtlasProperties, MaxIterations), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::NewProp_MaxIterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::NewProp_MaxIterations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterizeMeshToolXAtlasProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::ClassParams = {
		&UParameterizeMeshToolXAtlasProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties()
	{
		if (!Z_Registration_Info_UClass_UParameterizeMeshToolXAtlasProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterizeMeshToolXAtlasProperties.OuterSingleton, Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterizeMeshToolXAtlasProperties.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UClass* StaticClass<UParameterizeMeshToolXAtlasProperties>()
	{
		return UParameterizeMeshToolXAtlasProperties::StaticClass();
	}
	UParameterizeMeshToolXAtlasProperties::UParameterizeMeshToolXAtlasProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterizeMeshToolXAtlasProperties);
	UParameterizeMeshToolXAtlasProperties::~UParameterizeMeshToolXAtlasProperties() {}
	void UParameterizeMeshToolPatchBuilderProperties::StaticRegisterNativesUParameterizeMeshToolPatchBuilderProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterizeMeshToolPatchBuilderProperties);
	UClass* Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister()
	{
		return UParameterizeMeshToolPatchBuilderProperties::StaticClass();
	}
	struct Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialPatches_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialPatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvatureAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergingDistortionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingDistortionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergingAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SmoothingSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepack_MetaData[];
#endif
		static void NewProp_bRepack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TextureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePolygroups_MetaData[];
#endif
		static void NewProp_bUsePolygroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePolygroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLayoutUDIMPerPolygroup_MetaData[];
#endif
		static void NewProp_bLayoutUDIMPerPolygroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLayoutUDIMPerPolygroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPolygroupsEnabled_MetaData[];
#endif
		static void NewProp_bPolygroupsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPolygroupsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUDIMsEnabled_MetaData[];
#endif
		static void NewProp_bUDIMsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUDIMsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/ParameterizeMeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_InitialPatches_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "99999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of initial patches the mesh will be split into before island merging. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Number of initial patches the mesh will be split into before island merging." },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_InitialPatches = { "InitialPatches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolPatchBuilderProperties, InitialPatches), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_InitialPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_InitialPatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_CurvatureAlignment_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Alignment of the initial patches to creases in the mesh.*/" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Alignment of the initial patches to creases in the mesh." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_CurvatureAlignment = { "CurvatureAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolPatchBuilderProperties, CurvatureAlignment), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_CurvatureAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_CurvatureAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingDistortionThreshold_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Threshold for stretching and distortion below which island merging is allowed; larger values increase the allowable UV distortion. */" },
		{ "DisplayName", "Distortion Threshold" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Threshold for stretching and distortion below which island merging is allowed; larger values increase the allowable UV distortion." },
		{ "UIMax", "5.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingDistortionThreshold = { "MergingDistortionThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolPatchBuilderProperties, MergingDistortionThreshold), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingDistortionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingDistortionThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingAngleThreshold_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold for the average face normal deviation below which island merging is allowed. */" },
		{ "DisplayName", "Angle Threshold" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Threshold for the average face normal deviation below which island merging is allowed." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingAngleThreshold = { "MergingAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolPatchBuilderProperties, MergingAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingSteps_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of smoothing steps to apply; this slightly increases distortion but produces more stable results. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Number of smoothing steps to apply; this slightly increases distortion but produces more stable results." },
		{ "UIMax", "25" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingSteps = { "SmoothingSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolPatchBuilderProperties, SmoothingSteps), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingAlpha_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothing parameter; larger values result in faster smoothing in each step. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Smoothing parameter; larger values result in faster smoothing in each step." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingAlpha = { "SmoothingAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolPatchBuilderProperties, SmoothingAlpha), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bRepack_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "Comment", "/** Automatically pack result UVs into the unit square, i.e. fit between 0 and 1 with no overlap. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Automatically pack result UVs into the unit square, i.e. fit between 0 and 1 with no overlap." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bRepack_SetBit(void* Obj)
	{
		((UParameterizeMeshToolPatchBuilderProperties*)Obj)->bRepack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bRepack = { "bRepack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolPatchBuilderProperties), &Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bRepack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bRepack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bRepack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_TextureResolution_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts. This is only enabled when Repack is enabled. */" },
		{ "EditCondition", "bRepack" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts. This is only enabled when Repack is enabled." },
		{ "UIMax", "2048" },
		{ "UIMin", "64" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshToolPatchBuilderProperties, TextureResolution), METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_TextureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_TextureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUsePolygroups_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "Comment", "/** Generate new UVs based on polygroups from specified layer. */" },
		{ "DisplayName", "Constrain to PolyGroups" },
		{ "EditCondition", "bPolygroupsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Generate new UVs based on polygroups from specified layer." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUsePolygroups_SetBit(void* Obj)
	{
		((UParameterizeMeshToolPatchBuilderProperties*)Obj)->bUsePolygroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUsePolygroups = { "bUsePolygroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolPatchBuilderProperties), &Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUsePolygroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUsePolygroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUsePolygroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "Comment", "/** Layout resulting islands on UDIMs based on polygroups. */" },
		{ "EditCondition", "bUsePolygroups && bUDIMsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Layout resulting islands on UDIMs based on polygroups." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_SetBit(void* Obj)
	{
		((UParameterizeMeshToolPatchBuilderProperties*)Obj)->bLayoutUDIMPerPolygroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bLayoutUDIMPerPolygroup = { "bLayoutUDIMPerPolygroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolPatchBuilderProperties), &Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bLayoutUDIMPerPolygroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bPolygroupsEnabled_MetaData[] = {
		{ "Comment", "/** Controls if polygroup options are available to the user. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Controls if polygroup options are available to the user." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bPolygroupsEnabled_SetBit(void* Obj)
	{
		((UParameterizeMeshToolPatchBuilderProperties*)Obj)->bPolygroupsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bPolygroupsEnabled = { "bPolygroupsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolPatchBuilderProperties), &Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bPolygroupsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bPolygroupsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bPolygroupsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUDIMsEnabled_MetaData[] = {
		{ "Comment", "/** Controls if UDIM options are available to the user. */" },
		{ "ModuleRelativePath", "Public/Properties/ParameterizeMeshProperties.h" },
		{ "ToolTip", "Controls if UDIM options are available to the user." },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUDIMsEnabled_SetBit(void* Obj)
	{
		((UParameterizeMeshToolPatchBuilderProperties*)Obj)->bUDIMsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUDIMsEnabled = { "bUDIMsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshToolPatchBuilderProperties), &Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUDIMsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUDIMsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUDIMsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_InitialPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_CurvatureAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingDistortionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_MergingAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_SmoothingAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bRepack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_TextureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUsePolygroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bLayoutUDIMPerPolygroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bPolygroupsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::NewProp_bUDIMsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterizeMeshToolPatchBuilderProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::ClassParams = {
		&UParameterizeMeshToolPatchBuilderProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties()
	{
		if (!Z_Registration_Info_UClass_UParameterizeMeshToolPatchBuilderProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterizeMeshToolPatchBuilderProperties.OuterSingleton, Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterizeMeshToolPatchBuilderProperties.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UClass* StaticClass<UParameterizeMeshToolPatchBuilderProperties>()
	{
		return UParameterizeMeshToolPatchBuilderProperties::StaticClass();
	}
	UParameterizeMeshToolPatchBuilderProperties::UParameterizeMeshToolPatchBuilderProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterizeMeshToolPatchBuilderProperties);
	UParameterizeMeshToolPatchBuilderProperties::~UParameterizeMeshToolPatchBuilderProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_Statics::EnumInfo[] = {
		{ EParameterizeMeshUVMethod_StaticEnum, TEXT("EParameterizeMeshUVMethod"), &Z_Registration_Info_UEnum_EParameterizeMeshUVMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2825439104U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParameterizeMeshToolProperties, UParameterizeMeshToolProperties::StaticClass, TEXT("UParameterizeMeshToolProperties"), &Z_Registration_Info_UClass_UParameterizeMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterizeMeshToolProperties), 1919392400U) },
		{ Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties, UParameterizeMeshToolUVAtlasProperties::StaticClass, TEXT("UParameterizeMeshToolUVAtlasProperties"), &Z_Registration_Info_UClass_UParameterizeMeshToolUVAtlasProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterizeMeshToolUVAtlasProperties), 919342073U) },
		{ Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties, UParameterizeMeshToolXAtlasProperties::StaticClass, TEXT("UParameterizeMeshToolXAtlasProperties"), &Z_Registration_Info_UClass_UParameterizeMeshToolXAtlasProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterizeMeshToolXAtlasProperties), 3794192940U) },
		{ Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties, UParameterizeMeshToolPatchBuilderProperties::StaticClass, TEXT("UParameterizeMeshToolPatchBuilderProperties"), &Z_Registration_Info_UClass_UParameterizeMeshToolPatchBuilderProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterizeMeshToolPatchBuilderProperties), 1102396536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_1447330006(TEXT("/Script/ModelingOperatorsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_Properties_ParameterizeMeshProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
