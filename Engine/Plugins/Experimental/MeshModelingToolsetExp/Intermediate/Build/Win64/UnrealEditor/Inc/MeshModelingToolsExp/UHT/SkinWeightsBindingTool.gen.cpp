// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkinWeightsBindingTool.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinWeightsBindingTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsBindingTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsBindingTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsBindingToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsBindingToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsBindingToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USkinWeightsBindingToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void USkinWeightsBindingToolBuilder::StaticRegisterNativesUSkinWeightsBindingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinWeightsBindingToolBuilder);
	UClass* Z_Construct_UClass_USkinWeightsBindingToolBuilder_NoRegister()
	{
		return USkinWeightsBindingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SkinWeightsBindingTool.h" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinWeightsBindingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics::ClassParams = {
		&USkinWeightsBindingToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinWeightsBindingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USkinWeightsBindingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinWeightsBindingToolBuilder.OuterSingleton, Z_Construct_UClass_USkinWeightsBindingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinWeightsBindingToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USkinWeightsBindingToolBuilder>()
	{
		return USkinWeightsBindingToolBuilder::StaticClass();
	}
	USkinWeightsBindingToolBuilder::USkinWeightsBindingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinWeightsBindingToolBuilder);
	USkinWeightsBindingToolBuilder::~USkinWeightsBindingToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkinWeightsBindType;
	static UEnum* ESkinWeightsBindType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkinWeightsBindType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkinWeightsBindType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ESkinWeightsBindType"));
		}
		return Z_Registration_Info_UEnum_ESkinWeightsBindType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ESkinWeightsBindType>()
	{
		return ESkinWeightsBindType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::Enumerators[] = {
		{ "ESkinWeightsBindType::DirectDistance", (int64)ESkinWeightsBindType::DirectDistance },
		{ "ESkinWeightsBindType::GeodesicVoxel", (int64)ESkinWeightsBindType::GeodesicVoxel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// A mirror of UE::Geometry::ESkinBindingType\n" },
		{ "DirectDistance.DisplayName", "Direct Distance" },
		{ "DirectDistance.Name", "ESkinWeightsBindType::DirectDistance" },
		{ "GeodesicVoxel.DisplayName", "Geodesic Voxel" },
		{ "GeodesicVoxel.Name", "ESkinWeightsBindType::GeodesicVoxel" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
		{ "ToolTip", "A mirror of UE::Geometry::ESkinBindingType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ESkinWeightsBindType",
		"ESkinWeightsBindType",
		Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType()
	{
		if (!Z_Registration_Info_UEnum_ESkinWeightsBindType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkinWeightsBindType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkinWeightsBindType.InnerSingleton;
	}
	void USkinWeightsBindingToolProperties::StaticRegisterNativesUSkinWeightsBindingToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinWeightsBindingToolProperties);
	UClass* Z_Construct_UClass_USkinWeightsBindingToolProperties_NoRegister()
	{
		return USkinWeightsBindingToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInfluences_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkinWeightsBindingTool.h" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_CurrentBone_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_CurrentBone = { "CurrentBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsBindingToolProperties, CurrentBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_CurrentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_CurrentBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_BindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_BindingType_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Binding type to use */" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
		{ "ToolTip", "Binding type to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_BindingType = { "BindingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsBindingToolProperties, BindingType), Z_Construct_UEnum_MeshModelingToolsExp_ESkinWeightsBindType, METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_BindingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_BindingType_MetaData)) }; // 3718938046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Stiffness of binding. Lower values allow more distant bones to contribute more */" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
		{ "ToolTip", "Stiffness of binding. Lower values allow more distant bones to contribute more" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsBindingToolProperties, Stiffness), METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_MaxInfluences_MetaData[] = {
		{ "Category", "Binding" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum bones that will influence each vertex */" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
		{ "ToolTip", "Maximum bones that will influence each vertex" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_MaxInfluences = { "MaxInfluences", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsBindingToolProperties, MaxInfluences), METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_MaxInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_MaxInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_VoxelResolution_MetaData[] = {
		{ "Category", "Binding" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The resolution of the voxel grid if doing geodesic voxel binding */" },
		{ "EditCondition", "BindingType == ESkinWeightsBindType::GeodesicVoxel" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
		{ "ToolTip", "The resolution of the voxel grid if doing geodesic voxel binding" },
		{ "UIMax", "1024" },
		{ "UIMin", "8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_VoxelResolution = { "VoxelResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsBindingToolProperties, VoxelResolution), METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_VoxelResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_VoxelResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_CurrentBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_BindingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_BindingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_MaxInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::NewProp_VoxelResolution,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(USkinWeightsBindingToolProperties, IBoneReferenceSkeletonProvider), false },  // 3827725125
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinWeightsBindingToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::ClassParams = {
		&USkinWeightsBindingToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinWeightsBindingToolProperties()
	{
		if (!Z_Registration_Info_UClass_USkinWeightsBindingToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinWeightsBindingToolProperties.OuterSingleton, Z_Construct_UClass_USkinWeightsBindingToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinWeightsBindingToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USkinWeightsBindingToolProperties>()
	{
		return USkinWeightsBindingToolProperties::StaticClass();
	}
	USkinWeightsBindingToolProperties::USkinWeightsBindingToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinWeightsBindingToolProperties);
	USkinWeightsBindingToolProperties::~USkinWeightsBindingToolProperties() {}
	void USkinWeightsBindingTool::StaticRegisterNativesUSkinWeightsBindingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinWeightsBindingTool);
	UClass* Z_Construct_UClass_USkinWeightsBindingTool_NoRegister()
	{
		return USkinWeightsBindingTool::StaticClass();
	}
	struct Z_Construct_UClass_USkinWeightsBindingTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinWeightsBindingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SkinWeightsBindingTool.h" },
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsBindingTool, Properties), Z_Construct_UClass_USkinWeightsBindingToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkinWeightsBindingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinWeightsBindingTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinWeightsBindingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinWeightsBindingTool_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinWeightsBindingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinWeightsBindingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinWeightsBindingTool_Statics::ClassParams = {
		&USkinWeightsBindingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkinWeightsBindingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USkinWeightsBindingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinWeightsBindingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinWeightsBindingTool()
	{
		if (!Z_Registration_Info_UClass_USkinWeightsBindingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinWeightsBindingTool.OuterSingleton, Z_Construct_UClass_USkinWeightsBindingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinWeightsBindingTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USkinWeightsBindingTool>()
	{
		return USkinWeightsBindingTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinWeightsBindingTool);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_Statics::EnumInfo[] = {
		{ ESkinWeightsBindType_StaticEnum, TEXT("ESkinWeightsBindType"), &Z_Registration_Info_UEnum_ESkinWeightsBindType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3718938046U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkinWeightsBindingToolBuilder, USkinWeightsBindingToolBuilder::StaticClass, TEXT("USkinWeightsBindingToolBuilder"), &Z_Registration_Info_UClass_USkinWeightsBindingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinWeightsBindingToolBuilder), 1012501733U) },
		{ Z_Construct_UClass_USkinWeightsBindingToolProperties, USkinWeightsBindingToolProperties::StaticClass, TEXT("USkinWeightsBindingToolProperties"), &Z_Registration_Info_UClass_USkinWeightsBindingToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinWeightsBindingToolProperties), 4214813473U) },
		{ Z_Construct_UClass_USkinWeightsBindingTool, USkinWeightsBindingTool::StaticClass, TEXT("USkinWeightsBindingTool"), &Z_Registration_Info_UClass_USkinWeightsBindingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinWeightsBindingTool), 1877134091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_4010129459(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SkinWeightsBindingTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
