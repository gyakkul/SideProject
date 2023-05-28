// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigGizmoLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigGizmoLibrary() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigShapeDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition;
class UScriptStruct* FControlRigShapeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigShapeDefinition, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigShapeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigShapeDefinition>()
{
	return FControlRigShapeDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigShapeDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_ShapeName_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_ShapeName = { "ShapeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigShapeDefinition, ShapeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_ShapeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_ShapeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigShapeDefinition, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigShapeDefinition, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_ShapeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigShapeDefinition",
		sizeof(FControlRigShapeDefinition),
		alignof(FControlRigShapeDefinition),
		Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigShapeDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.InnerSingleton;
	}
	void UControlRigShapeLibrary::StaticRegisterNativesUControlRigShapeLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigShapeLibrary);
	UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister()
	{
		return UControlRigShapeLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigShapeLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShape_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_XRayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialColorParameter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialColorParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shapes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigShapeLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigShapeLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Control Rig Shape Library" },
		{ "IncludePath", "ControlRigGizmoLibrary.h" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultShape_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultShape = { "DefaultShape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigShapeLibrary, DefaultShape), Z_Construct_UScriptStruct_FControlRigShapeDefinition, METADATA_PARAMS(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultShape_MetaData)) }; // 1878203456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigShapeLibrary, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_XRayMaterial_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_XRayMaterial = { "XRayMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigShapeLibrary, XRayMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_XRayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_XRayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_MaterialColorParameter_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_MaterialColorParameter = { "MaterialColorParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigShapeLibrary, MaterialColorParameter), METADATA_PARAMS(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_MaterialColorParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_MaterialColorParameter_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigShapeDefinition, METADATA_PARAMS(nullptr, 0) }; // 1878203456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigShapeLibrary, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes_MetaData)) }; // 1878203456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigShapeLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_XRayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_MaterialColorParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigShapeLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigShapeLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::ClassParams = {
		&UControlRigShapeLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigShapeLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigShapeLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigShapeLibrary()
	{
		if (!Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton, Z_Construct_UClass_UControlRigShapeLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigShapeLibrary>()
	{
		return UControlRigShapeLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigShapeLibrary);
	UControlRigShapeLibrary::~UControlRigShapeLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ScriptStructInfo[] = {
		{ FControlRigShapeDefinition::StaticStruct, Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewStructOps, TEXT("ControlRigShapeDefinition"), &Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigShapeDefinition), 1878203456U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigShapeLibrary, UControlRigShapeLibrary::StaticClass, TEXT("UControlRigShapeLibrary"), &Z_Registration_Info_UClass_UControlRigShapeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigShapeLibrary), 2159625504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_2511899662(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
