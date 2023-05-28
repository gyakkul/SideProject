// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomCreateStrandsTexturesOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCreateStrandsTexturesOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStrandsTexturesTraceType;
	static UEnum* EStrandsTexturesTraceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStrandsTexturesTraceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStrandsTexturesTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EStrandsTexturesTraceType"));
		}
		return Z_Registration_Info_UEnum_EStrandsTexturesTraceType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EStrandsTexturesTraceType>()
	{
		return EStrandsTexturesTraceType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enumerators[] = {
		{ "EStrandsTexturesTraceType::TraceInside", (int64)EStrandsTexturesTraceType::TraceInside },
		{ "EStrandsTexturesTraceType::TraceOuside", (int64)EStrandsTexturesTraceType::TraceOuside },
		{ "EStrandsTexturesTraceType::TraceBidirectional", (int64)EStrandsTexturesTraceType::TraceBidirectional },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Size of each strands*/" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ToolTip", "Size of each strands" },
		{ "TraceBidirectional.DisplatName", "Trace both sides" },
		{ "TraceBidirectional.Name", "EStrandsTexturesTraceType::TraceBidirectional" },
		{ "TraceInside.DisplatName", "Trace inside" },
		{ "TraceInside.Name", "EStrandsTexturesTraceType::TraceInside" },
		{ "TraceOuside.DisplatName", "Trace outside" },
		{ "TraceOuside.Name", "EStrandsTexturesTraceType::TraceOuside" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EStrandsTexturesTraceType",
		"EStrandsTexturesTraceType",
		Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType()
	{
		if (!Z_Registration_Info_UEnum_EStrandsTexturesTraceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStrandsTexturesTraceType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStrandsTexturesTraceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStrandsTexturesMeshType;
	static UEnum* EStrandsTexturesMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStrandsTexturesMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStrandsTexturesMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EStrandsTexturesMeshType"));
		}
		return Z_Registration_Info_UEnum_EStrandsTexturesMeshType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EStrandsTexturesMeshType>()
	{
		return EStrandsTexturesMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enumerators[] = {
		{ "EStrandsTexturesMeshType::Static", (int64)EStrandsTexturesMeshType::Static },
		{ "EStrandsTexturesMeshType::Skeletal", (int64)EStrandsTexturesMeshType::Skeletal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Size of each strands*/" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "Skeletal.DisplatName", "Use skeletal mesh" },
		{ "Skeletal.Name", "EStrandsTexturesMeshType::Skeletal" },
		{ "Static.DisplatName", "Use static mesh" },
		{ "Static.Name", "EStrandsTexturesMeshType::Static" },
		{ "ToolTip", "Size of each strands" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EStrandsTexturesMeshType",
		"EStrandsTexturesMeshType",
		Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType()
	{
		if (!Z_Registration_Info_UEnum_EStrandsTexturesMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStrandsTexturesMeshType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStrandsTexturesMeshType.InnerSingleton;
	}
	void UGroomCreateStrandsTexturesOptions::StaticRegisterNativesUGroomCreateStrandsTexturesOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCreateStrandsTexturesOptions);
	UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_NoRegister()
	{
		return UGroomCreateStrandsTexturesOptions::StaticClass();
	}
	struct Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomCreateStrandsTexturesOptions.h" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Resolution of the output texture maps (tangent, coverage, ...) */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Resolution of the output texture maps (tangent, coverage, ...)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, Resolution), METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Resolution_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Direction in which the tracing will be done: either from the mesh's surface to the outside, or from the mesh's surface to the inside. */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Direction in which the tracing will be done: either from the mesh's surface to the outside, or from the mesh's surface to the inside." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType = { "TraceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, TraceType), Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType, METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType_MetaData)) }; // 766740030
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Distance from the mesh surface until hair are projected onto the mesh. */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Distance from the mesh surface until hair are projected onto the mesh." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Select which mesh should be used for tracing */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Select which mesh should be used for tracing" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, MeshType), Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType, METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType_MetaData)) }; // 1787990265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Mesh on which the groom strands will be projected on. If non empty and if the skeletal mesh entry is empty, the static mesh will be used for generating the textures. */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Mesh on which the groom strands will be projected on. If non empty and if the skeletal mesh entry is empty, the static mesh will be used for generating the textures." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Mesh on which the groom strands will be projected on. If non empty, the skeletal mesh will be used for generating the textures.*/" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Mesh on which the groom strands will be projected on. If non empty, the skeletal mesh will be used for generating the textures." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** LOD of the mesh, on which the texture projection is done */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "LOD of the mesh, on which the texture projection is done" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, LODIndex), METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Section of the mesh, on which the texture projection is done */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Section of the mesh, on which the texture projection is done" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, SectionIndex), METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SectionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_UVChannelIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** UV channel to use */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "UV channel to use" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, UVChannelIndex), METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_UVChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_UVChannelIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex_Inner = { "GroupIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Groom index which should be baked into the textures. When the array is empty, all groups will be included (Default). */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Groom index which should be baked into the textures. When the array is empty, all groups will be included (Default)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, GroupIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCreateStrandsTexturesOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::ClassParams = {
		&UGroomCreateStrandsTexturesOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions()
	{
		if (!Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.OuterSingleton, Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCreateStrandsTexturesOptions>()
	{
		return UGroomCreateStrandsTexturesOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCreateStrandsTexturesOptions);
	UGroomCreateStrandsTexturesOptions::~UGroomCreateStrandsTexturesOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::EnumInfo[] = {
		{ EStrandsTexturesTraceType_StaticEnum, TEXT("EStrandsTexturesTraceType"), &Z_Registration_Info_UEnum_EStrandsTexturesTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 766740030U) },
		{ EStrandsTexturesMeshType_StaticEnum, TEXT("EStrandsTexturesMeshType"), &Z_Registration_Info_UEnum_EStrandsTexturesMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1787990265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCreateStrandsTexturesOptions, UGroomCreateStrandsTexturesOptions::StaticClass, TEXT("UGroomCreateStrandsTexturesOptions"), &Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCreateStrandsTexturesOptions), 3818778285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_2340971767(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
