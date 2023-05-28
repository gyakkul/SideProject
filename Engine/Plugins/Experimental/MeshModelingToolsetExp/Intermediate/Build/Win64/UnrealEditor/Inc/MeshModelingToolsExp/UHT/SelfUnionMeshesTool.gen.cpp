// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelfUnionMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfUnionMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelfUnionMeshesTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelfUnionMeshesTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelfUnionMeshesToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelfUnionMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelfUnionMeshesToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelfUnionMeshesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void USelfUnionMeshesToolProperties::StaticRegisterNativesUSelfUnionMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelfUnionMeshesToolProperties);
	UClass* Z_Construct_UClass_USelfUnionMeshesToolProperties_NoRegister()
	{
		return USelfUnionMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrimFlaps_MetaData[];
#endif
		static void NewProp_bTrimFlaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimFlaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryFixHoles_MetaData[];
#endif
		static void NewProp_bTryFixHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryFixHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryCollapseEdges_MetaData[];
#endif
		static void NewProp_bTryCollapseEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryCollapseEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNewBoundaryEdges_MetaData[];
#endif
		static void NewProp_bShowNewBoundaryEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNewBoundaryEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUseFirstMeshMaterials_MetaData[];
#endif
		static void NewProp_bOnlyUseFirstMeshMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUseFirstMeshMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the self-union operation\n */" },
		{ "IncludePath", "SelfUnionMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "Standard properties of the self-union operation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTrimFlaps_MetaData[] = {
		{ "Category", "Merge" },
		{ "Comment", "/** If true, remove open, visible geometry */" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "If true, remove open, visible geometry" },
	};
#endif
	void Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTrimFlaps_SetBit(void* Obj)
	{
		((USelfUnionMeshesToolProperties*)Obj)->bTrimFlaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTrimFlaps = { "bTrimFlaps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USelfUnionMeshesToolProperties), &Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTrimFlaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTrimFlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTrimFlaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryFixHoles_MetaData[] = {
		{ "Category", "Merge" },
		{ "Comment", "/** Try to fill holes created by the merge, e.g. due to numerical errors */" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "Try to fill holes created by the merge, e.g. due to numerical errors" },
	};
#endif
	void Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryFixHoles_SetBit(void* Obj)
	{
		((USelfUnionMeshesToolProperties*)Obj)->bTryFixHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryFixHoles = { "bTryFixHoles", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USelfUnionMeshesToolProperties), &Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryFixHoles_SetBit, METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryFixHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryFixHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData[] = {
		{ "Category", "Merge" },
		{ "Comment", "/** Try to collapse extra edges created by the merge */" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "Try to collapse extra edges created by the merge" },
	};
#endif
	void Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit(void* Obj)
	{
		((USelfUnionMeshesToolProperties*)Obj)->bTryCollapseEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryCollapseEdges = { "bTryCollapseEdges", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USelfUnionMeshesToolProperties), &Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Merge" },
		{ "Comment", "/** Threshold to determine whether a triangle in one mesh is inside or outside of the other */" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "Threshold to determine whether a triangle in one mesh is inside or outside of the other" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USelfUnionMeshesToolProperties, WindingThreshold), METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bShowNewBoundaryEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Show boundary edges created by the merge (often due to numerical error) */" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "Show boundary edges created by the merge (often due to numerical error)" },
	};
#endif
	void Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bShowNewBoundaryEdges_SetBit(void* Obj)
	{
		((USelfUnionMeshesToolProperties*)Obj)->bShowNewBoundaryEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bShowNewBoundaryEdges = { "bShowNewBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USelfUnionMeshesToolProperties), &Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bShowNewBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bShowNewBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bShowNewBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bOnlyUseFirstMeshMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If true, only the first mesh will keep its materials assignments; all other triangles will be assigned material 0 */" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "If true, only the first mesh will keep its materials assignments; all other triangles will be assigned material 0" },
	};
#endif
	void Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bOnlyUseFirstMeshMaterials_SetBit(void* Obj)
	{
		((USelfUnionMeshesToolProperties*)Obj)->bOnlyUseFirstMeshMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bOnlyUseFirstMeshMaterials = { "bOnlyUseFirstMeshMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USelfUnionMeshesToolProperties), &Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bOnlyUseFirstMeshMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bOnlyUseFirstMeshMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bOnlyUseFirstMeshMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTrimFlaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryFixHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bTryCollapseEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bShowNewBoundaryEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::NewProp_bOnlyUseFirstMeshMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfUnionMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::ClassParams = {
		&USelfUnionMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfUnionMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_USelfUnionMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelfUnionMeshesToolProperties.OuterSingleton, Z_Construct_UClass_USelfUnionMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelfUnionMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USelfUnionMeshesToolProperties>()
	{
		return USelfUnionMeshesToolProperties::StaticClass();
	}
	USelfUnionMeshesToolProperties::USelfUnionMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfUnionMeshesToolProperties);
	USelfUnionMeshesToolProperties::~USelfUnionMeshesToolProperties() {}
	void USelfUnionMeshesTool::StaticRegisterNativesUSelfUnionMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelfUnionMeshesTool);
	UClass* Z_Construct_UClass_USelfUnionMeshesTool_NoRegister()
	{
		return USelfUnionMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_USelfUnionMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLineSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnLineSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfUnionMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Union of meshes, resolving self intersections\n */" },
		{ "IncludePath", "SelfUnionMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
		{ "ToolTip", "Union of meshes, resolving self intersections" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USelfUnionMeshesTool, Properties), Z_Construct_UClass_USelfUnionMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_DrawnLineSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_DrawnLineSet = { "DrawnLineSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USelfUnionMeshesTool, DrawnLineSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_DrawnLineSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_DrawnLineSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelfUnionMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUnionMeshesTool_Statics::NewProp_DrawnLineSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfUnionMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfUnionMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelfUnionMeshesTool_Statics::ClassParams = {
		&USelfUnionMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USelfUnionMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfUnionMeshesTool()
	{
		if (!Z_Registration_Info_UClass_USelfUnionMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelfUnionMeshesTool.OuterSingleton, Z_Construct_UClass_USelfUnionMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelfUnionMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USelfUnionMeshesTool>()
	{
		return USelfUnionMeshesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfUnionMeshesTool);
	USelfUnionMeshesTool::~USelfUnionMeshesTool() {}
	void USelfUnionMeshesToolBuilder::StaticRegisterNativesUSelfUnionMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelfUnionMeshesToolBuilder);
	UClass* Z_Construct_UClass_USelfUnionMeshesToolBuilder_NoRegister()
	{
		return USelfUnionMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelfUnionMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SelfUnionMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfUnionMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics::ClassParams = {
		&USelfUnionMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfUnionMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USelfUnionMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelfUnionMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_USelfUnionMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelfUnionMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USelfUnionMeshesToolBuilder>()
	{
		return USelfUnionMeshesToolBuilder::StaticClass();
	}
	USelfUnionMeshesToolBuilder::USelfUnionMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfUnionMeshesToolBuilder);
	USelfUnionMeshesToolBuilder::~USelfUnionMeshesToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SelfUnionMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SelfUnionMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelfUnionMeshesToolProperties, USelfUnionMeshesToolProperties::StaticClass, TEXT("USelfUnionMeshesToolProperties"), &Z_Registration_Info_UClass_USelfUnionMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelfUnionMeshesToolProperties), 254525601U) },
		{ Z_Construct_UClass_USelfUnionMeshesTool, USelfUnionMeshesTool::StaticClass, TEXT("USelfUnionMeshesTool"), &Z_Registration_Info_UClass_USelfUnionMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelfUnionMeshesTool), 1381379695U) },
		{ Z_Construct_UClass_USelfUnionMeshesToolBuilder, USelfUnionMeshesToolBuilder::StaticClass, TEXT("USelfUnionMeshesToolBuilder"), &Z_Registration_Info_UClass_USelfUnionMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelfUnionMeshesToolBuilder), 3962865702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SelfUnionMeshesTool_h_2164650568(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SelfUnionMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SelfUnionMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
