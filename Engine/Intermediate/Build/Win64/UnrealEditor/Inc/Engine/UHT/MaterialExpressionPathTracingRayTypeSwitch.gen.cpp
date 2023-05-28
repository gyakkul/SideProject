// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPathTracingRayTypeSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPathTracingRayTypeSwitch::StaticRegisterNativesUMaterialExpressionPathTracingRayTypeSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPathTracingRayTypeSwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_NoRegister()
	{
		return UMaterialExpressionPathTracingRayTypeSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Main;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shadow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectDiffuse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectDiffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectSpecular_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectSpecular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Main_MetaData[] = {
		{ "Comment", "/** Used for camera rays (or for non-path traced shading) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used for camera rays (or for non-path traced shading)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, Main), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Main_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Shadow_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on shadow rays (this only applies for non-opaque blend modes) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on shadow rays (this only applies for non-opaque blend modes)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Shadow = { "Shadow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, Shadow), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Shadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Shadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectDiffuse_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on indirect diffuse rays */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on indirect diffuse rays" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectDiffuse = { "IndirectDiffuse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, IndirectDiffuse), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectDiffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectDiffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectSpecular_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on indirect specular rays */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on indirect specular rays" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectSpecular = { "IndirectSpecular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, IndirectSpecular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectSpecular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectSpecular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectVolume_MetaData[] = {
		{ "Comment", "/** Used by the path tracer on indirect volume rays */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingRayTypeSwitch.h" },
		{ "ToolTip", "Used by the path tracer on indirect volume rays" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectVolume = { "IndirectVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPathTracingRayTypeSwitch, IndirectVolume), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Main,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_Shadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectDiffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectSpecular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::NewProp_IndirectVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPathTracingRayTypeSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::ClassParams = {
		&UMaterialExpressionPathTracingRayTypeSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPathTracingRayTypeSwitch>()
	{
		return UMaterialExpressionPathTracingRayTypeSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPathTracingRayTypeSwitch);
	UMaterialExpressionPathTracingRayTypeSwitch::~UMaterialExpressionPathTracingRayTypeSwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPathTracingRayTypeSwitch, UMaterialExpressionPathTracingRayTypeSwitch::StaticClass, TEXT("UMaterialExpressionPathTracingRayTypeSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPathTracingRayTypeSwitch), 2635323124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_3345194457(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingRayTypeSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
