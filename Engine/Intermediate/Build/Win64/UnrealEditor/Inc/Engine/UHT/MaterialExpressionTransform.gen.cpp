// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTransform.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTransform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransform_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource;
	static UEnum* EMaterialVectorCoordTransformSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialVectorCoordTransformSource"));
		}
		return Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialVectorCoordTransformSource>()
	{
		return EMaterialVectorCoordTransformSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enumerators[] = {
		{ "TRANSFORMSOURCE_Tangent", (int64)TRANSFORMSOURCE_Tangent },
		{ "TRANSFORMSOURCE_Local", (int64)TRANSFORMSOURCE_Local },
		{ "TRANSFORMSOURCE_World", (int64)TRANSFORMSOURCE_World },
		{ "TRANSFORMSOURCE_View", (int64)TRANSFORMSOURCE_View },
		{ "TRANSFORMSOURCE_Camera", (int64)TRANSFORMSOURCE_Camera },
		{ "TRANSFORMSOURCE_ParticleWorld", (int64)TRANSFORMSOURCE_ParticleWorld },
		{ "TRANSFORMSOURCE_Instance", (int64)TRANSFORMSOURCE_Instance },
		{ "TRANSFORMSOURCE_MAX", (int64)TRANSFORMSOURCE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "TRANSFORMSOURCE_Camera.Comment", "/** Camera space */" },
		{ "TRANSFORMSOURCE_Camera.DisplayName", "Camera Space" },
		{ "TRANSFORMSOURCE_Camera.Name", "TRANSFORMSOURCE_Camera" },
		{ "TRANSFORMSOURCE_Camera.ToolTip", "Camera space" },
		{ "TRANSFORMSOURCE_Instance.Comment", "/** Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles). */" },
		{ "TRANSFORMSOURCE_Instance.DisplayName", "Instance & Particle Space" },
		{ "TRANSFORMSOURCE_Instance.Name", "TRANSFORMSOURCE_Instance" },
		{ "TRANSFORMSOURCE_Instance.ToolTip", "Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles)." },
		{ "TRANSFORMSOURCE_Local.Comment", "/** Local space (relative to the rendered object, = object space) */" },
		{ "TRANSFORMSOURCE_Local.DisplayName", "Local Space" },
		{ "TRANSFORMSOURCE_Local.Name", "TRANSFORMSOURCE_Local" },
		{ "TRANSFORMSOURCE_Local.ToolTip", "Local space (relative to the rendered object, = object space)" },
		{ "TRANSFORMSOURCE_MAX.Name", "TRANSFORMSOURCE_MAX" },
		{ "TRANSFORMSOURCE_ParticleWorld.Comment", "/** Particle space, deprecated value will be removed in a future release use instance space. */" },
		{ "TRANSFORMSOURCE_ParticleWorld.DisplayName", "Mesh particle space" },
		{ "TRANSFORMSOURCE_ParticleWorld.Hidden", "" },
		{ "TRANSFORMSOURCE_ParticleWorld.Name", "TRANSFORMSOURCE_ParticleWorld" },
		{ "TRANSFORMSOURCE_ParticleWorld.ToolTip", "Particle space, deprecated value will be removed in a future release use instance space." },
		{ "TRANSFORMSOURCE_Tangent.Comment", "/** Tangent space (relative to the surface) */" },
		{ "TRANSFORMSOURCE_Tangent.DisplayName", "Tangent Space" },
		{ "TRANSFORMSOURCE_Tangent.Name", "TRANSFORMSOURCE_Tangent" },
		{ "TRANSFORMSOURCE_Tangent.ToolTip", "Tangent space (relative to the surface)" },
		{ "TRANSFORMSOURCE_View.Comment", "/** View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes) */" },
		{ "TRANSFORMSOURCE_View.DisplayName", "View Space" },
		{ "TRANSFORMSOURCE_View.Name", "TRANSFORMSOURCE_View" },
		{ "TRANSFORMSOURCE_View.ToolTip", "View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes)" },
		{ "TRANSFORMSOURCE_World.Comment", "/** World space, a unit is 1cm */" },
		{ "TRANSFORMSOURCE_World.DisplayName", "World Space" },
		{ "TRANSFORMSOURCE_World.Name", "TRANSFORMSOURCE_World" },
		{ "TRANSFORMSOURCE_World.ToolTip", "World space, a unit is 1cm" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialVectorCoordTransformSource",
		"EMaterialVectorCoordTransformSource",
		Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource()
	{
		if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialVectorCoordTransform;
	static UEnum* EMaterialVectorCoordTransform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialVectorCoordTransform"));
		}
		return Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialVectorCoordTransform>()
	{
		return EMaterialVectorCoordTransform_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enumerators[] = {
		{ "TRANSFORM_Tangent", (int64)TRANSFORM_Tangent },
		{ "TRANSFORM_Local", (int64)TRANSFORM_Local },
		{ "TRANSFORM_World", (int64)TRANSFORM_World },
		{ "TRANSFORM_View", (int64)TRANSFORM_View },
		{ "TRANSFORM_Camera", (int64)TRANSFORM_Camera },
		{ "TRANSFORM_ParticleWorld", (int64)TRANSFORM_ParticleWorld },
		{ "TRANSFORM_Instance", (int64)TRANSFORM_Instance },
		{ "TRANSFORM_MAX", (int64)TRANSFORM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "TRANSFORM_Camera.Comment", "/** Camera space */" },
		{ "TRANSFORM_Camera.DisplayName", "Camera Space" },
		{ "TRANSFORM_Camera.Name", "TRANSFORM_Camera" },
		{ "TRANSFORM_Camera.ToolTip", "Camera space" },
		{ "TRANSFORM_Instance.Comment", "/** Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles). */" },
		{ "TRANSFORM_Instance.DisplayName", "Instance & Particle Space" },
		{ "TRANSFORM_Instance.Name", "TRANSFORM_Instance" },
		{ "TRANSFORM_Instance.ToolTip", "Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles)." },
		{ "TRANSFORM_Local.Comment", "/** Local space (relative to the rendered object, = object space) */" },
		{ "TRANSFORM_Local.DisplayName", "Local Space" },
		{ "TRANSFORM_Local.Name", "TRANSFORM_Local" },
		{ "TRANSFORM_Local.ToolTip", "Local space (relative to the rendered object, = object space)" },
		{ "TRANSFORM_MAX.Name", "TRANSFORM_MAX" },
		{ "TRANSFORM_ParticleWorld.Comment", "/** Particle space, deprecated value will be removed in a future release use instance space. */" },
		{ "TRANSFORM_ParticleWorld.DisplayName", "Mesh particle space" },
		{ "TRANSFORM_ParticleWorld.Hidden", "" },
		{ "TRANSFORM_ParticleWorld.Name", "TRANSFORM_ParticleWorld" },
		{ "TRANSFORM_ParticleWorld.ToolTip", "Particle space, deprecated value will be removed in a future release use instance space." },
		{ "TRANSFORM_Tangent.Comment", "/** Tangent space (relative to the surface) */" },
		{ "TRANSFORM_Tangent.DisplayName", "Tangent Space" },
		{ "TRANSFORM_Tangent.Name", "TRANSFORM_Tangent" },
		{ "TRANSFORM_Tangent.ToolTip", "Tangent space (relative to the surface)" },
		{ "TRANSFORM_View.Comment", "/** View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes) */" },
		{ "TRANSFORM_View.DisplayName", "View Space" },
		{ "TRANSFORM_View.Name", "TRANSFORM_View" },
		{ "TRANSFORM_View.ToolTip", "View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes)" },
		{ "TRANSFORM_World.Comment", "/** World space, a unit is 1cm */" },
		{ "TRANSFORM_World.DisplayName", "World Space" },
		{ "TRANSFORM_World.Name", "TRANSFORM_World" },
		{ "TRANSFORM_World.ToolTip", "World space, a unit is 1cm" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialVectorCoordTransform",
		"EMaterialVectorCoordTransform",
		Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform()
	{
		if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.InnerSingleton;
	}
	void UMaterialExpressionTransform::StaticRegisterNativesUMaterialExpressionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTransform);
	UClass* Z_Construct_UClass_UMaterialExpressionTransform_NoRegister()
	{
		return UMaterialExpressionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransform_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTransform.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "/** input expression for this transform */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "ToolTip", "input expression for this transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTransform, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformSourceType_MetaData[] = {
		{ "Category", "MaterialExpressionTransform" },
		{ "Comment", "/** Source coordinate space of the FVector */" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Source coordinate space of the FVector" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformSourceType = { "TransformSourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTransform, TransformSourceType), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformSourceType_MetaData)) }; // 3471714797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformType_MetaData[] = {
		{ "Category", "MaterialExpressionTransform" },
		{ "Comment", "/** Destination coordinate space of the FVector */" },
		{ "DisplayName", "Destination" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Destination coordinate space of the FVector" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTransform, TransformType), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformType_MetaData)) }; // 3513284635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::ClassParams = {
		&UMaterialExpressionTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTransform()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTransform.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTransform.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTransform>()
	{
		return UMaterialExpressionTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTransform);
	UMaterialExpressionTransform::~UMaterialExpressionTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::EnumInfo[] = {
		{ EMaterialVectorCoordTransformSource_StaticEnum, TEXT("EMaterialVectorCoordTransformSource"), &Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3471714797U) },
		{ EMaterialVectorCoordTransform_StaticEnum, TEXT("EMaterialVectorCoordTransform"), &Z_Registration_Info_UEnum_EMaterialVectorCoordTransform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3513284635U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTransform, UMaterialExpressionTransform::StaticClass, TEXT("UMaterialExpressionTransform"), &Z_Registration_Info_UClass_UMaterialExpressionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTransform), 1391857682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_1509257954(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
