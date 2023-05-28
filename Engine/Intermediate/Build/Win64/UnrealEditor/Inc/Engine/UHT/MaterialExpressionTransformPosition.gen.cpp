// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTransformPosition.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTransformPosition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialPositionTransformSource();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialPositionTransformSource;
	static UEnum* EMaterialPositionTransformSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialPositionTransformSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialPositionTransformSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialPositionTransformSource"));
		}
		return Z_Registration_Info_UEnum_EMaterialPositionTransformSource.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialPositionTransformSource>()
	{
		return EMaterialPositionTransformSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enumerators[] = {
		{ "TRANSFORMPOSSOURCE_Local", (int64)TRANSFORMPOSSOURCE_Local },
		{ "TRANSFORMPOSSOURCE_World", (int64)TRANSFORMPOSSOURCE_World },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld", (int64)TRANSFORMPOSSOURCE_TranslatedWorld },
		{ "TRANSFORMPOSSOURCE_View", (int64)TRANSFORMPOSSOURCE_View },
		{ "TRANSFORMPOSSOURCE_Camera", (int64)TRANSFORMPOSSOURCE_Camera },
		{ "TRANSFORMPOSSOURCE_Particle", (int64)TRANSFORMPOSSOURCE_Particle },
		{ "TRANSFORMPOSSOURCE_Instance", (int64)TRANSFORMPOSSOURCE_Instance },
		{ "TRANSFORMPOSSOURCE_MAX", (int64)TRANSFORMPOSSOURCE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
		{ "TRANSFORMPOSSOURCE_Camera.Comment", "/** Camera space */" },
		{ "TRANSFORMPOSSOURCE_Camera.DisplayName", "Camera Space" },
		{ "TRANSFORMPOSSOURCE_Camera.Name", "TRANSFORMPOSSOURCE_Camera" },
		{ "TRANSFORMPOSSOURCE_Camera.ToolTip", "Camera space" },
		{ "TRANSFORMPOSSOURCE_Instance.Comment", "/** Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles). */" },
		{ "TRANSFORMPOSSOURCE_Instance.DisplayName", "Instance & Particle Space" },
		{ "TRANSFORMPOSSOURCE_Instance.Name", "TRANSFORMPOSSOURCE_Instance" },
		{ "TRANSFORMPOSSOURCE_Instance.ToolTip", "Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles)." },
		{ "TRANSFORMPOSSOURCE_Local.Comment", "/** Local space */" },
		{ "TRANSFORMPOSSOURCE_Local.DisplayName", "Local Space" },
		{ "TRANSFORMPOSSOURCE_Local.Name", "TRANSFORMPOSSOURCE_Local" },
		{ "TRANSFORMPOSSOURCE_Local.ToolTip", "Local space" },
		{ "TRANSFORMPOSSOURCE_MAX.Name", "TRANSFORMPOSSOURCE_MAX" },
		{ "TRANSFORMPOSSOURCE_Particle.Comment", "/** Particle space, deprecated value will be removed in a future release use instance space. */" },
		{ "TRANSFORMPOSSOURCE_Particle.DisplayName", "Mesh Particle Space" },
		{ "TRANSFORMPOSSOURCE_Particle.Hidden", "" },
		{ "TRANSFORMPOSSOURCE_Particle.Name", "TRANSFORMPOSSOURCE_Particle" },
		{ "TRANSFORMPOSSOURCE_Particle.ToolTip", "Particle space, deprecated value will be removed in a future release use instance space." },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.Comment", "/** Camera relative world space */" },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.DisplayName", "Camera Relative World Space" },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.Name", "TRANSFORMPOSSOURCE_TranslatedWorld" },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.ToolTip", "Camera relative world space" },
		{ "TRANSFORMPOSSOURCE_View.Comment", "/** View space (differs from camera space in the shadow passes) */" },
		{ "TRANSFORMPOSSOURCE_View.DisplayName", "View Space" },
		{ "TRANSFORMPOSSOURCE_View.Name", "TRANSFORMPOSSOURCE_View" },
		{ "TRANSFORMPOSSOURCE_View.ToolTip", "View space (differs from camera space in the shadow passes)" },
		{ "TRANSFORMPOSSOURCE_World.Comment", "/** Absolute world space */" },
		{ "TRANSFORMPOSSOURCE_World.DisplayName", "Absolute World Space" },
		{ "TRANSFORMPOSSOURCE_World.Name", "TRANSFORMPOSSOURCE_World" },
		{ "TRANSFORMPOSSOURCE_World.ToolTip", "Absolute world space" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialPositionTransformSource",
		"EMaterialPositionTransformSource",
		Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialPositionTransformSource()
	{
		if (!Z_Registration_Info_UEnum_EMaterialPositionTransformSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialPositionTransformSource.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialPositionTransformSource.InnerSingleton;
	}
	void UMaterialExpressionTransformPosition::StaticRegisterNativesUMaterialExpressionTransformPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTransformPosition);
	UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister()
	{
		return UMaterialExpressionTransformPosition::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics
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
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTransformPosition.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "/** input expression for this transform */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
		{ "ToolTip", "input expression for this transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTransformPosition, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformSourceType_MetaData[] = {
		{ "Category", "MaterialExpressionTransformPosition" },
		{ "Comment", "/** source format of the position that will be transformed */" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "source format of the position that will be transformed" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformSourceType = { "TransformSourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTransformPosition, TransformSourceType), Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformSourceType_MetaData)) }; // 4065016134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformType_MetaData[] = {
		{ "Category", "MaterialExpressionTransformPosition" },
		{ "Comment", "/** type of transform to apply to the input expression */" },
		{ "DisplayName", "Destination" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "type of transform to apply to the input expression" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTransformPosition, TransformType), Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformType_MetaData)) }; // 4065016134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTransformPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::ClassParams = {
		&UMaterialExpressionTransformPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTransformPosition>()
	{
		return UMaterialExpressionTransformPosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTransformPosition);
	UMaterialExpressionTransformPosition::~UMaterialExpressionTransformPosition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_Statics::EnumInfo[] = {
		{ EMaterialPositionTransformSource_StaticEnum, TEXT("EMaterialPositionTransformSource"), &Z_Registration_Info_UEnum_EMaterialPositionTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4065016134U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTransformPosition, UMaterialExpressionTransformPosition::StaticClass, TEXT("UMaterialExpressionTransformPosition"), &Z_Registration_Info_UClass_UMaterialExpressionTransformPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTransformPosition), 1306729263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_2696319656(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
