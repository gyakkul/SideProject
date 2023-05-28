// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubdividePolyTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubdividePolyTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USubdividePolyTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USubdividePolyTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USubdividePolyToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USubdividePolyToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USubdividePolyToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USubdividePolyToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals();
	MODELINGCOMPONENTSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs();
	MODELINGCOMPONENTSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void USubdividePolyToolBuilder::StaticRegisterNativesUSubdividePolyToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubdividePolyToolBuilder);
	UClass* Z_Construct_UClass_USubdividePolyToolBuilder_NoRegister()
	{
		return USubdividePolyToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USubdividePolyToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubdividePolyToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool builder\n */" },
		{ "IncludePath", "SubdividePolyTool.h" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Tool builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubdividePolyToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubdividePolyToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubdividePolyToolBuilder_Statics::ClassParams = {
		&USubdividePolyToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubdividePolyToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USubdividePolyToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubdividePolyToolBuilder.OuterSingleton, Z_Construct_UClass_USubdividePolyToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubdividePolyToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<USubdividePolyToolBuilder>()
	{
		return USubdividePolyToolBuilder::StaticClass();
	}
	USubdividePolyToolBuilder::USubdividePolyToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubdividePolyToolBuilder);
	USubdividePolyToolBuilder::~USubdividePolyToolBuilder() {}
	void USubdividePolyToolProperties::StaticRegisterNativesUSubdividePolyToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubdividePolyToolProperties);
	UClass* Z_Construct_UClass_USubdividePolyToolProperties_NoRegister()
	{
		return USubdividePolyToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USubdividePolyToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SubdivisionLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCatmullClarkOK_MetaData[];
#endif
		static void NewProp_bCatmullClarkOK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCatmullClarkOK;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubdivisionScheme_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionScheme_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivisionScheme;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalComputationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalComputationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalComputationMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UVComputationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVComputationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UVComputationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewPolyGroups_MetaData[];
#endif
		static void NewProp_bNewPolyGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewPolyGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderGroups_MetaData[];
#endif
		static void NewProp_bRenderGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCage_MetaData[];
#endif
		static void NewProp_bRenderCage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubdividePolyToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties\n */" },
		{ "IncludePath", "SubdividePolyTool.h" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionLevel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of iterations/levels of subdivision to perform */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Number of iterations/levels of subdivision to perform" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionLevel = { "SubdivisionLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubdividePolyToolProperties, SubdivisionLevel), METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bCatmullClarkOK_MetaData[] = {
		{ "Comment", "// Controls whether the user can select Catmull-Clark or is forced to use Loop\n" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Controls whether the user can select Catmull-Clark or is forced to use Loop" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bCatmullClarkOK_SetBit(void* Obj)
	{
		((USubdividePolyToolProperties*)Obj)->bCatmullClarkOK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bCatmullClarkOK = { "bCatmullClarkOK", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USubdividePolyToolProperties), &Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bCatmullClarkOK_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bCatmullClarkOK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bCatmullClarkOK_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionScheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionScheme_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCatmullClarkOK" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionScheme = { "SubdivisionScheme", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubdividePolyToolProperties, SubdivisionScheme), Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionScheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionScheme_MetaData)) }; // 4038069170
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_NormalComputationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_NormalComputationMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_NormalComputationMethod = { "NormalComputationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubdividePolyToolProperties, NormalComputationMethod), Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_NormalComputationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_NormalComputationMethod_MetaData)) }; // 3894580814
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_UVComputationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_UVComputationMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "UV Computation Method" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_UVComputationMethod = { "UVComputationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubdividePolyToolProperties, UVComputationMethod), Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_UVComputationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_UVComputationMethod_MetaData)) }; // 1897056191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bNewPolyGroups_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Assign a new PolyGroup ID to each newly created face */" },
		{ "DisplayName", "New PolyGroups" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Assign a new PolyGroup ID to each newly created face" },
	};
#endif
	void Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bNewPolyGroups_SetBit(void* Obj)
	{
		((USubdividePolyToolProperties*)Obj)->bNewPolyGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bNewPolyGroups = { "bNewPolyGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USubdividePolyToolProperties), &Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bNewPolyGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bNewPolyGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bNewPolyGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderGroups_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Display each PolyGroup with an auto-generated color */" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Display each PolyGroup with an auto-generated color" },
	};
#endif
	void Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderGroups_SetBit(void* Obj)
	{
		((USubdividePolyToolProperties*)Obj)->bRenderGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderGroups = { "bRenderGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USubdividePolyToolProperties), &Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderCage_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Display the mesh corresponding to Subdivision Level 0 */" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Display the mesh corresponding to Subdivision Level 0" },
	};
#endif
	void Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderCage_SetBit(void* Obj)
	{
		((USubdividePolyToolProperties*)Obj)->bRenderCage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderCage = { "bRenderCage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USubdividePolyToolProperties), &Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderCage_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderCage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderCage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubdividePolyToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bCatmullClarkOK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionScheme_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_SubdivisionScheme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_NormalComputationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_NormalComputationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_UVComputationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_UVComputationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bNewPolyGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyToolProperties_Statics::NewProp_bRenderCage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubdividePolyToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubdividePolyToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubdividePolyToolProperties_Statics::ClassParams = {
		&USubdividePolyToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubdividePolyToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USubdividePolyToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubdividePolyToolProperties()
	{
		if (!Z_Registration_Info_UClass_USubdividePolyToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubdividePolyToolProperties.OuterSingleton, Z_Construct_UClass_USubdividePolyToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubdividePolyToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<USubdividePolyToolProperties>()
	{
		return USubdividePolyToolProperties::StaticClass();
	}
	USubdividePolyToolProperties::USubdividePolyToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubdividePolyToolProperties);
	USubdividePolyToolProperties::~USubdividePolyToolProperties() {}
	void USubdividePolyTool::StaticRegisterNativesUSubdividePolyTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubdividePolyTool);
	UClass* Z_Construct_UClass_USubdividePolyTool_NoRegister()
	{
		return USubdividePolyTool::StaticClass();
	}
	struct Z_Construct_UClass_USubdividePolyTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubdividePolyTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool actual\n */" },
		{ "IncludePath", "SubdividePolyTool.h" },
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
		{ "ToolTip", "Tool actual" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubdividePolyTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubdividePolyTool, Properties), Z_Construct_UClass_USubdividePolyToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubdividePolyTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubdividePolyTool, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubdividePolyTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubdividePolyTool_Statics::NewProp_PreviewGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubdividePolyTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubdividePolyTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubdividePolyTool_Statics::ClassParams = {
		&USubdividePolyTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubdividePolyTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USubdividePolyTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubdividePolyTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubdividePolyTool()
	{
		if (!Z_Registration_Info_UClass_USubdividePolyTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubdividePolyTool.OuterSingleton, Z_Construct_UClass_USubdividePolyTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubdividePolyTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<USubdividePolyTool>()
	{
		return USubdividePolyTool::StaticClass();
	}
	USubdividePolyTool::USubdividePolyTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubdividePolyTool);
	USubdividePolyTool::~USubdividePolyTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SubdividePolyTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SubdividePolyTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubdividePolyToolBuilder, USubdividePolyToolBuilder::StaticClass, TEXT("USubdividePolyToolBuilder"), &Z_Registration_Info_UClass_USubdividePolyToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubdividePolyToolBuilder), 1957148780U) },
		{ Z_Construct_UClass_USubdividePolyToolProperties, USubdividePolyToolProperties::StaticClass, TEXT("USubdividePolyToolProperties"), &Z_Registration_Info_UClass_USubdividePolyToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubdividePolyToolProperties), 1174494625U) },
		{ Z_Construct_UClass_USubdividePolyTool, USubdividePolyTool::StaticClass, TEXT("USubdividePolyTool"), &Z_Registration_Info_UClass_USubdividePolyTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubdividePolyTool), 4263598113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SubdividePolyTool_h_453118150(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SubdividePolyTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SubdividePolyTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
