// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelMorphologyMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMorphologyMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EMorphologyOperation();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UVoxelMorphologyMeshesToolProperties::StaticRegisterNativesUVoxelMorphologyMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMorphologyMeshesToolProperties);
	UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_NoRegister()
	{
		return UVoxelMorphologyMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVoxWrap_MetaData[];
#endif
		static void NewProp_bVoxWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoxWrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInternalsAfterVoxWrap_MetaData[];
#endif
		static void NewProp_bRemoveInternalsAfterVoxWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInternalsAfterVoxWrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThickenShells_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ThickenShells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties of the morphology tool\n */" },
		{ "IncludePath", "VoxelMorphologyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Properties of the morphology tool" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Morphology" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelMorphologyMeshesToolProperties, Operation), Z_Construct_UEnum_ModelingOperators_EMorphologyOperation, METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation_MetaData)) }; // 3031386585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Morphology" },
		{ "ClampMax", "1000" },
		{ "ClampMin", ".001" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "UIMax", "100" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelMorphologyMeshesToolProperties, Distance), METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "Comment", "/** Apply a \"VoxWrap\" operation to input mesh(es) before computing the morphology.  Fixes results for inputs with holes and/or self-intersections. */" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Apply a \"VoxWrap\" operation to input mesh(es) before computing the morphology.  Fixes results for inputs with holes and/or self-intersections." },
	};
#endif
	void Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap_SetBit(void* Obj)
	{
		((UVoxelMorphologyMeshesToolProperties*)Obj)->bVoxWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap = { "bVoxWrap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelMorphologyMeshesToolProperties), &Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "Comment", "/** Remove internal surfaces from the VoxWrap output, before computing the morphology. */" },
		{ "EditCondition", "bVoxWrap == true" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Remove internal surfaces from the VoxWrap output, before computing the morphology." },
	};
#endif
	void Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_SetBit(void* Obj)
	{
		((UVoxelMorphologyMeshesToolProperties*)Obj)->bRemoveInternalsAfterVoxWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap = { "bRemoveInternalsAfterVoxWrap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelMorphologyMeshesToolProperties), &Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_ThickenShells_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0, no extrusion is applied. */" },
		{ "EditCondition", "bVoxWrap == true" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0, no extrusion is applied." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_ThickenShells = { "ThickenShells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelMorphologyMeshesToolProperties, ThickenShells), METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_ThickenShells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_ThickenShells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_ThickenShells,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMorphologyMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::ClassParams = {
		&UVoxelMorphologyMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelMorphologyMeshesToolProperties>()
	{
		return UVoxelMorphologyMeshesToolProperties::StaticClass();
	}
	UVoxelMorphologyMeshesToolProperties::UVoxelMorphologyMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMorphologyMeshesToolProperties);
	UVoxelMorphologyMeshesToolProperties::~UVoxelMorphologyMeshesToolProperties() {}
	void UVoxelMorphologyMeshesTool::StaticRegisterNativesUVoxelMorphologyMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMorphologyMeshesTool);
	UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool_NoRegister()
	{
		return UVoxelMorphologyMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphologyProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MorphologyProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVoxelTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Morphology tool -- dilate, contract, close, open operations on the input shape\n */" },
		{ "IncludePath", "VoxelMorphologyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Morphology tool -- dilate, contract, close, open operations on the input shape" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::NewProp_MorphologyProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::NewProp_MorphologyProperties = { "MorphologyProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelMorphologyMeshesTool, MorphologyProperties), Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::NewProp_MorphologyProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::NewProp_MorphologyProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::NewProp_MorphologyProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMorphologyMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::ClassParams = {
		&UVoxelMorphologyMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool.OuterSingleton, Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelMorphologyMeshesTool>()
	{
		return UVoxelMorphologyMeshesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMorphologyMeshesTool);
	UVoxelMorphologyMeshesTool::~UVoxelMorphologyMeshesTool() {}
	void UVoxelMorphologyMeshesToolBuilder::StaticRegisterNativesUVoxelMorphologyMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMorphologyMeshesToolBuilder);
	UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_NoRegister()
	{
		return UVoxelMorphologyMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelMorphologyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMorphologyMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::ClassParams = {
		&UVoxelMorphologyMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelMorphologyMeshesToolBuilder>()
	{
		return UVoxelMorphologyMeshesToolBuilder::StaticClass();
	}
	UVoxelMorphologyMeshesToolBuilder::UVoxelMorphologyMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMorphologyMeshesToolBuilder);
	UVoxelMorphologyMeshesToolBuilder::~UVoxelMorphologyMeshesToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties, UVoxelMorphologyMeshesToolProperties::StaticClass, TEXT("UVoxelMorphologyMeshesToolProperties"), &Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMorphologyMeshesToolProperties), 3943044826U) },
		{ Z_Construct_UClass_UVoxelMorphologyMeshesTool, UVoxelMorphologyMeshesTool::StaticClass, TEXT("UVoxelMorphologyMeshesTool"), &Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMorphologyMeshesTool), 2334656775U) },
		{ Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder, UVoxelMorphologyMeshesToolBuilder::StaticClass, TEXT("UVoxelMorphologyMeshesToolBuilder"), &Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMorphologyMeshesToolBuilder), 3834268026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_2884086508(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
